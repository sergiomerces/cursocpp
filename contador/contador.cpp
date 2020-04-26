//Imprimir números até 1000

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    cout << "\n\n\t\t\t\tCONTAR ATÉ 1000" << endl << endl;

    for (i; i < 1001; i++)
    {
        cout << i;
        (i < 1000) ? cout << " - " : cout << " fim\a";
    }
    
    getchar();
    return 0;
}
