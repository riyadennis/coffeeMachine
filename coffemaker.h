//
//  coffemaker.h
//  CoffeeMaker
//
//  Created by Riya Dennis on 10/03/2019.
//  Copyright © 2019 Riya Dennis. All rights reserved.
//

#ifndef coffemaker_h
#define coffemaker_h
#include <iostream>
using namespace std;


class Milk {
private:
    string mType;
public:
    void setMilkType(string mt){mType = mt;}
    string getMilkType(){return mType;}
};

class Drink {
private:
    string dType;
public:
    void setDrinkType(string dt){dType = dt;}
    string getDrinkType(){return dType;};
    void Make(Milk m){
        if (m.getMilkType() == "") {
            m.setMilkType("normal");
        }
        cout << "make" << dType << " using milk " << m.getMilkType() <<endl;
    }
    
};

class Cappuccino: public Drink{
private:
    string flavour;
    Milk m;
public:
    void SetMilk(Milk cm){m=cm;}
};

class Esspresso: public Drink{
private:
    string flavour;
    Milk m;
public:
    void SetMilk(Milk cm){m=cm;}
};

#endif /* coffemaker_h */
