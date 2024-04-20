//
// Created by DAVIDOVSKI on 24/04/20.
//
//Да се напише програма што за внесен број на поени од испит ќе генерира соодветна оценка според следната табела:
# include "iostream"
using namespace std;
int main(){
    int poeni;
    cout<<"Vnesete go brojot na poeni"<<endl;
    cin>>poeni;
    if (poeni<=0 ||poeni>=100){
        cout<<"Vnesovte poeni koj ne se vo rangot"<<endl;
        return 0;
    }
    if (poeni>=90){
        cout<<"Ocenka 10"<<endl;
    }else if (poeni>=80){
        cout<<"Ocenka 9"<<endl;
    }else if(poeni>=70){
        cout<<"Ocenka 8"<<endl;
    }else if(poeni>=60){
        cout<<"Ocenka 7"<<endl;
    } else if (poeni>=50){
        cout<<"Ocenka 6"<<endl;
    }else if (poeni>0 || poeni<=49){
        cout<<"Ocenka 5"<<endl;
    }


}