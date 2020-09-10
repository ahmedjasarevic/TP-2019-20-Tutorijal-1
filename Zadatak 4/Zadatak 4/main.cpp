#include <iostream>
using namespace std;


int main(){
    int broj1;
    int suma = 0;

    do {
        cout << "Unesite prirodan broj ili 0 za kraj: ";
        cin >> broj1;
        if (broj1 < 0 || !cin){
            cout << "Niste unijeli prirodan broj!";
            continue;
        }
        else if (broj1 == 0)
                break;

        for (int i=1; i<broj1; i++){
            if (broj1 % i == 0)
                suma+=i;
        }

        if (suma < broj1){
            cout << "Broj " <<broj1 <<" je manjkav" << endl;
        }
        else if (suma > broj1){
            cout << "Broj " <<broj1 <<" je obilan"<< endl;
        }
        else if (suma == broj1){
            cout << "Broj " <<broj1 <<" je savrsen"<< endl;
        }
        suma = 0;
    } while (broj1 != 0);
    return 0;
}

