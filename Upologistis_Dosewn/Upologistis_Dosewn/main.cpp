//
//  main.cpp
//  Upologistis_Dosewn
//
//  Created by Demetris Boukos on 15/12/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#include "initialize.h"

float epitokio(){return (Tokos*Kef_meiwmeno)/400;}

float dosi(){return (dosi_statheri + epitokio());}

void calculation(){
    cout<< y++ << "ος " << "Χρονος " << "\n";
    int x = 0;
    do {
        x++;
        cout<< "  Υπολοιπο Κεφαλαιο :" << Kef_meiwmeno << "\n";
        cout<< "  Σταθερη Δοση :" << dosi_statheri << "\n";
        cout<< "  Τοκος :" << epitokio() << "\n";
        cout<< "  Συνολικη Πληρωτεα Δοση :" << dosi() << "\n\n";
        Kef_meiwmeno = Kef_meiwmeno - dosi_statheri;
    } while (x < 4);
}

void input(){
    cout << "Δανειζομενο Κεφαλαιο: ";
    cin >> Kef_arx; 
    cout << "Τοκος: ";
    cin >> Tokos;
    cout << "Χρονια: ";
    cin >> years;
    cout << "\n";
    
    dosi_statheri = (Kef_arx/(4*years));
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

