#include <iostream>
using namespace std;

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba <= 0)
    {
        cout << "Liczba musi byc dodatnia!" << endl;
        return 0;
    }

    cout << "Podana liczba: " << liczba << endl;

    return 0;
}
