#include <cmath>


#ifndef FLYNNVECTOR_H
#define FLYNNVECTOR_H


class FlynnVector2{
public:
	float x, y;
	FlynnVector2() : x(0), y(0){};
	FlynnVector2(float X, float Y) : x(X), y(Y){}

	float GetLength() const { return sqrt((x * x) + (y * y)); }
	void Normalize(){ *this /= GetLength(); }
	float Dot(FlynnVector2 rightVec) const { return (x * rightVec.x) + (y * rightVec.y); }

	FlynnVector2 operator+ (FlynnVector2) const;
	FlynnVector2 operator- (FlynnVector2) const;
	FlynnVector2 operator* (float) const;
	FlynnVector2 operator/ (float) const;
	FlynnVector2& operator+= (FlynnVector2);
	FlynnVector2& operator-= (FlynnVector2);
	FlynnVector2& operator*= (float);
	FlynnVector2& operator/= (float);
	FlynnVector2& operator= (FlynnVector2);
	bool operator== (const FlynnVector2&) const;
	bool operator!= (const FlynnVector2&) const;
};

class FlynnVector3{
public:
	float x, y, z;
	FlynnVector3() : x(0), y(0), z(0){};
	FlynnVector3(float X, float Y, float Z) : x(X), y(Y), z(Z) {}

	float GetLength() const { return sqrt((x * x) + (y * y) + (z * z)); }
	void Normalize(){ *this /= GetLength(); }
	float Dot(FlynnVector3 rightVec) const { return (x * rightVec.x) + (y * rightVec.y) + (z * rightVec.z); }
	FlynnVector3 Cross(FlynnVector3);

	FlynnVector3 operator+ (FlynnVector3) const;
	FlynnVector3 operator- (FlynnVector3) const;
	FlynnVector3 operator* (float) const;
	FlynnVector3 operator/ (float) const;
	FlynnVector3& operator+= (FlynnVector3);
	FlynnVector3& operator-= (FlynnVector3);
	FlynnVector3& operator*= (float);
	FlynnVector3& operator/= (float);
	FlynnVector3& operator= (FlynnVector3);
	bool operator== (const FlynnVector3&) const;
	bool operator!= (const FlynnVector3&) const;
};

#endif