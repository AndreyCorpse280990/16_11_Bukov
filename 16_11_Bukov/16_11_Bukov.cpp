#include <iostream>
#include <string>

int main() 
{
    std::string num = "123";

    auto is_num = [](const std::string& str) 
        {
        for (char c : str) 
        {
            if (!std::isdigit(c))
            {
                return false;
            }
        }
        return true;
        };

    if (is_num(num))
    {
        std::cout << "It's a number." << std::endl;
    }
    else 
    {
        std::cout << "It's not a number." << std::endl;
    }

    return 0;
}
