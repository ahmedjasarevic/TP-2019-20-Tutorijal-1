#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int broj1,broj2,broj3;
    cout << "Unesite tri broja: " << endl;
    cin >> broj1 >> broj2 >> broj3;
    if (broj1 + broj2 < broj3)
        cout << "Ne postoji trougao cije su duzine stranica " << broj1 << ", " << broj2 << ", " << broj3 ;
    else if (broj2 + broj3 < broj1)
        cout << "Ne postoji trougao cije su duzine stranica " << broj1 << ", " << broj2 << ", " << broj3 ;
     else if (broj1 + broj3 < broj2)
        cout << "Ne postoji trougao cije su duzine stranica " << broj1 << ", " << broj2 << ", " << broj3 ;
    else {
            int obim= broj1 + broj2 + broj3;
        cout << "Obim trougla sa duzinama stranica " << broj1 << ", " << broj2 << ", " << broj3 << " iznosi " << obim << endl;
double s = (broj1+broj2+broj3) / 2;
double povrsina = sqrt(s*(s-broj1)*(s-broj2)*(s-broj3));
    cout << "Njegova povrsina iznosi: " << povrsina;
}
    return 0;
}
