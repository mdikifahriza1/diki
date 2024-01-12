#include <iostream>
using namespace std;

int main()
{
    int baris;
    cout << "Masukkan Jumlah Baris: ";
    cin >> baris;

    for (int i = baris; i > 0; i--)
    {

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }

        for (int j = 0; j < baris - i; j++)
        {
            cout << " ";
        }
       
        for (int j = 0; j < baris - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }


        cout << "\n";
    }

    return 0;
}
