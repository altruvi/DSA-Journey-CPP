#include<iostream>
using namespace std;

void update (int arr[], int n){
    cout <<endl <<"Inside the function "<<endl;

    //updating array's first element
    arr[0] =120;

    //printing the array
    for(int i =0;i<3;i++){
        cout<<arr[i]<<" ";
    }cout <<endl;

    cout<<"Going back to main function"<<endl;
}

int main(){
    int arr[3] ={1, 2, 3};
    update(arr,3);

    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//array ke andar ka adrees ham function ko de rahe hein so 
//jab update karenge tab main ke andar ka pura array update ho jayega