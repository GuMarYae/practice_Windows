#include "robot.h"

int main(){
	
	// Initalize 2-D array! 
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			grid[i][j] = '.';
		}
	}
	
	grid[3][8] = 'B';
	grid[2][6] = 'C';
	
	// Print grid! 
	print2D();
	
	srand(0);
	
	int x		= rand() % 10;
	int y		= rand() % 10;
	int x2		= rand() % 10;
	int y2	 	= rand() % 10;
	
	
	Robot R1(x,y,false,'.');
	
	Robot R2(x2,y2,false,'.');

	std::cout << std::endl << R1 << R2 << std::endl;
	
	print2D();
	
	R1.moveTo(9,2);
	R2.moveTo(3,4);
	std::cout << std::endl << R1 << R2 << std::endl;
	
	print2D();
	
	R1.pickup(3,8);
	R1.dropOff(9,9);
	
	std::cout << std::endl << R1 << R2 << std::endl;
	
	print2D();
	
	R2.pickup(2,6);
	R2.dropOff(0,0);
	
	std::cout << std::endl << R1 << R2 << std::endl;
	
	print2D();
	
	clear(grid);
	
	std::cout << std::endl << R1 << R2 << std::endl;
	
	print2D();
	
	
	return 0;
}
