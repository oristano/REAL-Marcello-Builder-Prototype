#include "planeselector.h"


int main()
{
	PlaneSelector ps;
	ps.process(PlaneSelector::boing747);
	ps.process(PlaneSelector::spitfire);

	return 0;
}