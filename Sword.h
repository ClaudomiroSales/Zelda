#ifndef SWORD_H
#define SWORD_H

class Sword
{
public:
    Sword();
    ~Sword();

    void print( ) const;
    void useSword( );
    

private:

    double strength;
    int durability;

};

#endif // SWORD_H