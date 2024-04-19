//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е мала или голема буква печати 1 или 0, соодветно.
# include "iostream"
using namespace std;
int main(){
    char bukva;
    int rezultat;
    cout<<"Vnesete bukva"<<endl;
    cin >>bukva;
    rezultat = (bukva >='a')&&(bukva<='z');
    cout<<rezultat<<endl;
    //dodatok
    if (rezultat==0){
        cout<<"Bukvata e golema"<<endl;
    }else{
        cout<<"Bukvata e mala"<<endl;
    }

    return 0;

}