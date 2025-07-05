#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;// First in First out

    q.push("Aswani");
    q.push("Sahoo");
    q.push("Kumar");
    cout<<"Size before pop:"<<q.size()<<endl;

    cout<<"First Element: "<<q.front()<<endl;
    q.pop();
    cout<<"First Element: "<<q.front()<<endl;
    
    cout<<"Size after pop:"<<q.size()<<endl;
    return 0;
}