/*
** EPITECH PROJECT, 2019
** CPP_plazza_2019_github
** File description:
** InitShell.cpp
*/

#include "Shell.hpp"

plazza::Shell::Shell(const std::string &prompt)
{
    this->prompt = prompt;
}

void plazza::Shell::printIntroducing()
{
    std::cout << "Hi ! Welcome to our Restaurant !" << std::endl;
    std::cout << "What do you want ?" << std::endl;
}

int plazza::Shell::launchShell()
{
    this->printIntroducing();
    while (true) {
        std::cout << "> ";
        if (!std::getline(std::cin, this->prompt))
            return (0);
        while (this->prompt.compare("\n") == 0) {
            std::cout << "> ";
            std::getline(std::cin, this->prompt);
        }
    }
    return (0);
}
