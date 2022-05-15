#pragma once
#include "Mammals.h";
#include <iostream>

using namespace std;

class Human : public Mammals
{
public:
	virtual void Walk() {
		cout << "Human is walking";
	}
};

