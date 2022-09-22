#include<iostream>
using namespace std;
int main()
{

    int x[8] = {2,7,10,8,6,9,1,4};

    int i;
    for(i=1; i<8; i++)
     {

        cout<<x[i]<<" "<<endl;
     }
     int sum = (2+7+10+8+6+9+1+4);

     cout<<"The sum is "<<sum<<endl;

     int avg = sum/8;

     cout<<"The average is = "<<avg<<endl;

     return 0;
}
