#include<iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i,j,min;
    for(i=0;i<n;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
            if (arr[j] < arr[min])
                min = j;
        swap(arr[i],arr[min]);
    }
    cout<<"Sorted Array :";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    
    int i,j,n,temp;
    cout<<"How many: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    selectionSort(arr,n);
    
    
    return 0;
}