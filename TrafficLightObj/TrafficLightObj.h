/*
 Name:		TrafficLightObj.h
 Created:	12/13/2017 5:30:02 PM
 Author:	Bob Zhang
 Editor:	http://www.visualmicro.com
*/

#ifndef _TrafficLightObj_h
#define _TrafficLightObj_h
#include <LED.h>

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
//Code here
class TrafficLightObj {


public:
	LED red;
	LED yellow;
	LED green;
	TrafficLightObj();
	TrafficLightObj(int beginPin);
	bool getIsAdvanceFlash();
	void setStaturs(int newStaturs);
	int getStaturs();

private:
	//memb var
	int staturs;//Current status of the TrafficLight. Can't use "status" because apparently it's a reserved c++ word.
	bool isAdvanceFlash;



};


#endif

