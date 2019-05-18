#include<bits/stdc++.h>
#define ll long long
#define mod 998244353 

using namespace std;


struct item{
    int key;
    int value;
};

void swap(item *a, item *b){
    item * temp = a;
    a = b;
    b = temp;
}


int partition(vector<item>&arr,int l,int r){

    item pivot = arr[r];
    int i = l-1;

    for(int j=l;j<=r-1;j++){

        if(arr[j].key < pivot.key || ( arr[j].key==pivot.key && arr[j].value <= pivot.value ) ){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[r]);
    return i+1;
}


void quickSort(vector<item>&arr,int l,int r){

    if(l<r){

        int pivot_index = partition(arr,l,r);

        quickSort(arr,l,pivot_index-1);
        quickSort(arr,pivot_index+1,r);


        vector<item>left,right;
    }
}




int main(){
    int n;

    cout<<"Enter the number of elements:\n";
    cin>>n;

    vector< item >arr(n);

    cout<<"Enter the key value pairs:\n";

    for(int i=0;i<n;i++){
        cin>>arr[i].key>>arr[i].value;
    }



    quickSort(arr,0,n-1);

    cout<<"The sorted pairs are:\n";

    for(int i=0;i<n;i++){
        cout<<arr[i].key<<"\t"<<arr[i].value<<"\n";
    }


}