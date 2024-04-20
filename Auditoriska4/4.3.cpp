//
// Created by DAVIDOVSKI on 24/04/20.
//
//Да се промени претходната програма, така што покрај оценките ќе се испечатат и знаците + и – во зависност од вредноста на последната цифра на поените:
# include "iostream"
using namespace std;
int main(){
    int poeni;
    char znak=' ';
    cout<<"Vnesete go brojot na poeni"<<endl;
    cin>>poeni;
    int poeniZnak=poeni%10;
    if (poeniZnak>=1 && poeniZnak<=3){
        znak='-';
    }else if ((poeniZnak>=8 && poeniZnak<=9)|| poeniZnak==0){
        znak='+';
    }
    if (poeni<=0 ||poeni>=100){
        cout<<"Vnesovte poeni koj ne se vo rangot"<<endl;
        return 0;
    }
    if (poeni>90){
        cout<<"Ocenka 10"<<znak<<endl;
    }else if (poeni>80){
        cout<<"Ocenka 9"<<znak<<endl;
    }else if(poeni>70){
        cout<<"Ocenka 8"<<znak<<endl;
    }else if(poeni>60){
        cout<<"Ocenka 7"<<znak<<endl;
    } else if (poeni>50){
        cout<<"Ocenka 6"<<znak<<endl;
    }else if (poeni>0 || poeni<=49){
        cout<<"Ocenka 5"<<endl;
    }


}
/*
 *  #include <iostream>
    using namespace std;
    int main () {
        int poeni, ocenka = 0;
        cout<<"Vnesi poeni: "<<endl;
        cin>>poeni;
        if (poeni < 0 || poeni > 100)
            cout<<"Nevalidna vrednost za poeni!"<<endl;
        else {
            if (poeni > 90) ocenka = 10;
            else if (poeni > 80) ocenka = 9;
            else if (poeni > 70) ocenka = 8;
            else if (poeni > 60) ocenka = 7;
            else if (poeni > 50) ocenka = 6;
            else ocenka = 5;
            char znak = ' ';
            int pc = poeni % 10;
            if (ocenka != 5) {
                if (pc >= 1 && pc <= 3) znak = '-';
                else if (ocenka != 10 && (pc >= 8 || pc == 0))
                    znak = '+';
            }
            cout<<"Ocena: "<<ocenka<<znak<<endl;
        }
        return 0;
    }
 */