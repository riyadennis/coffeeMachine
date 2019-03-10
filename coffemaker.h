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
#include <unistd.h>

using namespace std;

class Milk {
private:
    string mType;
public:
    void setMilkType(string mt){mType = mt;}
    string getMilkType(){return mType;}
};

class Coffee {
private:
    string dType;
public:
    void setCoffeeType(string dt){dType = dt;}
    string getCofeeType(){return dType;};
    
};

class Cappuccino: public Coffee{
private:
    string flavour;
    Milk m;
public:
    void SetMilk(Milk cm){m=cm;}
    void Make(Milk m){
        if (m.getMilkType() == "") {
            m.setMilkType("normal");
        }
        cout << "making " << "Cappuccino" << " using milk " << m.getMilkType() <<endl;
    }
};

class Esspresso: public Coffee{
private:
    string flavour;
public:
    void Make(){
        cout << "making " << "Esspresso" <<endl;
    }
};

void status(int timer){
    for (int i=0; i< timer; i++){
        cout << ".";
        fflush(stdout);
        sleep(1);
    }
    cout << endl;
}
#endif /* coffemaker_h */
