#include<iostream>
using namespace std;
void checkfun(int arr[],int n)
{
    int i,j,out,k,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           out=arr[i]+arr[j];
           for(k=0;k<n;k++)
           {
               if(arr[k]==out)
               {
                   cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                   temp=1;
                   break;
               }
           }
        }
    }
    if(temp==0)
    {
        cout<<"Not found \n";
    }

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
        int arr[n],i;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        checkfun(arr,n);
    }
}
