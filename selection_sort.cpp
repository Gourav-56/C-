#include<iostream>
using namespace std;

void input(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
}

void printA(int A[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

void selection_sort(int A[],int n)
{
    int mini = 0;
    for(int i=0; i<n-1; i++)
    {
        mini=i;
        for(int j=i+1; j<n; j++)
        {
            if(A[mini]>A[j])
            {
                mini=j;
            }
        }
        // swapping first element with the minimum element
        int temp = A[mini];
        A[mini]=A[i];
        A[i]=temp;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int A[n];
    input(A,n);

    cout<<"Before Selection Sort: "<<endl;
    printA(A,n);
    selection_sort(A,n);
    cout<<"After Selection Sort: "<<endl;
    printA(A,n);

    return 0;
}