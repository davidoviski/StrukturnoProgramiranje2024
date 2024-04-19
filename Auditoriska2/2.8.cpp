//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква. - Напомена: Секој знак се претставува со ASCII број.
# include "iostream"
using namespace std;
int main(){
    char c;
    cout<<"Vnesete bukva"<<endl;
    cin>>c;
    cout<<"Od bukvata: "<<c<<" mala bukva e "<<char (c+('a'-'A'))<<endl;


}