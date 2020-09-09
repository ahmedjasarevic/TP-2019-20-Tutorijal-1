#include <iostream>

using namespace std;


int povrsinaBazena (int duzina, int sirina, int dubina){
    int dno = duzina * sirina;
    int lijevaidesna = sirina * dubina;
    int gornjaidonja = duzina * dubina;
    return  (dno + lijevaidesna*2 + gornjaidonja*2);
}


double pretvoriCentimetar2uMetar2 (int stranica){
    return stranica*stranica/10000.0;
}


int main()
{
    int duzina, sirina, dubina;
    int sirinaplocice;
    std::cout << "Unesite duzinu, sirinu i dubinu bazena u metrima: " ;
    std::cin >> duzina >> sirina >> dubina;
    std::cout << "Unesite sirinu plocice u centimetrima: " ;
    std::cin >> sirinaplocice;
    pretvoriCentimetar2uMetar2(sirinaplocice);
    double f = povrsinaBazena(duzina,sirina,dubina) / pretvoriCentimetar2uMetar2(sirinaplocice);
    if (f - (int)f > 0){
    std::cout << "Poplocavanje bazena dimenzija  " << duzina <<"x" << sirina << "x" << dubina <<"m" << " sa plocicama dimenzija "
    << sirinaplocice << "x" << sirinaplocice << " cm " << " nije izvodljivo bez lomljenja plocica!"; }
    else {
    std::cout << "Za poplocavanje bazena dimenzija " << duzina <<"x" << sirina << "x" << dubina <<"m" << " sa plocicama dimenzija "
    << sirinaplocice << "x" << sirinaplocice << " cm " << " potrebno je " <<  f << " plocica" ; }
    return 0;
}
