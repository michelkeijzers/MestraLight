// LightSetup.h
// Set of pars/LED bars.

#pragma once

#include "ClassNames.h" 
#include "Par.h"
#include "Strobo.h"
#include "MestraTypes.h"


const fixture_number_t NR_OF_PARS = 14;


class LightSetupClass
{
protected:
  Par _pars[NR_OF_PARS];


  Strobo _strobo; 


public:
	LightSetupClass();

	~LightSetupClass();


	virtual void AddFixtures();


	Par& GetPar(fixture_number_t parNumber);


	Strobo& GetStrobo()
	{
		return _strobo;
	}
};


#ifndef _WINDOWS
extern LightSetupClass LightSetup;
#endif