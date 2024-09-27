#include <iostream> 
#include <stdio.h>
#include <conio.h>
using namespace std;


int main(){ 

    // cout << "Saya sedang belajar C++" << endl;

    // int W, X, Y; float Z; 
    // X = 7; Y = 3; W = 1; 
    // Z = (X + Y)/(Y + W); 
    // cout<< "Nilai z = " << Z << endl; 

    // int r = 10; 
    // int s; 
    // system("cls"); 
    // s=10 + ++r; 
    // cout<< "Nilai r= "<<r<<endl; 
    // cout<< "Nilai s= "<<s<<endl; 
    // getch();


    // double tot_pembelian, diskon; 
    // cout<<"total pembelian: Rp"; 
    // cin>>tot_pembelian; 
    // diskon =  (tot_pembelian >= 100000) ? 0.05*tot_pembelian : 0; 
    // cout<<"besar diskon = Rp" <<diskon;

    int i =1;
    int jum;
    cin>> jum;
    do{
        cout<<"baris ke-"<<i+1<<endl;
        i++;
    }
    while (i<jum);
    getchar();

    cout<<""<<endl;
    
    int angka_ulang= 1;
    do {
        cout<<"baris ke-"<<angka_ulang<<endl;
        angka_ulang++;
    }
    while (angka_ulang<10);

    return 0;
} 