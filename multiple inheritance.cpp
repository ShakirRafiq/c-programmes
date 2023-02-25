#include<iostream>
using namespace std;
class cal{
int a,b;
public :
 
 void getdata(int i,int j){
    a=i;
    b=j;
    cout<<"a+b"<<a+b<<endl;
    cout<<"a/b"<<a/b<<endl;
    cout<<"a-b"<<a-b<<endl;
    cout<<"a*b"<<a*b<<endl;


 }

};
int main(){
    cal kaka;
    kaka.getdata(3,5);
}