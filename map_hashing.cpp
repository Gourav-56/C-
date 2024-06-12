#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout<<"Enter the number of elements : ";
    // cin>>n;
    map<char,int> mpp;
    string arr;
    cin>>arr;
    
    int t;
    cout<<"Enter the number of test cases : ";
    cin>>t;

    char x;
    cout<<"Enter the queries: \n";
    for(int i=0; i<arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    while(t--)
    {
        cin>>x;
        cout<<"The count is : ";
        cout<<mpp[x]<<endl;
    }
    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}