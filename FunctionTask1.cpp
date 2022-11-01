#include <iostream>
#include <vector>

void swapvec(std::vector<int>&, int*);

int main()
{
    std::vector<int> a = {1,2,3,4,5};
    int b[] = { 6,7,8,9,10 };
    std::cout << "Before swap: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << b[i] << " ";
    }
    std::cout << std::endl;

    swapvec(a, b);
    std::cout << "After swap: " << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << b[i] << " ";
    }
}

void swapvec(std::vector<int>& vec, int* mass)
{
    
    for (int i = 0; i < 5; i++)
    {
        int temp = 0;
        temp = vec[i];
        vec[i] = *(mass+i);
        *(mass + i) = temp;
    }
}
