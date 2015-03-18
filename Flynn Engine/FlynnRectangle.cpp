#include "FlynnRectangle.h"

using namespace std;

void FlynnRectangle2D::SetPoints(){
	rectPoints[0] = topLeft;
	rectPoints[1] = GetTopRight();
	rectPoints[2] = GetBottomLeft();
	rectPoints[3] = GetBottomRight();
}

bool FlynnRectangle2D::PointCollision(FlynnVector2 point)const{
	FlynnVector2 max = GetBottomRight();
	return (point.x < max.x && point.x > topLeft.x &&
		point.y < max.y && point.y > topLeft.y);
}

bool FlynnRectangle2D::RectCollision(FlynnRectangle2D rectB)const{
	FlynnVector2 maxA, maxB;
	maxA = GetBottomRight();
	maxB = rectB.GetBottomRight();
	return (rectB.topLeft.x < maxA.x &&
		    maxB.y > topLeft.y);
}

bool FlynnRectangle2D::CircleCollision(FlynnCircle2D circle){
	FlynnVector2 point;
	SetPoints();
	for (int i = 0; i < numPoints; ++i){
		point = rectPoints[i];
		point.x = point.x - circle.center.x;
		point.x *= point.x;
		point.y = point.y - circle.center.y;
		point.y *= point.y;

		if (point.x + point.y < circle.radius * circle.radius){
			return true;
		}

	}
	return 0;
}