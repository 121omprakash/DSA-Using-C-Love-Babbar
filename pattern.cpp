#include<iostream>
using namespace std;
int main()
{
    int n;
cout<<"Please enter the no"<<endl;
cin>>n;

int i;
while(i<=n)
{
    int j=1;
    while(j<=n)
    {
        cout<<j<<"  ";
        j=j+1;
    }
    cout<<endl;
    i=i+1;
}
}