#include <iostream>
#include <cmath>
#include <iomanip>

const int velicina=9;
using namespace std;
double korijenuj (int a){
return sqrt(a);

}
int kvadriraj (int a){
return a*a;
}
int main()
{
    int broj1,broj2;
    cout << "Unesite pocetnu i krajnu vrijednost:" << endl;
    cin >> broj1 >> broj2;
    cout << "Brojevi" << endl;
    for (int i=broj1; i<=broj2; i++){
        cout<<setw(3)<<i<<" ";
    cout<<endl;}
     cout << "Kvadrati" << endl;
    for (int i=broj1; i<=broj2; i++){
        cout << kvadriraj(i) << endl;
        }

    cout << "Korijeni" << endl;
    for (int i=broj1; i<=broj2; i++){
        cout << korijenuj(i) << endl;
    }
    return 0;
}
