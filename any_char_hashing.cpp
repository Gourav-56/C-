#include<iostream>
using namespace std;
// 
// void input(char arr[],int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cin>>arr[i];
//     }
// }

void count(int hash[],string arr,int n)
{
    for(int i=0; i<n; i++)
    {
        hash[arr[i]-1]++;
    }
}

int main()
{
    string arr;
    cout<<"Enter the string: "<<endl;
    cin>>arr;

    // hash array of size 256(because there are total 256 characters)
    int hash[256]={0};

    count(hash,arr,arr.size());

    int t;
    cout<<"Enter the number of test cases: ";
    cin>>t;

    char x;
    cout<<"Enter the queries: "<<endl;
    while(t--)
    {
        cin>>x;
        cout<<"Count is : "<<hash[x-1]<<endl;
    }
    return 0;
}