#include "FlynnVector.h"

class FlynnTriangle3D{

public:

	FlynnVector3 a, b, c;

	FlynnTriangle3D(FlynnVector3 A, FlynnVector3 B, FlynnVector3 C) : a(A), b(B), c(C){}

	FlynnVector3 GetNormal();

};