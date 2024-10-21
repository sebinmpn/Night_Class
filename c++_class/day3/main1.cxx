#include <iostream>

int fun (int num)
{
	if (num % 3 == 0)
	{
		std::cout << num;
		return 0;
	}
	return -1;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		if (fun (i) ==  0)
			std::cout << std::endl;
	}

	return 0;
}
