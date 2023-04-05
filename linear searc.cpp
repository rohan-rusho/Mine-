#include<iostream>
using namespace std;
int main ()
{
    int flag=0;
    char  n[9];
    char arr[50]="rohan";
    cout<<"Enter the letter:";
    cin>>n;
    for(int i=1;i<6;i++)
    {
        if (n[0]==arr[i])
        {
            flag++;
        }

    }
    if(flag!=0)
    {
        cout<<"Match Found"<<endl;
    }
    else
    {
        cout<<"Not Match Found"<<endl;
    }

     return 0;
}
