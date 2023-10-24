#pragma once
#include"Component.h"
#include "gif.h"
#include<stdlib.h>
#include<Windows.h>
class MobilePhone
{
private:
	string phoneName;
	bool isPhoneOn;
	Component camera;
	Component buttonPower;
	Component processor;
public:
	bool _isPhoneOn();
	MobilePhone(string phoneName);
	void powerOn();
	void powerOff();
	void makephoto();
	void playGame();

};

