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
    public
    int get(int){
        c=a+b;
        return c;
    }
    

};int main(){
    don kaka;
    kaka.get(5,4);

    return 0;
}