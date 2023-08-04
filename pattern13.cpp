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
        while(j<i+1)
        {
            cout<<char(count+j)<<" ";
            
            j++;
        }
        count=count+i+1;
        cout<<endl;
        i++;
    }
}