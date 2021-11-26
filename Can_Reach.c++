#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a%c==0&&b%c==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    // your code goes here
    return 0;
} 
