#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
    int count=0;
    while(i<n)
    {
        int space=n-i;
        while(space>1)
        {
            cout<<"   ";
            space--;
        }
        int j=0;
        while(j<i+1)
        {
            count=count+1;
            cout<<" "<< count<<" "  ;
            j++;
        }
        cout<<endl;
        i++;
    }
}