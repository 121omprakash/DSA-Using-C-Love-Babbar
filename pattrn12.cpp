#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
        int j=0;
        while(j<n)
        {
            cout<<char(65+i+j)<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}