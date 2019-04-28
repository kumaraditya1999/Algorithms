#include<iostream>
#include<vector>

using namespace std;

int linear_search(vector<int>&arr, int ele){

    for(int i=0 ; i<arr.size() ; i++){
        if(arr[i]==ele){
            return i;
        }
    }

    return -1;
}

int main(){

    int n;
    cout<<"Enter the number of elements:\n";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements:\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ele;
    cout<<"Enter the element to be found:\n";
    cin>>ele;

    int pos = linear_search(arr,ele);

    if(pos==-1){
        cout<<"Element was not found\n";
    }else{
        cout<<"Element was found at position: "<<pos+1<<"\n";
    }


}