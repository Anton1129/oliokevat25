#include "chef.h"
#include "italianchef.h"
Chef::Chef(string nimi){
    chefName="nimi";
    cout<<"[DEBUG]luotiin kokki nimeltä kokkikakkonen"<<endl;
}

Chef::~Chef() {
    cout<<"Destructor"<<endl;
    cout<<"[DEBUG]Ajettiin kokki ulos keittiöstä"<<endl;
}

string Chef::getName(){
    return chefName;
}

int Chef::makeSalad(int ainekset){
    cout<<"[DEBUG]salaatti annoksia saadaan"<<ainekset<<endl;
    return ainekset/5;
}

int Chef::makeSoup(int ainekset){
    cout<<"[DEBUG]soppa annoksia saadaan"<<ainekset<<endl;
    return ainekset/3;
}
