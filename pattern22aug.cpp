#include<iostream>
using namespace std;

int main()
{
   int c;
   cin>>c;
   int i=1;
   while(i<=c)
   {
     int j=1;
     while(j<=c)
     {
        cout<<i<<" ";
        j++;
     }
     cout<<endl;
     i++;
   }
}