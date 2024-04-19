//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма каде од тастатура ќе се внесе цена на производ, а потоа ќе ја испечати неговата цена со пресметан ддв.
//
//ПОМОШ: ДДВ е 18% од почетната цена
# include "iostream"
using namespace std;
int main(){
    float cena;
    cout<<"Vnesete cena na koja sakate da se presmeta ddv"<<endl;
    cin>>cena;
    cout<<"Presmetanoto ddv od 18 na cenata e "<<cena*0.18<<" a cenata so ddv e "<<cena*1.18<<endl;
    return 0;
}