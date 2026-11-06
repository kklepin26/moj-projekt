#include <iostream>
using namespace std;

bool czy_pierwsza(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    cout << "Podana liczba: " << liczba << endl;

    if (czy_pierwsza(liczba))
        cout << "Liczba jest pierwsza" << endl;
    else
        cout << "Liczba nie jest pierwsza" << endl;

    return 0;
}
