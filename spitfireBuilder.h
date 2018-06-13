#pragma once
#ifndef HTML_FILE_BUILDER_H
#define HTML_FILE_BUILDER_H


#include "plane_builder.h"


class  spitfireBuilder : public planebuilder
{
public:
	spitfireBuilder();
	spitfireBuilder(int a, int b, int c) {
		this->plane.seats = a;
		this->plane.engine = b;
		this->plane.weight = c;
	};

	int spitfireBuilder::buildSeats(int x) {
		this->plane.seats = x;
	}
	int  spitfireBuilder::buildEngine(int x) {
		this->plane.engine = x;
	}
	int  spitfireBuilder::buildWeight(int x) {
		this->plane.weight = x;
	}



#endif