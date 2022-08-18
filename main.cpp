#include <iostream>
using std::cout;

#include "Sword.h"
#include "Sword.cpp"

int main( )
{
    double strength = 2;
    int durability = 4;
    const int MAXATTACKBAD = 50;
        
    Sword royalGuardSword;
    cout << "Royal Guard Sword\n";
    royalGuardSword.print();
    Sword badGuardSword(strength, durability, MAXATTACKBAD);
    cout << "Bad Guard Sword\n";
    badGuardSword.print();    
    Sword otherBadGuardSword(badGuardSword);
    cout << "Other Guard Sword eh um copia da Royal Guard Sword\n";
    otherBadGuardSword.print();

    //Se fosse criado um método que tentasse alterar o máximo ataque ocorreria um erro
    //MAXATTACK só pode ser configurado na inicialização


    return 0;

}