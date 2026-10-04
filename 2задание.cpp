#include <iostream>

int stepen(int variable1, int variable2)
{
    int result=1;
    for (int i = 1; i<= variable2; i++)
    {
        result= result*variable1;
    }
    return result;
}

int main(int argc , char** argv)
{
    int value = 5 , power = 2;
    int s= stepen(value, power);
    std::cout << value << "В степени " << power << " = " << s << std::endl ;
    value = 3;
    power = 3;
    s= stepen(value,power);
    std::cout<< value << " В степени " << power << " = " << s << std::endl;
    value= 4 ;
    power = 4;
    s=stepen(value,power);
    std::cout<< value << "В степени " << power << " = " << s << std::endl;


}