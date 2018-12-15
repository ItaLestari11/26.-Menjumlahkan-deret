#include<iostream>
#include<conio.h>
using namespace std;

int main(){
int a=0,b,c,jumlah=0,i,n;

cout<<"Menghitung jumlah deret"<<endl;
cout<<"Masukan bilangan pertama"<<endl;
cin>>a;
cout<<"Masukan beda dari bilang pertama dan kedua"<<endl;
cin>>b;
cout<<"Masukan jumlah deret ke-n"<<endl;
cin>>n;

cout<<"Deret ke-n"<<n<<endl;
cout<<a<<",";
jumlah=jumlah + a;
for(int i=0; i<n-1; i++)
{
    c=a + b;
    a=c;
    cout<<c<<endl;
    jumlah=jumlah + c;
}
cout<<"\n Jumlah deret ke-"<<n<<endl;
cout<<jumlah<<endl;

return 0;
}
