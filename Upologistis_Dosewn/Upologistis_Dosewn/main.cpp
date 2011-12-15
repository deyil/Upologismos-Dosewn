//
//  main.cpp
//  Upologistis_Dosewn
//
//  Created by Demetris Boukos on 15/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "initialize.h"

float epitokio(){return (Tokos*Kef_meiwmeno)/100;}

float dosi(){return (dosi_statheri + epitokio());}

void calculation(){
    
    cout<< y++ << "os " << "xronos " << "\n";
    cout<< "Ypoloipo Kefalaio :" << Kef_meiwmeno << "\n";
    cout<< "Statheri dosi :" << dosi_statheri << "\n";
    cout<< "Tokos :" << epitokio() << "\n";
    cout<< "Sunoliki plirwtea dosi :" << dosi() << "\n\n";
    Kef_meiwmeno = Kef_meiwmeno - dosi_statheri;
}

void input(){
    cout << "Daneizomeno Kefalaio: ";
    cin >> Kef_arx; 
    cout << "Tokos: ";
    cin >> Tokos;
    cout << "Xronia: ";
    cin >> years;
    cout << "\n";
    
    dosi_statheri = (Kef_arx/years);
    Kef_meiwmeno = Kef_arx;
}

int main (int argc, const char * argv[])
{
    input();
    do {
        calculation();
        years--;
    } while (years>0);
    
    
    return 0;
}

