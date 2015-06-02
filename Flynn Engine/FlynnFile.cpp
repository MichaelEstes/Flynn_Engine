#include "FlynnFile.h"

#include <fstream>
#include <sstream>

char* LoadFileCString(std::string fileName)
{
	char * file;
	std::stringstream buffer;
	std::ifstream s(fileName);
	buffer << s.rdbuf();
	file = new char[buffer.str().size() + 1];
	strcpy(file, buffer.str().c_str());
	return file;
}

std::string LoadFileString(std::string fileName)
{
	std::string file;
	std::stringstream buffer;
	std::ifstream s(fileName);
	buffer << s.rdbuf();
	file = buffer.str();
	return file;
}
