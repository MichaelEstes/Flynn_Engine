#include "FlynnVector.h"

#ifndef FLYNNRAY_H
#define FLYNNRAY_H

typedef enum rayType{
	ObjectRay = 0,
	LightRay,
	CameraRay
};

class FlynnRay2D{
public:
	FlynnVector2 origin, direction, pointOnRay;
	float length;
	rayType type;
	FlynnRay2D() : origin(0, 0), direction(0, 0), length(0){};
	FlynnRay2D(FlynnVector2 o, FlynnVector2 d, float l = 0) : origin(o), direction(d), length(l){
	direction.Normalize();};

	FlynnVector2 FindPoint()const{ return origin + (direction * length); }
	void Update(float increment = 0.1f){ length += increment; };

};

#endif