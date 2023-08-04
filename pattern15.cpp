#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int count=65+n-1;
    while(i<n)
    {
        int j=0;
        while(j<i+1)
        {
            cout<<char(count+j)<<" ";
            j++;
        }
        cout<<endl;
        count=count-1;
        i++;
    }
}