#include<iostream>
using namespace std;
void find_duplicate(int n,int arr[])
{
     int i,j,min1,temp;
     for(i=0;i<n-1;i++)
    {
        min1=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min1])
                min1=j;
        }
        temp=arr[min1];
        arr[min1]=arr[i];
        arr[i]=temp;

      for(i=0;i<n-1;i++)
        {
         if(arr[i]==arr[i+1])
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
    cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
}

int main()
{
    int t;
    cout<<"Enter the no of test cases \n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int arr[n],i;
        cout<<"Enter the no of elements \n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        find_duplicate(n,arr);
    }
    return 0;
}
