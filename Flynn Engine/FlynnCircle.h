#include "FlynnVector.h"

#define pi 3.14159f

#ifndef FLYNNCIRCLE_H
#define FLYNNCIRCLE_H

class FlynnCircle2D{
  public:
	  FlynnVector2 center;
	  float radius;

	  FlynnCircle2D() : center(0, 0), radius(1){}
	  FlynnCircle2D(FlynnVector2 c, float r) : center(c), radius(r) {}

	  float Diameter()const{ return radius * 2; }
	  float Circumference()const{ return Diameter() * pi; }
	  float Area()const{ return pi * (radius * radius); }
};


#endif