#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"please enter the no"<<endl;
    cin>>n;

    int i;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<n-j+1<<"  ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}