#include<iostream>
#include <climits>
using namespace std;

int getMin(int num[],int n){

    int mini = INT_MAX;
    for(int i = 0;i<n;i++){
        // if(num[i] < mini){
        //     mini =num[i];
        // }
        mini = min(mini,num[i]);
    }
    //returning min value
    return mini;
}

int getMax(int num[],int n){

    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        // if(num[i] > maxi){
        //     maxi =num[i];
        // }  or by this single code
        maxi = max(maxi,num[i]);
    }
    //returning max value
    return maxi;
}
int main(){

    int size;
    cout<<"Enter the size : ";
    cin>> size;

    int num[size];

    //taking input in array
    for(int i = 0;i<size;i++){
        cin>>num[i];
    }
    cout<<"Maximum value is : "<<getMax(num, size)<<endl;
    cout<<"Minimum value is : "<<getMin(num, size)<<endl;
}
