#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0,d;
    for(int i=0;i<n;i++)
    {
        cin>>d;
        s+=d;
    }
    cout<<s/n*1.0<<endl;
}
