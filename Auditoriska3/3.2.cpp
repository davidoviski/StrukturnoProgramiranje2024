//
// Created by DAVIDOVSKI on 24/04/19.
//
//Да се напише програма која ќе чита два цели броеви (x, y) од тастатура и на компјутерскиот екран ќе го испечати резултатот (z) од следниот израз
//
//z = x++ + --y + (x<y)
# include "iostream"
using namespace std;
int main(){
    cout<<"Vnesete vrednost za x"<<endl;
    int x;
    cin >>x;
    cout<<"Vnesete vrednost za y"<<endl;
    int y;
    cin >>y;
    int z;
    z= x++ + --y +(x<y);
    cout<<"vrednost za Z: "<<z<<endl;
    return 0;

}