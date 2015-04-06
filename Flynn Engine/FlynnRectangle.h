#include "FlynnVector.h"
#include "FlynnCircle.h"


#ifndef FLYNNRECTANGLE_H
#define FLYNNRECTANGLE_H

class FlynnRectangle2D{
  public:
	
	FlynnRectangle2D() : topLeft(0, 0), width(1), height(1){}
	FlynnRectangle2D(FlynnVector2 topL, float w, float h) : topLeft(topL), width(w), height(h){}

	FlynnVector2 GetTopRight()const{ return FlynnVector2(topLeft.x + width, topLeft.y); }
	FlynnVector2 GetBottomLeft()const{ return FlynnVector2(topLeft.x, topLeft.y + height); }
	FlynnVector2 GetBottomRight()const{ return FlynnVector2(topLeft.x + width, topLeft.y + height); }

	float Area()const{ return width * height; }
	float Perimeter()const{ return 2 * Area(); }
	float Diagonal()const { return sqrt((width * width) + (height * height)); }

	void SetPoints();
	bool PointCollision(FlynnVector2)const;
	bool RectCollision(FlynnRectangle2D)const;
	bool CircleCollision(FlynnCircle2D);

private:
	const int numPoints = 4;
	float width, height;
	FlynnVector2 topLeft, rectPoints[4];
};

#endif