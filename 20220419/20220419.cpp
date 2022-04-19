
#include <iostream>
using namespace std;

int fibonaci(int numero)
{
    if (numero == 1 || numero == 2)
        return 1;
    else
        return fibonaci(numero - 1) + fibonaci(numero - 2);
}

int main()
{
    int numero;
    cin >> numero;
    cout << "El fibonaci de :" << numero << " es: "<< fibonaci(numero)<<endl;
}
