//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма со која ќе се отпечати максимумот од два броја чии вредности се читаат од тастатура.
# include "iostream"
using namespace std;
int main(){
    int a,b;
    cout<<"Vnesete gi 2ta broja: "<<endl;
    cin>>a>>b;
    if (a>b){
        cout<<"Maksimum e: "<<a<<endl;
    }else{
        cout<<"Maksimum e: "<<b<<endl;
    }
    return 0;
// maks = (a > b) ? a : b;
}