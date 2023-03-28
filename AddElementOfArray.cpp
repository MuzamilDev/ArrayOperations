#include<iostream>
using namespace std;

int main()
{
    int i;
    int element;
    int arr[10];



    cout<<"Enter Nine Elements "<<endl;
    for(i=0; i<9; i++)
        cin>>arr[i];

        cout<<"\nWant to Enter new Element: "<<endl;
        cin>>element;

        arr[i]=element;

        cout<<"\n Array with New Elements is: \n";
        for(i=0; i<10; i++)
            cout<<arr[i]<<" ";
            cout<<endl;


    return 0;

}
