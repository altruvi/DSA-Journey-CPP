#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;//Last in first out

    s.push("Aswani");
    s.push("Sahoo");
    s.push("Kumar");

    cout<<"Top element: "<<s.top()<<endl;

    s.pop();
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Size of the stack: "<<s.size()<<endl;
    cout<<"Empty or Not: "<<s.empty()<<endl;

    return 0;
}