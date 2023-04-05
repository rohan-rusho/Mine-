#include<iostream>
using namespace std;
int min1(int arr[], int n)
{
    int i,min=i;
    int j;
    for(i=1;i<=n;i++)
    {
    for(j=i+1;j<=n;j++)
    {
        if(arr[min]>arr[j])
        {
            min=j;
            return j;
        }
    }
    if(min!=i)
    {
        int temp=arr[min];
        arr[min]= arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
}


int main ()
{
    int i,j,n;
     int loc;
     cout<<"How many: ";
     cin>>n;
     
    int  arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   min1(arr,n);
    

    return 0;
}