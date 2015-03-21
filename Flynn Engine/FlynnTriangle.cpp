#include "FlynnTriangle.h"

FlynnVector3 FlynnTriangle3D::GetNormal(){
	FlynnVector3 temp = a - b;
	temp.Cross(b - c);
	return temp.Normalized();
}