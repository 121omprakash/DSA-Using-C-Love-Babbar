#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=0;
    while(i<n)
    {
        int j=i+1;
        while (j>=1)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
}