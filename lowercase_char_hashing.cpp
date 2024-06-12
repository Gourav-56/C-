#include<iostream>
using namespace std;

void input(char arr[],int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void count(int hash[],char arr[],int n){
    for(int i=0; i<n; i++){
        hash[arr[i]-'a']++;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    char arr[n];
    cout<<"Enter the elements:"<<endl;
    input(arr,n);

    int hash[26]={0};
    count(hash,arr,n);

    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;

    char x;
    cout<<"Enter the queries: "<<endl;
    while(t--){
        cin>>x;
        cout<<"count is : "<<hash[x-'a']<<endl;
    }
    return 0;
}