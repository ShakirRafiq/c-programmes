#include<iostream>
using namespace std;
template <class t1,class t2,class t3>
class kaka {
  public :
  t1 jam;
  t2 ram;
  t3 c;
  
       kaka( t1 a,t2 b){
        
        jam=a;
        ram=b;
    
        c=jam+ram;}

       void get(){
        
        cout<<"sum = :  "<<c<<endl;

       }
}; int main(){
          kaka<int,float,float> raka(2,3.3);
          raka.get();
}