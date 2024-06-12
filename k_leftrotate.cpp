#include<bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int>A;
    int n=arr.size();
    k=k%n;
    for(int i=0; i<n-k-1; i++){
        A.push_back(arr[i+n-k]);
    }
    for(int i=0; i<k; i++){
        A.push_back(arr[i]);
    }
    return A;
}

int main()
{
    int n;
    cin>>n;

    vector<int> A(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    cout<<"Enter k: ";
    int k;
    cin>>k;
    vector<int>a=rotateArray(A,k);

    for(int i=0; i<n; i++){cout<<a[i]<<" ";}
    cout<<endl;
}