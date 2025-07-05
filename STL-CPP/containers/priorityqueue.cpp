#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;
    //min heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1); //push log(n)  //top o() //pop log(n)
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n = maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    cout<<"Khali he kya maxi bhai: "<<mini.empty()<<endl;

    mini.push(5);
    mini.push(3);
    mini.push(6);
    mini.push(4);
    int m = mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Khali he kya mini bhai: "<<mini.empty()<<endl;
    return 0;
}