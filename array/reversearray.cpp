#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start =0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++ ;
        end-- ;
    }
} 

void printarray(int arr[],int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1,2 ,5 ,9,-2 ,0};
    int brr[5]={2,6,4,9,0};

    reverse(arr,6);
    reverse(brr,5);

    printarray(arr,6);
    printarray(brr,5);
    
    return 0;
}