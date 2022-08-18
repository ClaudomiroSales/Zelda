#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"

int main( )
{
    int durability = 10;
    
    Sword royalGuardSword;
    royalGuardSword.print();

    cout << "Usando metodo get para obter a durabilidade: " 
         << royalGuardSword.getDurability() << "\n";
    
    cout << "Usando metodo set para configurar a durabilidade\n";
    royalGuardSword.setDurability( durability );

    cout << "Apos o novo valor: " << royalGuardSword.getDurability() << "\n";

    return 0;

}