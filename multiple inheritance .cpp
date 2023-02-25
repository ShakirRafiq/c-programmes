#include<iostream>
using namespace std;
class add{
    protected :
    int a;
};
class add2{
    protected:
    int b;
};
class don : public add, public add2{

    int c;
    public:
    int get(int m,int m1){
        m=a;
        m1=b;

    } void display(){
        cout<<"sum of a and b is  :"<<a+b;
    }

};int main(){
    don kaka;
    kaka.get(5,4);
    kaka.display();
}