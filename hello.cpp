#include <iostream>
using namespace std;
int main()
{
    int i, j, rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=rows; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}