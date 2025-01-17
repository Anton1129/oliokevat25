#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int);

int main()
{
    cout<<game(40);

    return 0;
}
int game(int maxnum){
    //arvotaan satunnainen luku
    srand(static_cast<unsigned>(time(0)));
    int random = rand() % maxnum+1;
    int arvaus;
    int lkm=0;


    //Kerrotaan tarkistuksen tulos
    while (true) {
        lkm++;
        //kysytään pelaajalta arvaus
        cout<< "anna arvaus\n";
        cin>> arvaus;

        //tarkistetaan arvaus
        if (arvaus==random){
            cout<<"true\n";
            break;
        }
        else if(arvaus<random){
            cout<<"luku on suurempi\n";
        }
        else{
            cout<<"luku on pienempi\n";
        }
    }

    return lkm;
}
