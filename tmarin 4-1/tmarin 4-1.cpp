// tmarin 4-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double num1, num2, sum, diff, pro, rem;
    std::cout << "Enter the first num: ";
    std::cin >> num1;

    std::cout << "Enter the second num: ";
    std::cin >> num2;
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    rem = fmod(num1, num2);
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << pro << std::endl;
    std::cout << "Remainder of the first num divided by the second num: " << rem << std::endl;

    return 0;
}

