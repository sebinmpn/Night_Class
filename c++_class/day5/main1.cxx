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

void tree (int n)
{
    for(int i = 0; i <= n; i++)
    {
        for (int j = 0; j  < n - i; j++)
        {
            std::cout << " "; 
        }
        for (int j = 0; j < i; j++)
        {
            std::cout << " *"; 
        }
        std::cout << "\n";
    }
}


int main()
{
    tree(5); 
}