#include "Calc.h"
#include <iostream>
using namespace std;

    void Calc::podaj_liczby()
    {
        cout<<"Podaj dwie liczby"<<endl;
        cin>>a;
        cin>>b;
    }

    void Calc::dodawanie()
    {
        cout<<"Dodawanie: "<<endl;
        cout<<a+b<<endl;
    }
    void Calc::odejmowanie()
    {
        cout<<"Odejmowanie: "<<endl;
        cout<<a-b<<endl;
    }
    void Calc::mnozenie()
    {
        cout<<"Mnozenie: "<<endl;
        cout<<a*b<<endl;
    }
    void Calc::dzielenie()
    {
        if(b==0)
        {
            cout<<"Pamiêtaj Cho... nie dziel przez 0 :P"<<endl;
            exit(-1);
        }
        else
        {
        cout<<"Dzielenie: "<<endl;
        cout<<a/b<<endl;
        }

    }

