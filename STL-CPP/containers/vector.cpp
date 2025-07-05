#include<iostream>
#include<vector>
#include <utility>
using namespace std;

void vectorExplain(){
    vector<int> v;
    vector<pair<int,int>> u;
    vector<int> a(5,1); //it declare size & intialize with all element 1.
    vector<int> last(a);//it copies all element of a in previous last vector
    
    vector<int>::iterator it = a.begin();  //v.begin points to the memory
    it++;
    cout<<*(it) <<" "; // By * the element get acessed inside the memory


    cout<<"Print last :"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size: "<<v.capacity()<<endl;//shows the capacity

    v.push_back(1);
    v.emplace_back(2); //same as push back but faster than push_back
    cout<<"Size: "<<v.capacity()<<endl;

    u.push_back({1,2});
    u.emplace_back(3,4);// no need of {} to express as pair it take auto matically
    for(auto i:u){
        cout<<i.first<<" "<<i.second<<"   ";
    }cout<<endl;  //check how to print a pair vector
    // for (auto [a, b] : u) {
    // cout << a << " " << b << endl;  # otherwise try this method to print a pair
    // }


    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.insert(v.begin() + 1, 4);
    v.insert(v.begin() + 1,3,10);
    cout<<"Size: "<<v.capacity()<<endl;
    //show the size of the vector
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Element at 2nd Index:"<<v.at(2)<<endl;
    cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;
    // cout<<"Last Element: "<<v.end()<<endl; //as it is not takes the end element it takes one past the last element  

    cout<<"Before pop : ";
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();//remove the recent push back element from vector

    cout<<"After pop : ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.erase(v.begin()+1);
    cout<<"print after first erase:";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
    v.erase(v.begin()+1,v.begin()+3);// Does not remove the the last element
    cout<<"print after second erase:";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;
    cout<<v.empty();
}

int main(){
    vectorExplain();
    return 0;
}