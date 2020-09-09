#include <iostream>

using namespace std;
int kvadar (int duzina, int sirina, int dubina, int sirinaplocice){
int dno = duzina * sirina;
int lijevaidesna = sirina * dubina;
int lijevaidesna2 = sirina * dubina;
int gornjaidonja = duzina * dubina;
int gornjaidonja2 = duzina * dubina;
return  (dno + lijevaidesna + gornjaidonja + lijevaidesna2 + gornjaidonja2) * sirinaplocice * sirinaplocice;


}
int main()
{
    int duzina, sirina, dubina;
    int sirinaplocice;
    std::cout << "Unesite duzinu, sirinu i dubinu bazena u metrima: " ;
    std::cin >> duzina >> sirina >> dubina;
    std::cout << "Unesite sirinu plocice u centimetrima: " ;
    std::cin >> sirinaplocice;
    std::cout << "Za poplocavanje bazena dimenzija " << duzina <<"x" << sirina << "x" << dubina <<"m" << " sa plocicama dimenzija "
    << sirinaplocice << "x" << sirinaplocice << " cm" << " potrebno je " <<  kvadar(duzina,sirina,dubina,sirinaplocice) << " plocica" ;
    return 0;
}
