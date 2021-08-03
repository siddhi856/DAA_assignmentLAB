#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    cout<<"Enter the no. of test cases \n";
    cin>>m;
    while(m)
    {
        cout<<"Enter the size of the array \n";
        cin>>n;
        int a[n],el,c=0;
        cout<<"Enter the elements \n";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"Enter the element to search \n";
        cin>>el;
        for(i=0;i<n;i++)
        {
            if(a[i]==el)
            {
                cout<<"Element is present \n";
                break;
            }
            else
            {
                 c++;
            }
        }
        cout<<"No. of comparsion -- "<<c+1<<endl;
        m--;
    }

}
