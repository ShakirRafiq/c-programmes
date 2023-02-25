#include<iostream>

#include<map>
#include<string>
using namespace std;
int main(){

     map<string,int>marksmap;

        marksmap["kamran"]=100;
        marksmap["tzzy"]=100;
        marksmap["owais"]=100;
        marksmap["usmaan"]=100;
        marksmap["amaan"]=100;
        map<string,int>::iterator it;
        for(it=marksmap.begin();it!=marksmap.end();it++){
            cout<<(*it).first<<" "<<(*it).second<<"\n";
        }
    return 0;
}