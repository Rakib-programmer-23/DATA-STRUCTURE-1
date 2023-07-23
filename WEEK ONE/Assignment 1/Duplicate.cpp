#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)
    {
       cin>>v[i];
      
    }
    int count=0;
    sort(v,v+n);
    for(int i=0;i<n-1;i++)
    {
       
        if(v[i]==v[i+1])
        {
            count++;
        }
       
     
     
    }
    if(count>0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
   
    
    
   
    return 0;
}