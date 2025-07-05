#include<iostream>
#include<deque>
using namespace std;

int main(){
    
    deque<int> d;

    d.push_back(1);// element inserting(any position)
    d.push_front(2);//front element inserting(front position)
    cout<<"The first index Element is: "<<d.at(1)<<endl;
    cout<<"Front Element: "<<d.front()<<endl;
    cout<<"Back Element: "<<d.back()<<endl;

    for(int i: d){
        cout<<i<<" ";
    }
    // d.pop_back();//back element is removed
    // cout<<endl;
    // for(int i:d){
    //     cout<<i<<endl;
    // }
     cout<<"Before clear size: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After clear size: "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<endl;
    }
    
    return 0;
}