#include "FlynnOBJ.h"
#include "FlynnFile.h"
#include "FlynnVector.h"

#include <vector>
#include <string>

void loadOBJ(std::string objFileName)
{
	std::vector<FlynnVector3> * outVeritices;
	std::vector<FlynnVector2> * outTexCoords;
	std::vector<FlynnVector3> * outNormals;

	std::string objFile = LoadFileString(objFileName);
}