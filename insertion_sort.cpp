#include<iostream>
using namespace std;

int main ()
{
    int n,i,j,temp;
    
    cout<<"How many: ";
    cin>>n;
    int arr[n];
   for(i=1;i<=n;i++)
   {
    cin>>arr[i];
   }
   arr[0]=-10000000;
    for(i=2;i<=n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp<arr[j])
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=temp;
    }
    for(i=1;i<=n;i++){
    cout<<arr[i]<<" ";
    }
return 0;
}