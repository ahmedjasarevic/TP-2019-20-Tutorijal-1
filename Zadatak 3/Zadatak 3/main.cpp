#include <iostream>
#include <cmath>
#include <iomanip>


using namespace std;


int main()
{
        int broj1,broj2;
        cout << "Unesite pocetnu i krajnu vrijednost:" << endl;
        cin >> broj1 >> broj2;
        if (broj2 > 9999)
            return 0;
        if (broj1 > broj2)
            return 0;
        cout << "+---------+----------+----------+-----------+" << endl;
        cout << "| Brojevi | Kvadrati | Korijeni | Logaritmi |" << endl;
        cout << "+---------+----------+----------+-----------+"<<endl;
    for(int i = broj1; i <= broj2; i++){
        cout<<"| " << setw(8) << left << i << "|" << setw(9) << right << i*i << " |" << setw(9) << right <<
        fixed << setprecision(3) << sqrt(i) << " |" << setw(10) << right <<fixed <<  setprecision(5) << log(i) << " |" << endl;
    }
        cout << "+---------+----------+----------+-----------+" << endl;
    return 0;
}
