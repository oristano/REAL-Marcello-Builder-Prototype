#pragma once
#ifndef MIG1_BUILDER_H
#define MIG1_BUILDER_H


#include "plane_builder.h"



class mig1Builder : public planebuilder
{
public:
	mig1Builder();
	mig1Builder(int a, int b, int c) {
		this->plane.seats = a;
		this->plane.engine = b;
		this->plane.weight = c;
	};

	int mig1Builder::buildSeats(int x) {
		this->plane.seats = x;
	}
	int  mig1Builder::buildEngine(int x) {
		this->plane.engine = x;
	}
	int  mig1Builder::buildWeight(int x) {
		this->plane.weight = x;
	}


#endif