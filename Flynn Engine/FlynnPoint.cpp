#include "FlynnPoint.h"
#include "FlynnVector.h"

FlynnPoint2 FlynnPoint2::operator+ (FlynnVector2 rightVec) const{
	return FlynnPoint2(*this) += rightVec;
}

FlynnPoint2 FlynnPoint2::operator- (FlynnVector2 rightVec) const{
	return FlynnPoint2(*this) -= rightVec;
}

FlynnPoint2& FlynnPoint2::operator+= (FlynnVector2 rightVec){
	x += rightVec.x;
	y += rightVec.y;
	return *this;
}

FlynnPoint2& FlynnPoint2::operator-= (FlynnVector2 rightVec){
	x -= rightVec.x;
	y -= rightVec.y;
	return *this;
}

FlynnPoint2& FlynnPoint2::operator= (FlynnPoint2 rightPoint){
	x = rightPoint.x;
	y = rightPoint.y;
	return *this;
}

bool FlynnPoint2::operator== (const FlynnPoint2& rightPoint) const{
	return (x == rightPoint.x && y == rightPoint.y);
}

bool FlynnPoint2::operator!= (const FlynnPoint2& rightPoint) const{
	return !operator==(rightPoint);
}


FlynnPoint3 FlynnPoint3::operator+ (FlynnVector3 rightVec) const{
	return FlynnPoint3(*this) += rightVec;
}

FlynnPoint3 FlynnPoint3::operator- (FlynnVector3 rightVec) const{
	return FlynnPoint3(*this) -= rightVec;
}

FlynnPoint3& FlynnPoint3::operator+= (FlynnVector3 rightVec){
	x += rightVec.x;
	y += rightVec.y;
	z += rightVec.z;
	return *this;
}

FlynnPoint3& FlynnPoint3::operator-= (FlynnVector3 rightVec){
	x -= rightVec.x;
	y -= rightVec.y;
	z -= rightVec.z;
	return *this;
}

FlynnPoint3& FlynnPoint3::operator= (FlynnPoint3 rightPoint){
	x = rightPoint.x;
	y = rightPoint.y;
	z = rightPoint.z;
	return *this;
}

bool FlynnPoint3::operator== (const FlynnPoint3& rightPoint) const{
	return (x == rightPoint.x && 
			y == rightPoint.y &&
			z == rightPoint.z);
}

bool FlynnPoint3::operator!= (const FlynnPoint3& rightPoint) const{
	return !operator==(rightPoint);
}