#include<bits/stdc++.h>
using namespace std;

void input(vector<int> &A, int n) {
    A.resize(n);
    for(int i=0; i<n; i++) {
        cin>>A[i];
    }
}
void printA(vector <int> &A, int n) {
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }cout<<endl;
}
void swapp(int &x, int &y){
    int temp=x;
    x=y; 
    y=temp;
}
void bubble_sort(vector<int> &A, int n) {
    for(int i=n; i>0; i--){
        for(int j=0; j<=i-2; j++){
            if(A[j]>A[j+1]){
                swapp(A[j],A[j+1]);
            }
        }
    }
}
void recursive_bubble_sort(vector<int> &A, int n) {
    if(n==1)return; //base-case
    for(int j=0; j<=n-2; j++) {
        if(A[j]>A[j+1]){
            swapp(A[j],A[j+1]);
        }
    }
    recursive_bubble_sort(A,n-1);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    vector<int> A;
    cout<<"Enter the elements of the array: "<<endl;
    input(A,n);

    cout<<"Array before sorting: "<<endl;
    printA(A,n);

    recursive_bubble_sort(A,n);

    cout<<"Array after sorting: "<<endl;
    printA(A,n);
}