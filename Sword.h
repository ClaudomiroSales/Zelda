#ifndef SWORD_H
#define SWORD_H

class Sword
{
public:
    Sword();
    Sword( double, int = 100 );
    ~Sword();

    void print( ) const;

    int getStrength( ) const;
    int getDurability( ) const;
    void setStrength( double );
    void setDurability( int );

private:

    double strength;
    int durability;

};

#endif // SWORD_H