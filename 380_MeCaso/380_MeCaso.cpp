#include <iostream>

int main()
{
    unsigned long n;
    unsigned int gastos;
    unsigned int resultado;

    while (1)
    {
        std::cin >> n;
        if (n == 0)
        {
            break;
        }
        resultado = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> gastos;
            resultado = resultado + gastos;
        }
        std::cout << resultado << "\n";
    }
}
