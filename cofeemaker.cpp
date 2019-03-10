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
    Drink d;
    int dType;
    cout << "Please select your drink" << endl;
    cout << "1. Cappuccino" << endl;
    cout << "2. Esspresso" << endl;
    cout << "3. Americano" << endl;
    cout << "4. Latte" << endl;
    cin >> dType;
    
    Milk m;
    m.setMilkType("Soya");
    
    switch (dType) {
        case 1: {
            Cappuccino c;
            d.setDrinkType("Cappuccino");
            c.SetMilk(m);
            break;
        }
        case 2: {
            Esspresso e;
            d.setDrinkType("Esspresso");
            e.SetMilk(m);
            break;
        }
        default:{
            cout << "machine not ready to process your option";
            break;
        }
    }
    d.Make(m);
    cout << d.getDrinkType() << endl;
    return 0;
}
