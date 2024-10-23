/*

 * *       
  *     
* * *  - - -   - - - 

  -      
 * *     
* * *  - * -   - - -  1-2

  *      
 * *    
* * *  - - -   - - - 


*/

#include <iostream>

#define NUMBER_OF_RINGS 5


void ring (int r,  int n)
{
    for (int j = 0; j  < n - r; j++)
        {
            std::cout << " "; 
        }
        for (int j = 0; j < r; j++)
        {
            std::cout << " *"; 
        }
        for (int j = 0; j  < n - r; j++)
        {
            std::cout << " "; 
        }
        std::cout << "  "; 
}

int t[3][NUMBER_OF_RINGS] = { {1, 2, 3, 4, 5},
                                {0, 0, 0, 0, 0},
                                {0, 0, 0, 0, 0}};


void plot_tree (int n)
{
    for (int i = 0; i < n; i++)
    {
        ring (t[0][i], n);
        ring (t[1][i], n);    
        ring (t[2][i], n);
        std::cout << "\n";
    }
    std::cout << " ";
    for (int i = 0; i < NUMBER_OF_RINGS; i++)
        std::cout << "- ";
        std::cout << "   ";
    for (int i = 0; i < NUMBER_OF_RINGS; i++)
        std::cout << "- ";
        std::cout << "   ";
    for (int i = 0; i < NUMBER_OF_RINGS; i++)
        std::cout << "- ";
        std::cout << "   ";
}

void movie (int from, int to)
{
    int _value = 0;
    for (int i = 0; i < NUMBER_OF_RINGS; i++)
    {
        if(t[from][i] != 0)
        {
            _value = t[from][i];
            t[from][i] = 0;
            break;
        }
    }

    for (int i = 0; i < NUMBER_OF_RINGS; i++)
    {
        if (t[to][NUMBER_OF_RINGS -1 - i] == 0)
        {
            t[to][NUMBER_OF_RINGS - 1 - i] = _value;
            break;
        }
    }
}


int main()
{
    plot_tree(NUMBER_OF_RINGS);
    std::cout << " from , to :" << std::endl;

    int from, to;

    while (true)
    {
        plot_tree(NUMBER_OF_RINGS); 
        std::cin >> from >> to;
        movie(from,to);

        // for(int i = 0; i < 3; i++)
        // {
        //     for (int j = 0; j < 5; j++)
        //         std::cout << t[i][j] << ", ";
        //         std::cout << "\n";
        // }

    }

}