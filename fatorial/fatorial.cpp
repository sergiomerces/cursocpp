//Calcular o fatorial de um número digitado pelo usuário
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int num = 0, fatorial = 1;

    setlocale(LC_ALL, "portuguese");

    cout << "\n\n\t\t\t\tCALCULAR O FATORIAL" << endl;
    cout << "\nDigite um número: ";
    cin >> num;
    cout << "O fatorial de " << num << " é: ";

    for (num; num > 0; num--)    
        fatorial *= num;
        
    cout << fatorial << endl << endl;        
    getchar();
    return 0;
}
