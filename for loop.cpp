#include <iostream>
using namespace std;

void untuk()
{

    cout<<"ini adalah pemanfaatan untuk membuat pola matriks sederhana: "<<endl;

    for(int a=1;a<=4;a++)
    {
//dalam matriks "cout<<endl;" untuk mengatur jumlah row
        cout<<endl;

//dalam matriks for loop yang ini untuk mengatur jumlah coloumn
        for(int b=1;b<=4;b++)
        {
            if(b>=a)
            {
                cout<<" "<<1<<" ";
            }
            else
            {
                cout<<" "<<0<<" ";
            }
        }
    }
}
