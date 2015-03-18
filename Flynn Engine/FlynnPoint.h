#include "FlynnVector.h"


#ifndef FLYNNPOINT_H
#define FLYNNPOINT_H

//Most likely useless

class FlynnPoint2{
public:
	float x, y;
	FlynnPoint2() : x(0), y(0){};
	FlynnPoint2(float X, float Y) : x(X), y(Y){}

	FlynnPoint2 operator+ (FlynnVector2) const;
	FlynnPoint2 operator- (FlynnVector2) const;
	FlynnPoint2& operator+= (FlynnVector2);
	FlynnPoint2& operator-= (FlynnVector2);
	FlynnPoint2& operator= (FlynnPoint2);
	bool operator== (const FlynnPoint2&) const;
	bool operator!= (const FlynnPoint2&) const;
};

class FlynnPoint3{
public:
	float x, y, z;
	FlynnPoint3() : x(0), y(0), z(0){};
	FlynnPoint3(float X, float Y, float Z) : x(X), y(Y), z(Z){}

	FlynnPoint3 operator+ (FlynnVector3) const;
	FlynnPoint3 operator- (FlynnVector3) const;
	FlynnPoint3& operator+= (FlynnVector3);
	FlynnPoint3& operator-= (FlynnVector3);
	FlynnPoint3& operator= (FlynnPoint3);
	bool operator== (const FlynnPoint3&) const;
	bool operator!= (const FlynnPoint3&) const;
};

#endif