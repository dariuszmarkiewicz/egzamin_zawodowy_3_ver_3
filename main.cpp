/*
Program sprawdza, czy w adresie email
wprowadzony zostal symbol @
*/

#include <iostream>

using namespace std;

int main()
{
    string inputText;
    cout << "Podaj adres email: ";
    cin >> inputText;

    bool symbol = false;

    for(int c : inputText)
        {
            if(c == '@')
                {
                    symbol=true;
                    break;
                }
        }

    if(symbol)
        cout << "Znaleziono symbol @ w adresie" << endl;
    else
        cout << "Brak symbolu @ w adresie" << endl;

    return 0;
}
