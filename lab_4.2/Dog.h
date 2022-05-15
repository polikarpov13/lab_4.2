#pragma once
#include "Animals.h";
#include <iostream>

using namespace std;

class Dog : public Animals
{
public:
	virtual void Walk() {
		cout << "Dog is walking";
	}
};

