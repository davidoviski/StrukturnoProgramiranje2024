//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата (каматата е број изразен во проценти од 0 до 100). Програмата треба да го испечати износот на ратата и вкупната сума што ќе се исплати за производот
//
//ПОМОШ: Пресметајте ја целата сума, па потоа ратата.
# include "iostream"
using namespace std;
int main(){
    float cenaProizvod;
    int brRati;
    float kamata;
    float rata;
    float vkupno;
    cout<<"Vnesete cena na proizvodot"<<endl;
    cin >>cenaProizvod;
    cout<<"Vnesete brojot na rati"<<endl;
    cin>>brRati;
    cout<<"Vnesete ja kamatata"<<endl;
    cin>>kamata;
    vkupno=cenaProizvod*(1+kamata/100);
    rata=vkupno/brRati;
    cout<<"Edna rata iznesuva: "<<rata<<endl;
    cout<<"Vkupna isplatena suma ke bide: "<<vkupno<<endl;
    return 0;
}