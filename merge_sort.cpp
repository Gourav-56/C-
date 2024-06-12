#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &A, int low, int mid, int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(A[left]<=A[right]){
            temp.push_back(A[left]);
            left++;
        }else{
            temp.push_back(A[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(A[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(A[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        A[i]=temp[i-low];
    }
}
void ms(vector<int> &A, int low, int high){
    if(low==high)return;
    int mid=(low+high)/2;
    ms(A,low,mid);
    ms(A,mid+1,high);
    merge(A,low,mid,high);
}
void merge_sort(vector<int> &A,int n){
    ms(A,0,n-1);
}

void input(vector<int> &A, int n){
    A.resize(n); //now we ensured that the vector has n elements
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
}

void printA(vector<int> &A, int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    vector<int> A;
    cout<<"Enter the elements of the array: ";
    input(A,n);
    
    cout<<"Array before sorting: "<<endl;
    printA(A,n);
    merge_sort(A,n);
    cout<<"Array after sorting: "<<endl;
    printA(A,n);

    return 0;
}