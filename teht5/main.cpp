#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"

using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    n.postita("terve");

    n.poista(&b);

    n.tulosta();

    n.postita("mitä");

    return 0;
}
