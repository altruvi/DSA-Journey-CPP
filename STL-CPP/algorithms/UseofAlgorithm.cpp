#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    vector<int> v;


    v.push_back(1);
    v.push_back(4);
    v.push_back(6);
    v.push_back(10);
    v.push_back(3);
    
    sort(v.begin(),v.end());//to perform upper bound and lower bound the vector must sorted.

    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;
    cout<<"Finding 5: "<<binary_search(v.begin(),v.end(),5)<<endl;

    cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    int a = 3;
    int b = 5;
    cout<<"max =>"<<max(a,b);
    cout<<"\nmin =>"<<min(a,b);

    swap(a,b);
    cout<<endl<<"a ->"<<a<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"String -> "<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;

}