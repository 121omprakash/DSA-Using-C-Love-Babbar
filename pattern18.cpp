#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    while(i<n)
    {
       int ast=n-i+1;
       while(ast>1)
        {
           cout<<" * ";
           ast--;
        }
        cout<<endl;
        i++;
    }
}