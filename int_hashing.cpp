#include<iostream>
using namespace std;

void input(int arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void count(int hash[], int arr[],int n){
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    input(arr,n);

    int hash[13] = {0};
    count(hash,arr,n);

    int x, t;
    cout<<"Enter test cases:"<<endl;
    cin>>t;

    cout<<"Enter elements:"<<endl;
    while(t--){
        cin>>x;
        cout<<"--"<<hash[x]<<endl;
    }
    return 0;
}