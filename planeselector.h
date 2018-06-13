#ifndef FILE_SELECTOR
#define FILE_SELECTOR


#include "planedirector.h"
#include "boing747Builder.h"
#include "planebuilder2.h"
#include "planebuilder3.h"

//#include "plane_builder.h"



class PlaneSelector
{
public:
	inline enum planes { boing747, spitfire, mig1 };
	PlaneSelector();
	/*enum FILE_TYPE { TEXT, HTML };
	inline FileSelector();
	inline ~FileSelector();
	void process(FILE_TYPE ft);*/

private:
	boing747Builder* boing;
	spitfireBuilder* boing;
	mig1Builder* boing;


	/*FileDirector fd;
	TextFileBuilder* ptxtfb;
	HTMLFileBuilder* phtmlfb;*/
};


PlaneSelector::PlaneSelector()
	: ptxtfb(new TextFileBuilder("my_file")),
	phtmlfb(new HTMLFileBuilder("my_file"))
{}


PlaneSelector::~PlaneSelector()
{
	delete ptxtfb;
	delete phtmlfb;
}


void PlaneSelector::process(FILE_TYPE ft)
{
	switch (ft)
	{
	case TEXT: fd.setBuilder(ptxtfb);  break;
	case HTML: fd.setBuilder(phtmlfb); break;
	}

	fd.construct();
}


#endif