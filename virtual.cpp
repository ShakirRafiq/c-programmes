#include<iostream>
using namespace std;

class dka{public :
      virtual void set(){
        cout<<"ok";
      }
};
class jka : public dka{
    void set(){
      cout<<"  im the best";
    }
};
int main(){ 
    dka *ptr;
   
    
jka kaka;
 ptr=&kaka;
ptr->set();

}