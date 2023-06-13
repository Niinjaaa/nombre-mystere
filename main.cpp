#include <iostream>
#include <math.h>

using namespace std;

int nb_triangle(int n)
{
    int result = n * (n + 1) / 2;
    return result;
}

int main() {

    int a = 0;
    int b = 0;

    for(int i = 0; i < 20; i++)
    {
        a = nb_triangle(i + 1);
        b = nb_triangle(i + 2);

        cout << "T" << i + 1 << " = " << int(a) << endl;
        cout << "T" << i + 2 << " = " << int(b) << endl;

        if(sqrt(a + b) == int(sqrt(a + b)))
        {
            cout << "carré : " << int(a + b) << " coté " << int(sqrt(a + b)) << "x" << int(sqrt(a + b)) << endl;
        }
    }

    return 0;
}
