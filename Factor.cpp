//find factors

#include<iostream>
using namespace std;

void  findFactors(int iNo)
{
     for(int i=1;i<iNo;i++)
     {
        if(iNo%i==0)
        {
            cout<<i<<endl;
        }
     }
}
int main()
{
    int iNo=0;

    cout<<"Enter the number"<<endl;
    cin>>iNo;
    
    findFactors(iNo);

    return 0;
}