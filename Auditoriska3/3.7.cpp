//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма каде од тастатура ќе се внесе датумот на раѓање во формат (ddmmgggg). Програмата на компјутерскиот екран ќе го испечати денот и месецот на раѓање.
//
//Пример: Ако се внесе следниот број: 18091992, програмата ќе испечати: 18.9
# include "iostream"
using namespace std;
int main(){
    int datum;
    cout<<"Vnesete go datumot: "<<endl;
    cin>>datum;
    cout<<"Denot i mesecot se: "<<datum/1000000<<"."<<datum/10000%100<<endl;
    return 0;
}