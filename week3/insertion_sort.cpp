#include<iostream>
using namespace std;
void insertion_sort(int n,int arr[])
{
    int i,j,t,comp=0,shift=0;
    for(i=1;i<n;i++)
    {
        t=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>t)
        {
            arr[j+1]=arr[j];
            j=j-1;
            comp++;

        }
        arr[j+1]=t;
        shift++;
    }
    cout<<"Sorted array \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"No of comparison \t"<<comp<<endl;
    cout<<"No of shifts \t"<<shift+comp<<endl;
}
int main()
{
    int t;
    cout<<"Enter the no of test cases \n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the limit of the array \n";
        cin>>n;
        int arr[n],i;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        insertion_sort(n,arr);
    }
}
