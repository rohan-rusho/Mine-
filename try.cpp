#include <iostream>
using namespace std;

int binary(int arr[],int n)
{ 
    int i,j;
    int temp;
    for(i=0;i<n;i++)
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

//binary search here
    int st,e,m;
    st=0;
    e=n;
    int key;
    cout<<"\nTo Find: ";
    cin>> key;
int mid=(st+e)/2;
    while(st<=e)
    {
        
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
         mid=(st+e)/2;

    }
   

}

int main() {
    int i,j,n,k;
    cout<<"How many?: ";
    cin>>n;
    int arr[n];

    
    cout<<"In "<<binary(arr, n)+1<<" th index.";
    
	return 0;
}
