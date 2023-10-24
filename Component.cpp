#include "Component.h"
Component::Component() {
	this->name = "";

}
void Component:: setName(string name) {
	this->name = name;
}

string Component::getName() {
	return name;
}