#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int count=65;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<char(count+j)<<" ";
            j++;
        }
        cout<<endl;
        count=count+1;
        i++;
    }
}