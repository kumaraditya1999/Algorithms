#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>&arr,int n){

   for (int i=0; i<n-1; i++){
       for(int j=0; j<n-i-1; j++){
           if(arr[j]>arr[j+1]){
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }          
}

int main(){

    int n;

    cout<<"Enter the number of elements:\n";
    cin>>n;
    vector<int>arr(n);
    cout<<"\nEnter the elements of the arra:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bubblesort(arr,n);
    cout<<"\nThe sorted array is :\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    return 0;
}