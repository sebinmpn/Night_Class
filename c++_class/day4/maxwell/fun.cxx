#include <iostream>

int f (int x)
{
    return x * x;
}

int main()
{
    int x;
    std::cout << "place some value : ";
    std::cin >> x;
    std::cout <<  "\n x * x : "<< f (x) << "\n";

    return 0;
}