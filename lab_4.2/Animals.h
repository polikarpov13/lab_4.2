#pragma once
#include "Mammals.h";
#include <iostream>

using namespace std;

class Animals : public Mammals
{
public:
	virtual void Walk() {
		cout << "Animal is walking";
	}
};

