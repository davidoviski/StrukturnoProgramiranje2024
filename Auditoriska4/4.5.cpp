//
// Created by DAVIDOVSKI on 24/04/20.
//
//Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се провери дали од дадените отсечки може да се конструра триаголник. Ако може, да се испечати дали триаголникот е разностран, рамностран или рамнокрак и да му се пресмета плоштината.
# include "iostream"
# include "cmath"
using namespace std;
int main(){
    float a,b,c;
    cout<<"Vnesee gi dolzinite na stranite"<<endl;
    cin>>a>>b>>c;
    if ((a+b<=c)||(a+c<=b)||(b+c<=a)){
        cout<<"Ne moze da se konstruira triagolnik"<<endl;
    }else{
        if (a==b && b==c){
            cout<<"Triagolnikot e ramnostran"<<endl;
        }else if(a==b||b==c||a==c){
            cout<<"Triagolnikot e ramnokrak"<<endl;
        }else{
            cout<<"Triagolnikot e raznostran"<<endl;
        }
        float p;
        float s;
        s=(a+b+c)/2;
        p= sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Plostinata e: "<<p<<endl;

    }
    return 0;

}
