#include <iostream>
#include <cstdlib>
#include <random>

using namespace std;

int main() {

    srand(time(nullptr));
    int value = (rand() % (300 - 100) + 100);
    int choice;
    cout << "Entrez un nombre" << endl;
    cin >> choice;

    while (choice != value)
    {
        if(choice < value)
        {
            cout << "c'est plus" << endl;
            cin >> choice;
        }
        else if(choice > value)
        {
            cout << "c'est moins" << endl;
            cin >> choice;
        }
    }

    cout << "Bravo le nombre etait : " << value << endl;

    return 0;
}
