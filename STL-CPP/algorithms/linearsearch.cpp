#include<iostream>
using namespace std;

bool search (int arr[],int size, int key){
    for(int i =0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10]= {5,6,2,9,22,-2,0,-6,3,1,};

    cout<<"Enter the element you search for: ";
    int key;
    cin>>key;

    //check wheather 1 is present in it or not
    bool found = search(arr,10 ,key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    return 0;
}