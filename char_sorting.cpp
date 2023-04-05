#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    int i,j,n,temp;
    

   
    
    string str;
    cout<<"Enter String: ";
    
        cin>>str;
    int l = str.length()-1;

    for(i=0;i<l;i++)
    {
        for(j=0;j<l-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    
    cout<<str;
    
    return 0;

}
