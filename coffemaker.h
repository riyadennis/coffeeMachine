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
protected:
    string dType;
public:
    Coffee(){};
    string getType(){return dType;}
    void setCoffeeType(string dt){dType = dt;}
    string getCofeeType(){return dType;};
    void status(int timer){
        for (int i=0; i< timer; i++){
            cout << ".";
            fflush(stdout);
            sleep(1);
        }
        cout << endl;
    }
    
};

class Cappuccino: public Coffee{
private:
    string flavour;
    Milk m;
public:
    Cappuccino() : Coffee(){
        this->dType = "Cappuccino";
        cout << endl << "Making a cup of cappuccino" << endl;
        cout << "Grind and brew one scoop of espresso beans." << endl;
        cout << "Heat and foam milk." << endl;
    }
    void SetMilk(Milk cm){
        m=cm;
        cout << " using milk " << m.getMilkType() <<endl;
    }
};

class Esspresso: public Coffee{
private:
    string flavour;
public:
    Esspresso(): Coffee(){
        this->dType = "Esspresso";
        cout << endl << "Making a cup of espresso" << endl;
        cout << "Grind and brew one scoop of espresso beans." << endl;
    }
};


class CofeeMaker{
private:
    Coffee * coffee;
public:
    Coffee * getCoffee(){
        int cType;
        cout << "Please select your drink" << endl;
        cout << "1. Cappuccino" << endl;
        cout << "2. Esspresso" << endl;
        cout << "3. Americano" << endl;
        cout << "4. Latte" << endl;
        cin >> cType;
        switch (cType) {
                case 1:
                    return new Cappuccino();
                case 2:
                return new Esspresso();
                default:{
                    cout << "machine not ready to process your option" << endl;
                    return NULL;
                }
        }
        return NULL;
    }
};



#endif /* coffemaker_h */
