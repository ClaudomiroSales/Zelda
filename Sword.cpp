#include <iostream>
using std::cout;

#include "Sword.h"

Sword::Sword( )
:strength(48), durability(14)
{
   cout << "Inicializando Sword no constructor.\n";
   //strength = 48;
   //durability = 14;
}

Sword::Sword( double strength, int durability )
{
   cout << "Inicializando Sword.\n";
   setStrength( strength );
   setDurability( durability );
}

Sword::~Sword( )
{  

}

void Sword::print( ) const
{
    cout << "Strength: "   << strength << '\n';
    cout << "Durability: " << durability << '\n';
}

int Sword::getStrength( ) const
{
    return strength;
}

int Sword::getDurability( ) const
{
    return durability;
}

void Sword::setStrength( double strength )
{
    if( strength >= 0 )
    {
        this->strength = strength;
        return;
    }

    this->strength = 0;

}

void Sword::setDurability( int durability )
{
    if( durability >= 0 )
    {
        this->durability = durability;
        return;
    }

    this->durability = 0;

}