#include <iostream>

int fib(int variable1)
{
    if (variable1 ==0)
    {
        return 0;
    }
    else if (variable1==1)
    {
        return 1;
    }
    else
    {
        int result= fib(variable1-2)+fib(variable1-1) ;
        return result;
    }
}

int main()
{
    int chislo{};
    std::cin >> chislo;
    for (int i=0;i<=chislo;i++)
    {
        int vivod=fib(i);
        std::cout<< vivod <<" " ;
    }

}