#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void main() {
    int bilangan[] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
    vector<int> vektor(bilangan, bilangan + sizeof(bilangan) / sizeof(int));

    cout << "Vektor Awal : \n";
    for (int i = 0; i < vektor.size(); i++)
    {
        cout << " | " << vektor[i];
    }

    sort(vektor.begin(), vektor.end(), greater<int>());

    cout << "\n";
    cout << "Vektor DSC : \n";
    for (int i = 0; i < vektor.size(); i++)
    {
        cout << " | " << vektor[i];
    }

    double median;
    if (vektor.size() % 2 == 0) {
        median = (vektor[vektor.size() / 2 - 1] + vektor[vektor.size() / 2]) / 2.0;
    }
    else {
        median = vektor[vektor.size() / 2];
    }

    cout << "\n";
    cout << "Median : " << median << "\n";
;
}
