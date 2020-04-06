/*
** EPITECH PROJECT, 2019
** CPP_plazza_2019_github
** File description:
** InitShell.cpp
*/

#include "ErrorHandling.hpp"

plazza::Error::Error(int ac, char **av)
{
    this->ac = ac;
    this->av = av;
}

void plazza::Error::launchHelp()
{
    std::cout << "USAGE:" << std::endl;
    std::cout << "\t./plazza [multiplier] [n] [t]\n" << std::endl;
    std::cout << "\tmultiplier: the cooking time of the pizzas." << std::endl;
    std::cout << "\tn: number of cooks per kitchen." << std::endl;
    std::cout << "\tt: time in milliseconds, used by the kitchen stock to replace ingredients.\n" << std::endl;
    std::cout << "DESCRIPTION:" << std::endl;
    std::cout << "\tPlazza is a project which simulate an italian restaurant." << std::endl;
}

void plazza::Error::ErrorHandling(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        this->launchHelp();
    else if (ac != 4 && av != NULL)
        throw plazza::Exception("Error: wrong number of arguments.\nPlease try \"./plazza [multiplier] [n] [t]\"");
    else if (!std::atoi(av[1]) || !std::atoi(av[2]) || !std::atoi(av[3]))
        throw plazza::Exception("Error: please write only numbers as arguments");
}
