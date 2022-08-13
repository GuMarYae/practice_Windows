#include "robot.h"

Robot::Robot(){
	xlocation_ 	= 0;
	ylocation_ 	= 0;
	cargoBed_	= false;
	load_		= '.';
}

Robot::Robot(int xlocation, int ylocation, bool cargoBed, char load){
	xlocation_ 	= xlocation;
	ylocation_ 	= ylocation;
	cargoBed_	= cargoBed;
	load_		= load;
}


void Robot::setX(int xlocation){
	xlocation_ = xlocation;
}

void Robot::setY(int ylocation){
	ylocation_ = ylocation;
}

int Robot::getX(){
	return xlocation_;
}

int Robot::getY(){
	return ylocation_;
}

void Robot::setCargo(bool cargoBed){
	cargoBed_ = cargoBed;
}

bool Robot::getCargo(){
	return cargoBed_;
}

void Robot::setLoad(char load){
	load_ = load;
}

char Robot::getLoad(){
	return load_;
}

bool Robot::moveTo(int x, int y){

	if( !(x >= 0 && x<=9) ){
		return false;
	}
	
	// Move left or right first!
	while(x != xlocation_){
		if(x > xlocation_){
			xlocation_++;
		}else if(x < xlocation_){
			xlocation_--;
		}
	}
	
	// Move up or down second!
	while(y != ylocation_){
		if(y > ylocation_){
			ylocation_++;
		}else if(y < ylocation_){
			ylocation_--;
		}
	}

	return true;
}

bool Robot::pickup(int x, int y){
	
	// Nothing is at the location
	if( grid[x][y] == '.' ){
		return false;
	}
	
	// Check cargo
	if(cargoBed_){
		return false;
	}
	
	// not currently at the location. 
	if(xlocation_ != x || ylocation_ != y){
		moveTo(x,y);
	}
	
	// Pick up the value from the grid. 
	load_ = grid[x][y];
	cargoBed_	= true;
	
	// Remove load from grid! 
	grid[x][y] = '.';
	
	// Stay at the location of picked up value!
	return true;
	
}

bool Robot::dropOff(int x, int y){
	
	// Nothing is at the location
	if( grid[x][y] != '.' ){
		return false;
	}
	
	// Check to see cargo
	if(!cargoBed_){
		return false;
	}
	
	// not currently at the location. 
	if(xlocation_ != x || ylocation_ != y){
		moveTo(x,y);
	}
	
	// Remove the load from truck! 
	cargoBed_ = false;
	
	// Drop off the load 
	grid[x][y] = load_;
	
	return true;
	
}

// Encapsolation! 
std::ostream& Robot::output(std::ostream& out){
	
	out << "(" << xlocation_ << ", " << ylocation_ << ") :" << load_ << std::endl;
	
	return out;
	
}

//								cout 	<< 		robot[i];
std::ostream& operator<< (std::ostream& out, Robot& robot){
	return robot.output(out);
}


void print2D(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			std::cout << grid[i][j];
		}
		std::cout << std::endl;
	}
}


void clear(char gridBoard[10][10]){
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			if(grid[i][j] != '.'){
				Robot* hello  = new Robot(i,j,false,'.');
				
				hello->pickup(i,j);
				
				delete hello;
			}
		}
	}
}
