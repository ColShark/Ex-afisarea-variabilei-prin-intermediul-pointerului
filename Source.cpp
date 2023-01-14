#include <iostream>

int main()
{
	float numar = 2.5;
	float* pointer = &numar;

	std::cout << "Valoarea variabilei este " << *pointer << std::endl;

	system("pause");
}