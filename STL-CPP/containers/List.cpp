#include<iostream> 
#include<list>
using namespace std;

int main(){
    list<int> l;

    list<int> n(5,100);//5 positions fill with 100
    cout<<"Printing n: ";
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;
    // in list front insertion is possible
    l.push_back(1);//inserting an element in any position
    l.push_front(2);//inserting front element as two
    l.emplace_front(0);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"size of list:"<<l.size()<<endl;
    return 0;
}