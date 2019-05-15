#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int>&arr,int n){
    int min_index;
   for (int i=0; i<n-1; i++){
       min_index = i;
       for(int j=i+1; j<n; j++){
           if(arr[j]<arr[min_index]){
               min_index = j;
           }
       }

       int temp = arr[i];
       arr[i] = arr[min_index];
       arr[min_index] = temp;

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

    selectionsort(arr,n);
    cout<<"\nThe sorted array is :\n";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
    return 0;
}