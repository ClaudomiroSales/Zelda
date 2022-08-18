#ifndef SWORD_H
#define SWORD_H

class Sword
{
public:
    Sword();
    Sword( double, int = 100, double = 1000 );
    Sword( const Sword & );//Passagem por refência
    ~Sword();

    void print( ) const;

    int getStrength( ) const;
    int getDurability( ) const;
    void setStrength( double );
    void setDurability( int );

private:

    double strength;
    int durability;

    const double MAXATTACK;

};

#endif // SWORD_H