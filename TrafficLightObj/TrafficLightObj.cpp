/*
 Name:		TrafficLightObj.cpp
 Created:	12/13/2017 5:30:02 PM
 Author:	Bob Zhang
 Editor:	http://www.visualmicro.com
*/

#include "TrafficLightObj.h"

#include <LED.h>
#include <Arduino.h>

TrafficLightObj::TrafficLightObj() {}//MAY OR MAY NOT WORK

TrafficLightObj::TrafficLightObj(int beginPin) {
	red = LED((uint8_t)beginPin);
	yellow = LED((uint8_t)beginPin + 1);
	green = LED((uint8_t)beginPin + 2);
	staturs = -1;
	isAdvanceFlash = false;
}

bool TrafficLightObj::getIsAdvanceFlash() {
	if (staturs == 2) {
		if (isAdvanceFlash) {
			isAdvanceFlash = false;
			return true;
		}
		else { //not advance flash
			isAdvanceFlash = true;
			return false;
		}

	}
	else { //something went wrong
		Serial.println("DON't panic. TRAFFIC LIGHT AT ADVANCE FLASH BROKE!");//debug
		return false;
	}
}


void TrafficLightObj::setStaturs(int newStaturs) {
	staturs = newStaturs;
}
int TrafficLightObj::getStaturs() {
	return staturs;
}
