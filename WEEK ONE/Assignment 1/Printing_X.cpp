#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int mid=(N+1)/2;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if(i==mid && j==mid)
            {
                cout<<"X";
                break;
            }
            else if (j == i)
            {
                cout << "\\";
            }
            else if(j==N-i+1)
            {
                cout<<"/";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
      
    return 0;
}