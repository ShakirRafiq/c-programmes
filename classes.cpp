#include<iostream>
using namespace std;

class comp{
    int a,b;
    public:
    
    comp(){
        a=0;
        b=771;
        
        
    }
    comp(int x,int y){
        a=x;
        b=y;


    }
    comp(int x){
        a=x;
        b=0;
        
    }
    void p(){
        cout<<"its"<<a<<"its"<<b<<endl;}
    
};

int main(){

comp c1(3,5);
c1.p();
comp c2(3);
c2.p();


comp c3;
c3.p();


    return 0;
}