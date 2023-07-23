#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];

    }
    int p;
    cin>>p;
    vector<int>v1(p);

    for(int j=0;j<p;j++)
    {
        cin>>v1[j];
        
    }
    int position;
    cin>>position;

    v.insert(v.begin()+position,v1.begin(),v1.end());

    for(int x:v)
    {
        cout<<x<<" ";
    }



      
    return 0;
}