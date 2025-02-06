#include "seuraaja.h"

Seuraaja::Seuraaja(string x) {
    nimi=x;

}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string y)
{
    cout<<y<<endl;
}
