#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>

char grid[10][10];


class Robot{
	
	// private member variables. 
	int 	xlocation_;
	int 	ylocation_;
	bool	cargoBed_;
	char 	load_;
	
	public:
		
		Robot();
			// Build a constructor
		
		Robot(int,int,bool,char);
			// Constructor with params
		
		void setX(int);
			// Setter for xlocation_
		
		void setY(int);
			// Setter for ylocation_
		
		int getX();
			// Getter for xlocation_
		
		int getY();
			// Getter for ylocation_
		
		void setCargo(bool);
			// Setter for cargoBed_
		
		bool getCargo();
			// Getter for cargoBed_
		
		void setLoad(char);
			// Setter for load_
		
		char getLoad();
			// Getter for load_
		
		bool moveTo(int, int);
			// sets the xLocation and yLocation of the Robot object
		
		bool pickup(int, int);
			//Commands the robot to pick up a load on the grid and place it
			// in its cargoBed. 
		
		bool dropOff(int, int);
			// Commands the robot to drop off a load on the grid.
		
		std::ostream& output(std::ostream&);
			// Create an output for << function!
};


void print2D();
	// Print grid 

std::ostream& operator<< (std::ostream&, Robot&);
	// Output stream overload function!

void clear(char gridBoard[10][10]);

#include "robot.cpp"
#endif // !_ROBOT_H_
