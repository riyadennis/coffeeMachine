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
    Coffee c;
    int cType;
    bool success;
    cout << "Please select your drink" << endl;
    cout << "1. Cappuccino" << endl;
    cout << "2. Esspresso" << endl;
    cout << "3. Americano" << endl;
    cout << "4. Latte" << endl;
    cin >> cType;
    
    Milk m;
    m.setMilkType("Soya");
    
    switch (cType) {
        case 1: {
            Cappuccino ca;
            c.setCoffeeType("Cappuccino");
            ca.SetMilk(m);
            ca.Make(m);
            success = true;
            break;
        }
        case 2: {
            Esspresso e;
            e.Make();
            c.setCoffeeType("Esspresso");
            success = true;
            break;
        }
        default:{
            cout << "machine not ready to process your option" << endl;
            success = false;
            break;
        }
    }
    status(20);
    if (success){
        cout << "Your " << c.getCofeeType() << " is ready "<< endl;
    }
    
    return 0;
}
