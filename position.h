#ifndef POSITION_H
#define POSITION_H

#include "position.cc"

class Position{
		
	int x;
	int y;	
	
public: 
	
	int getX() const;
	int getY() const;
	void setX(int val);
	void setY(int val);
 
};


#endif
