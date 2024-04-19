//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма која за дадени страни на еден разностран триаголник ќе ги отпечати на екран периметарот и квадратот од плоштината (нека се работи со a = 5, b = 7.5, c = 10.2).

# include "iostream"
using  namespace std;
int main(){
    float a=5;
    float b=7.5;
    float c=10.2;
    float L=a+b+c;
    float S=L/2;
    float P=S*(S-a)*(S-b)*(S-c);
    cout<<"Perimetarot na triagolnikot e: "<<L<<endl;
    cout<<"Plostinata e "<<P<<endl;

}