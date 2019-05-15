#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&arr,int n){

   int key,j;  
    for(int i=1; i<n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while( j>=0 && arr[j]>key) 
        {  
            arr[j+1] = arr[j];  
            j= j-1;  
        }  
        arr[j+1] = key;  
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

    insertionsort(arr,n);
    cout<<"\nThe sorted array is :\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    return 0;
}