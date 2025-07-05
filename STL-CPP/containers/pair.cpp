#include<iostream>
using namespace std;

void explainpair(){
    pair<int, int> p = {1,3}; // data type can be anything

    cout<< p.first <<" " <<p.second<<endl;
    pair<int, pair<int,int>> q = {1,{3,4}};
    cout<<p.first<<" "<<q.second.second<<" "<<q.second.first<<endl;
    pair<int,int> arr[] = { {1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
    cout<<arr[2].second;
}

int main(){
    explainpair();
    return 0;
}