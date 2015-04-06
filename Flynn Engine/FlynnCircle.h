#include "FlynnVector.h"

#ifndef FLYNNCIRCLE_H
#define FLYNNCIRCLE_H

class FlynnCircle2D{
  public:
	  FlynnCircle2D() : center(0, 0), radius(1){}
	  FlynnCircle2D(FlynnVector2 c, float r) : center(c), radius(r) {}

	  float Diameter()const{ return radius * 2; }
	  float Circumference()const{ return Diameter() * pi; }
	  float Area()const{ return pi * (radius * radius); }

	  void SetCenter(FlynnVector2 c){ center = c; }
	  FlynnVector2 GetCenter(){ return center; }
	  float GetCenterX(){ return center.x; }
	  float GetCenterY(){ return center.y; }
	  void SetRadius(float r){ radius = r; }
	  float GetRadius(){ return radius; }
private:
	FlynnVector2 center;
	float radius;

};


#endif