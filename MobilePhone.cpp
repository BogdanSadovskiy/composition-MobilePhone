#include "MobilePhone.h"

MobilePhone::MobilePhone(string phoneName) {
	this->phoneName = phoneName;
	this->isPhoneOn = false;
	this->buttonPower.setName("power button");
	this->camera.setName("50MP camera");
	this->processor.setName("Snapdragon 1000");
}

bool MobilePhone::_isPhoneOn() {
	return this->isPhoneOn;
}
void MobilePhone::powerOn() {
	this->isPhoneOn = true;
	gif().powerOnGif();
	gif().standOn();
	cout << "\n\t\t\t\t\t  We have used\n\t\t\t\t\t   " << this->buttonPower.getName() << endl;
	Sleep(2000);
}
void MobilePhone::powerOff() {
	this->isPhoneOn = false;
	gif().powerOffGif();
	cout << "\n\t\t\t\t\t  We have used\n\t\t\t\t\t   " << this->buttonPower.getName() << endl;
	Sleep(2000);
}
void MobilePhone::makephoto() {
	gif().snapGif();
	cout << "\n\t\t\t\t\t  We have used\n\t\t\t\t\t   " << this->camera.getName() << endl;
	Sleep(2000);
}
void MobilePhone::playGame() {
	gif().playGif();
	cout << "\n\t\t\t\t\t  We have used\n\t\t\t\t\t   " << this->processor.getName() << endl;
}