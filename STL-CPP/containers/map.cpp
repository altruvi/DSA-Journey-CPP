#include<iostream>
#include<map>
using namespace std;

void explainmap(){
    
    map<int,string> m;
    map<int, pair<int,int>> m1;
    map<pair<int, int>, int> m2;
    m[1] = "Aswani";
    m[12] = "Kumar";
    m[3] = "Sahoo";
    m[7] = "Shri";

    m.insert({5,"Bheem"});

    cout<<"Before Erase: "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;// as paired <First ,Second>
    }
    cout<<"Finding 12: "<<m.count(12)<<endl;
    cout<<"Finding -12: "<<m.count(-12)<<endl;
    m.erase(12);
    cout<<"After Erase: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);
    cout<< (*it).second<<endl; // it gives second pair of 5
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}

int main(){
    explainmap();
    return 0;
}