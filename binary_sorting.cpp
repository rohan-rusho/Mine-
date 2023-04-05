#include<iostream>
using namespace std;
int BinarySearch(int n, int key, int arr[])
{
    int st,e;
    st=0;
    e=n;

    while(st<=e)
    {
        int mid=(st+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            st=mid+1;
        }
    }

}



int main ()
{
    int i,j,n,temp;
     int key;
    cout<<"How many: ";
    cin>>n;
    int arr[100];
    cout<<"Enter The "<<n<<" Array: ";
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Data: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nTo find: ";
    cin>> key;
    cout<<"In "<<BinarySearch(n,key,arr)+1<<" th index.";
    return 0;

}

