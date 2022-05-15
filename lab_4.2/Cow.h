#pragma once
#include "Animals.h";
#include <iostream>

using namespace std;

class Cow : public Animals
{
public:
	virtual void Walk() {
		cout << "Cow is walking";
	}
};

