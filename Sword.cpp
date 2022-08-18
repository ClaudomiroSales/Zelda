#include <iostream>
using std::cout;

#include "Sword.h"

Sword::Sword( )
:strength(48), durability(14), MAXATTACK(1000)
{
   //strength = 48;
   //durability = 14;
}

Sword::Sword( double strength, int durability, double MAXATTACK )
:MAXATTACK(MAXATTACK)
{
   setStrength( strength );
   setDurability( durability );
}

Sword::Sword( const Sword& other )
:MAXATTACK(other.MAXATTACK)
{
    this->strength = other.strength;
    this->durability = other.durability;
}

Sword::~Sword( )
{  

}

void Sword::print( ) const
{
    cout << "Strength: "   << strength << '\n';
    cout << "Durability: " << durability << '\n';
    cout << "Maximo ataque permitido: " << MAXATTACK << '\n';
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