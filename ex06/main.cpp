#include "Harl.hpp"
#include <iostream>
#include <string>

static int levelIndex(const std::string& level)
{
    if (level == "DEBUG")
        return 0;
    if (level == "INFO")
        return 1;
    if (level == "WARNING")
        return 2;
    if (level == "ERROR")
        return 3;
    return -1;
}

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cerr << "Usage: " << argv[0] << " <LEVEL>" << std::endl;
        return 1;
    }

    Harl harl;
    int level = levelIndex(argv[1]);

    switch (level)
    {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.debugMessage();
            std::cout << std::endl;
            /* fall through */
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.infoMessage();
            std::cout << std::endl;
            /* fall through */
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.warningMessage();
            std::cout << std::endl;
            /* fall through */
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.errorMessage();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }

    return 0;
}
