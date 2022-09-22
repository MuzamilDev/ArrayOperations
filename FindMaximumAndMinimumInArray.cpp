#include<iostream>
using namespace std;

int main()

{

    int num[9] , i , min , max;

    cout<<"Enter Array of Elements: "<<endl;
    for(i=1; i<=9; i++)
        cin>>num[i];

max=num[0];
for(i=1; i<=9; i++)
    if(num[i]>max)
    max=num[i];

    min=num[0];
    for(i=1; i<=9; i++)
        if(num[i]<min)
        min=num[i];

    cout<<"Maximum  Value is: "<<max<<endl;
    cout<<"Minimum Value is: "<<min<<endl;

    return 0;
}
