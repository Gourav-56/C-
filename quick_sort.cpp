#include<bits/stdc++.h>
using namespace std;

void input(vector<int> &arr, int n)
{
    arr.resize(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}
int f(vector<int> &arr, int low, int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<high)
        {
            i++;
        } 
        while(arr[j]>pivot && j>low)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void qs(vector<int> &arr,int low,int high)
{
    int partition=f(arr,low,high);
    qs(arr,low,partition-1);
    qs(arr,partition+1,high);
}
vector<int> quick_sort(vector<int> &arr)
{
    qs(arr,0,arr.size()-1);
    return arr;
}
void print(vector<int>arr,int n)
{
    arr.resize(n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array:"<<endl;
    vector<int> arr;
    input(arr,n);

    cout<<"Before Sorting:"<<endl;
    print(arr,n);

    vector<int> A = quick_sort(arr);
    cout<<"After Sorting:"<<endl;
    print(A,n);
    return 0;
}