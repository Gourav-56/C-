#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int z;
    cin>>z;
    for(int i=a; i<=b; i=i+z){
        int s=3;
        for(int k=1; k<=10; k++){
            int temp=i;
            if(k==1){
            for(int p=0; p<z; p++){
                if(temp>b)break;
                cout<<"TABLE"<<temp<<"\t";
                temp++;
            }cout<<endl;
            }
            temp=i;
            for(int j=0; j<z; j++){
                if(temp>b)break;
            cout<<temp<<"*"<<k<<"="<<k*temp<<"\t";
            temp++;
            }
            cout<<endl;
        }
    }
    return 0;
}