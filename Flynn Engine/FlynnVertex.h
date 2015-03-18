#include "FlynnVector.h"
#include "FlynnColor.h"

#ifndef FLYNNVERTEX_H
#define FLYNNVERTEX_H

struct FlynnVertexP
{
	FlynnVector3 vertPos;
};

struct FlynnVertexPN
{
	FlynnVector3 vertPos;
	FlynnVector3 vertNorm;
	float vertU_V[2]; // u, v texture cordinate
};


#endif