#include <iostream>

bool fun (int num)
{
	if (num % 3 == 0)
	{
		std::cout << num;
		return true;
	}
	return false;
}

int main()
{
	for (int i = 0; i < 10; i++)
		if (fun (i)) std::cout << std::endl;

	return 0;
}
