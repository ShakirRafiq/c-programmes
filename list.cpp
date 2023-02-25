#include<iostream>
#include<list>


using namespace std;
list<int> :: iterator itr;
void display(list<int> &list){
    

    for(itr=list.begin();itr!=list.end();itr++){
 
            cout<<*itr<<"  ";}
            cout<<"\n";


}int main(){
        
        list<int>list;
        list.push_back(5);
        list.push_back(2);
        list.push_back(9);  
        list.push_back(1);  
        list.push_back(3);  
        // list.pop_back(); --> eleminates the last element of array
        //  list.pop_front();  --> eleminates the first  element of array
       
        list.reverse();
         list.sort();
        display(list);

       
        

                                                   
                                                   

    return 0;
}
