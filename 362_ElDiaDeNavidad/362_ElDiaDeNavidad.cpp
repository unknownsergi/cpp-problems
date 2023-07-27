#include <iostream>

int main()
{
    int n;
    int vueltas = 0;
    int dia;
    int mes;
    std::cin >> n;
    while (vueltas < n)
    {
        if (n == 0)
        {
			break;
		}
        for (int i = 0; i < n; i++)
        {
            vueltas++;
            std::cin >> dia;
            std::cin >> mes;
            if (dia == 25 && mes == 12)
            {
                std::cout << "SI" << "\n";
            }
            else
            {
			    std::cout << "NO" << "\n";
		    }
        }

    }
}
