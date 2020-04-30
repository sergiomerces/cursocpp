#include <iostream>

using namespace std;

int Soma(int num1, int num2);

int main(int argc, char *argv[])
{
    int numA = 0, numB = 0;

    system("clear");
    cout << "\n\nDigite o primeiro número: ";
    cin >> numA;
    cout << "Digite o segundo número: ";
    cin >> numB;
    cout << numA << " + " << numB << " = " << Soma(numA, numB) << endl << endl;
    getchar();
    return 0;
}

int Soma(int num1, int num2)
{
    return num1 + num2;
}