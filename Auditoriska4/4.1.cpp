//
// Created by DAVIDOVSKI on 24/04/20.
//
//Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.
# include "iostream"
using namespace std;
int main(){
    cout<<"Vnesete vrednost za x"<<endl;
    int x;
    cin>>x;
    cout<<"Vnesete vrednost za y"<<endl;
    int y;
    cin>>y;
    if (x>0 && y>0){
        cout<<"Tockata se naogja vo prviot kvadrant "<<endl;
    }else if(x<0 && y>0){
        cout<<"Tockata se naogja vo vtoriot kvadrant "<<endl;
    }else if (x<0 && y<0 ){
        cout<<"Tockata se naogja vo tretiot kvadrant "<<endl;
    }else if(x>0 && y<0){
        cout<<"Tockata se naogja vo cetvrtiot kvadrant "<<endl;
    }else if (x==0 && y==0){
        cout<<"Tockata se naogja kordinaten pocetok"<<endl;
    }else if(x==0 &y>0){
        cout<<"Tockata se naogja na x oskata"<<endl;
    }else{
        cout<<"Tockata se naogja na y oskata"<<endl;
    }
    return 0;
}
