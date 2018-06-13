#pragma once
#ifndef PLANE_BUILDER_H
#define PLANE_BUILDER_H


#include "plane_builder.h"


class boing747Builder : public planebuilder
{
public:
	boing747Builder();
	boing747Builder(int, int, int);
	virtual int buildSeats(int);
	virtual int buildEngine(int);
	virtual int buildWeight(int);
};

boing747Builder::boing747Builder(int a, int b, int c) {
	this->plane.seats = a;
	this->plane.engine = b;
	this->plane.weight = c;
};

int boing747Builder::buildSeats(int x) {
	this->plane.seats = x;
}
int boing747Builder::buildEngine(int x) {
	this->plane.engine = x;
}
int boing747Builder::buildWeight(int x) {
	this->plane.weight = x;
}





#endif