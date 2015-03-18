#include "FlynnColor.h"


class FlynnTexture
{
	FlynnColor4 * xColor, * yColor;
	int xRes, yRes;

	FlynnTexture()
	{
		xColor = new FlynnColor4[xRes];
		yColor = new FlynnColor4[yRes];
	}

	~FlynnTexture()
	{
		delete[] xColor;
		delete[] yColor;
	}

};