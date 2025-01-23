#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;
int main()
{
    Chef y=Chef("kokkikakkonen");
    ItalianChef x=ItalianChef("Pena");
    y.makeSalad(19);
    y.makeSoup(17);
    x.askSecret("pizza",15,13);



    return 0;
}


