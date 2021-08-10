#include<iostream>
using namespace std;
void checkfunc(int arr[],int n,int key)
{
    int i,j,out,c=0,sign=-1;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            out=arr[j]-arr[i];
            if(out<0)
            {
                out=out*sign;
            }
            if(out==key)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
}
int main()
{
    int t;
    cout<<"Enter the no. of test cases \n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int arr[n],i,key;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter the key element \n";
        cin>>key;
        checkfunc(arr,n,key);

    }
}
