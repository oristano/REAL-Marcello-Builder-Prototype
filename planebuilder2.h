#pragma once
#ifndef HTML_FILE_BUILDER_H
#define HTML_FILE_BUILDER_H


#include "plane_builder.h"


class  spitfireBuilder : public planebuilder
{
public:
	spitfireBuilder(int a, int b, int c) {
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