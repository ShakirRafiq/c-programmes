#include<iostream>
using namespace std;
#include<cmath>
class cal{
float a,b;
public :
 
 void getdata1(float i,float j){
    a=i;
    b=j;
    cout<<"a+b =" <<a+b<<endl;
    cout<<"a/b ="<<a/b<<endl;
    cout<<"a-b ="<<a-b<<endl;
    cout<<"a*b ="<<a*b<<endl;


 }

};
class sci{
float a,b;
public :

 void getdata2(float i,float j){
    a=i;
    b=j;
    cout<<"cos(a) =" <<cos(a)<<endl;
    cout<<"sin(b) ="<<sin(b)<<endl;
    cout<<"tan(a) ="<<tan(a)<<endl;
    


 }

};
class derived : public cal , public sci{

};
int main(){
    // cal kaka;
    // kaka.getdata(8.0,5.0);
    // sci raka;
    // raka.getdata(3,0);
    derived kaka;
    
    kaka.getdata1(3,9);


    kaka.getdata2(4,2);

}