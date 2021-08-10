#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key,int out)
{
    int left=0,right=n-1,re=-1,mid;
    while(left<=right)
    {
        mid=left+((right-left)/2);
        if(arr[mid]==key)
        {
            re=mid;
            if(out)     // for finding first occurence
            {
                right=mid-1;  // will search left
            }
            else        // for finding last occurence
            {
                left=mid+1;  // will search right
            }
        }
        else if(arr[mid]<key)
            left=mid+1;
        else
            right=mid-1;
    }
    return re;
}
int main()
{
    int t;
    cout<<"Enter the no. of test cases \n";
    cin>>t;
    while(t--)
    {
        int n,i,key,out,first,last,ans;
        cout<<"Enter the size of the array \n";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        cout<<"Enter the key element \n";
        cin>>key;
        first=binarySearch(arr,n,key,1);
        last=binarySearch(arr,n,key,0);
        if(first==-1)
        {
            cout<<"Not found \n";
        }
        else
        {
            ans=last-first+1;
            cout<<key<<" - "<<ans<<endl;
        }


    }
}
