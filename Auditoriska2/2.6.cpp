//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма за пресметување и печатење на плоштината и периметарот на круг. Радиусот на кругот се чита од стандарден влез (тастатура) како децимален број.

#include "iostream"
using namespace std;
int main (){
    float radius;
    cin >>radius;
    float perimetar=2*radius*3.14;
    float plostina=radius*radius*3.14;
    cout<<"Perimetarot e: "<<perimetar<<endl;
    cout<<"Plostinata e: "<<plostina<<endl;
    return 0;
}