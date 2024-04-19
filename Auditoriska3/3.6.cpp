//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма каде од тастатура ќе се внесе трицифрен цел број. Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот
//
//Пример: Ако се внесе бројот 795, програмата ќе испечати: Najznacajna cifra e 7, a najmalku znacajna e 5.
# include "iostream"
using namespace std;
int main(){
    cout<<"Vnesete 3 cifren cel broj"<<endl;
    int broj;
    cin>>broj;
    cout<<"Najznacajna cifra e: "<<broj/100<<endl;
    cout<<"Najneznacajna cifra e "<<broj%10<<endl;
    return 0;
}