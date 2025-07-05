#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    
    s.insert(5);
    s.insert(5);
    s.insert(4);
    s.insert(6);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);
    s.insert(3);
    s.insert(11);
    s.insert(15);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;// stores in a sorted manner
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not: "<<s.count(5)<<endl;
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5); //itr fins the position of 5 in the list
    //From element 5 onwards
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
  
    return 0;
}