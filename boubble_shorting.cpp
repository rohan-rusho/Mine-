#include<iostream>
using namespace std;
void Bubble(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<" ";
    }

    }


int main ()
{
    int i,j,n,temp;

    cout<<"How many: ";
    cin>>n;
    int arr[100];
    cout<<"Enter The "<<n<<" Array: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Bubble(arr,n);


    return 0;

}
