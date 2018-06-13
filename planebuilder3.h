#pragma once
#ifndef MIG1_BUILDER_H
#define MIG1_BUILDER_H


#include "plane_builder.h"



class mig1Builder : public planebuilder
{
public:
	mig1Builder(int a, int b, int c) {
		this->seats = a;
		this->engine = b;
		this->weight = c;
	};
};


int planebuilder::buildSeats(int x) {
	this->seats = x;
}
int planebuilder::buildEngine(int x) {
	this->engine = x;
}
int planebuilder::buildWeight(int x) {
	this->weight = x;
}


#endif