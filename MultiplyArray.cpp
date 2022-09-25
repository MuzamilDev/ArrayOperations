#include<iostream>
using namespace std;

int main()
{
    int x[3];
    int y[3];
    int multiply[3];

    cout<<"Enter Integer of A: "<<endl;
    for(int i=0; i<3; i++)
    {
        cin>>x[i];
    }
    cout<<"Enter Integer of B: "<<endl;
    for(int i=0; i<3; i++)
    {
        cin>>y[i];
    }

    cout<<"The Multiplication of Two Arrays is: "<<endl;
    for(int i=0; i<3; i++)
    {
        multiply[i]=x[i]*y[i];
        cout<<multiply[i]<<" ";
    }
    return 0;
    }
