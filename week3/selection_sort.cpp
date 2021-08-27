#include<iostream>
using namespace std;
void selection_sort(int n,int arr[])
{
    int i,j,min1,temp,swaps=0,comp=0;
    for(i=0;i<n-1;i++)
    {
        min1=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min1])
                min1=j;
                comp++;
        }
        temp=arr[min1];
        arr[min1]=arr[i];
        arr[i]=temp;
        swaps++;
    }
    cout<<"Sorted array \n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<"No of swaps - "<<swaps<<endl;
    cout<<"No of comparison - "<<comp<<endl;

}

int main()
{
    int t;
    cout<<"Enter no of test cases \n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int arr[n],i;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        selection_sort(n,arr);

    }

}
