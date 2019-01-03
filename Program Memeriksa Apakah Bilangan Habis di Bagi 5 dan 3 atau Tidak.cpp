#include<iostream>
using namespace std;
int main (){
int i;

cout<<"PROGRAM MEMERIKSA APAKAH BILANGAN HABIS DIBAGI 5 DAN 3 ATAU TIDAK"<<endl;
cout<<"Masukan Bilangan : ";
cin>>i;
if(i%3==0 & i%5==0)
cout<<i<<"Merupakan Bilangan yang habis dibagi 5 dan 3"<<endl;
else{
cout<<i<<"Merupakn Bilanhgan yang tidak habis dibagi 5 dan 3"<<endl;
}
return 0;
}
