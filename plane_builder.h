#pragma once
#ifndef FILE_BUILDER_H
#define FILE_BUILDER_H

#include <iostream>
#include <fstream>
using namespace std;

class Plane
{
public:
	int seats;
	int weight;
	int engine;
};

class planebuilder
{
public:
	virtual int buildSeats(int x) = 0;
	virtual int buildEngine(int x) = 0;
	virtual int buildWeight(int x) = 0;
	virtual Plane getPlane() = 0;
protected:
	Plane plane;
};


#endif