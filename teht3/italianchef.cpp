#include "italianchef.h"
#include "chef.h"

ItalianChef::ItalianChef(string x):Chef(x) {
    cout<<"[DEBUG]Tehtiin italialainen kokki nimeltä"<<x<<endl;

}

ItalianChef::~ItalianChef()
{

}

bool ItalianChef::askSecret(string x, int y, int z){
    if(password==x){
    cout<<"[DEBUG]salasana oikein\n";
    makepizza(y,z);
    }
    return (password==x);
}


int ItalianChef::makepizza(int flour, int water){
    int maara;
    maara=min (flour/5, water/5);
    cout<<"[DEBUG]Tehdään"<<maara<<"pizzaa\n";
    return maara;

}
