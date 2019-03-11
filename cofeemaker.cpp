//
//  main.cpp
//  CoffeeMaker
//
//  Created by Riya Dennis on 10/03/2019.
//  Copyright © 2019 Riya Dennis. All rights reserved.
//

#include <iostream>
#include "coffemaker.h"
using namespace std;

int main(int argc, const char * argv[]) {
    CofeeMaker cm;
    Coffee *c;
    c = cm.getCoffee();
    cout << "Your " << c->getCofeeType() << " is ready "<< endl;
    return 0;
}
