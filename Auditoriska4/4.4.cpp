//
// Created by DAVIDOVSKI on 24/04/20.
//

# include "iostream"

using namespace std;
int main(){
    float a ,b ,c;
    cout<<"Vnesete gi 3 te otsecki edna po druga"<<endl;
    cin>>a>>b>>c;
    if ((a+b<=c)||(a+c<=b)||(b+c<=a)){
        cout<<"Ne moze da se konstruira truagolnik"<<endl;
    }else{
        if (a>=b){
            float tmp=a;
            a=b;
            b=tmp;
        }
        if (a>=c){
            float tmp =a;
            a=c;
            c=tmp;
        }
        if (b>=c){
            float tmp=b;
            b=c;
            c=tmp;
        }
        if (c*c == a*a +b*b){
            cout<<"Triagolnikot e pravoagolen"<<endl;
            cout<<"Plostinata mu e "<<a*b/2;
        }else{
            cout<<"Triagolnikot ne e pravoagolen"<<endl;
        }
        return 0;

    }
}

