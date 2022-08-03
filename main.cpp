#include <iostream>
#include "Calc.h"
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
        int g;
        Calc c1;
        c1.podaj_liczby();

        cout<<endl;

        cout<<"wybierz dzia³anie matematyczne"<<endl;
        cout<<"1. Dodawanie "<<endl;
        cout<<"2. Odejmowanie "<<endl;
        cout<<"3. Mnozenie "<<endl;
        cout<<"4. Dzielenie "<<endl;
        cin>>g;

        cout<<endl;

        switch(g)
        {
            case 1: c1.dodawanie(); break;
            case 2: c1.odejmowanie(); break;
            case 3: c1.mnozenie(); break;
            case 4: c1.dzielenie(); break;
        }



    return 0;
}
