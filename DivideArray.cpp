#include<iostream>
using namespace std;

int main()
{

    int a[5];
    int b[5];
    int divide[5];
    cout<<"Enter Five Integers: "<<endl;
    for(int i=0; i<5; i++)
    {

        cin>>a[i];
    }
    cout<<"Enter Five Integers: "<<endl;
    for(int i=0; i<5; i++)
    {

        cin>>b[i];
    }
    cout<<"The Division is: "<<endl;
    for(int i=0; i<5; i++)
    {
    divide[i]=a[i]/b[i];
    cout<<divide[i]<<" ";
    }

    return 0;
}
