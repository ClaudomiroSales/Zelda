#include <iostream>
using std::cout;

#include "Sword.h"

Sword::Sword( )
{
   cout << "Inicializando Sword no constructor.\n";
   strength = 48;
   durability = 14;
}


Sword::~Sword( )
{  

}

void Sword::print( ) const
{
    cout << "Strength: "   << strength << '\n';
    cout << "Durability: " << durability << '\n';
}

void Sword::useSword( ){
    strength -= 2;
}