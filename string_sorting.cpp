#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout<<"Enter Your String: ";
    cin>>str;
    cout<<"After Sorting: ";
    sort(str.begin(), str.end());
   cout << str<<"\n";
    return 0;
}