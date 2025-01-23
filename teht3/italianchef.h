#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"
using namespace std;

class ItalianChef:public Chef{
public:
    ItalianChef(string);
    ~ItalianChef();
    bool askSecret(string, int, int);

private:
    string password="pizza";
    int flour;
    int water;
    int makepizza(int, int);

protected:
    string chefName;
};

#endif // ITALIANCHEF_H