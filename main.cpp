#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"

int main( )
{
    double strength = 2;
    int durability = 4;
        
    Sword royalGuardSword;
    cout << "Royal Guard Sword\n";
    royalGuardSword.print();
    Sword badGuardSword(strength, durability);
    cout << "Bad Guard Sword\n";
    badGuardSword.print();    

    return 0;

}