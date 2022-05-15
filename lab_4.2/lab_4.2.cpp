#include "Mammals.h"
#include "Animals.h"
#include "Dog.h"
#include "Cow.h"
#include "Human.h"
#include <iostream>

int main()
{
    Mammals* obj[4];

    obj[0] = new Animals();
    obj[1] = new Dog();
    obj[2] = new Cow();
    obj[3] = new Human();

    for (int i = 0; i < 4; i++)
        obj[i]->Walk(); cout << endl;
}
