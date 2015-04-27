#include "FlynnVector.h"

#ifndef FLYNNRAY_H
#define FLYNNRAY_H

class FlynnRay3D{
public:
	
	FlynnRay3D() : origin(0, 0, 0), direction(0, 0, 0){};
	FlynnRay3D(FlynnVector3 o, FlynnVector3 d) : origin(o), direction(d.Normalized()){}
	FlynnVector3 GetPointAt(float length)const{ return origin + (direction * length); }
	void SetOrigin(FlynnVector3 o){ origin = o; }
	FlynnVector3 GetOrigin(){ return origin; }
	void SetDirection(FlynnVector3 d){ direction = d.Normalized(); }
	FlynnVector3 GetDirection(){ return direction; }


private:
	FlynnVector3 origin, direction;
};

#endif