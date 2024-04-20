//
// Created by DAVIDOVSKI on 24/04/20.
//
//Да се напише програма што ќе претставува едноставен калкулатор. Во програмата се вчитуваат два броја и оператор во формат:
#include "iostream"
using namespace std;
int main(){
    int broj1,broj2,rezultat;
    char operatorr;
    cout<<"Vnesete dva broja so opperator"<<endl;
    cin>>broj1>>operatorr>>broj2;
    switch (operatorr) {
        case'+':
            rezultat=broj1+broj2;
                    break;
        case'-':
            rezultat=broj1-broj2;
            break;
        case'*':
            rezultat=broj1*broj2;
            break;
        case'/':
            rezultat=broj1/broj2;
            break;
        default:
            cout<<"Nepoznat operator"<<endl;
            return 0;
    }
    cout<<broj1<<" "<<operatorr<<" "<<broj2<<" = "<<rezultat<<endl;
}