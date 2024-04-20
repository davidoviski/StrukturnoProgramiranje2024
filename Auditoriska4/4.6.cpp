//
// Created by DAVIDOVSKI on 24/04/20.
//
//Да се напише програма за пресметување на возраста на едно куче во човечки години. Кучешката возраст се чита од стандарден влез.
//
//Доколку се внесе негативен број за возраста, да се испечати следната порака: “Vozrasta mora da bide pozitiven broj”.
//
//Забелешка: За првите две години, една кучешка година е еднаква на 10,5 човечки години. После тоа, секоја кучешка година е еднаква на 4 човечки години.
# include "iostream"
using namespace std;
int main(){
    int kuceskiGodini;
    cout<<"Vnesete go brojot na kuceski godini"<<endl;
    cin>>kuceskiGodini;
    int coveckiGodini;
    if (kuceskiGodini<0){
        cout<<"Vozrasta mora da bide pozitiven broj";
        return 0;
    }
    if (kuceskiGodini<=2){
        coveckiGodini=kuceskiGodini*10.5;
    }else{
        coveckiGodini=2*10.5+((kuceskiGodini-2)*4);
    }
    cout<<"Godini na kuceto: "<<coveckiGodini<<endl;
    return 0;
}