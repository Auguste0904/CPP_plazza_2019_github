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
    std::cout << "Hi ! Welcome in our Restaurant !" << std::endl;
    std::cout << "How many people are you ? : ";
    while (!std::atoi(this->prompt.c_str())) {
        if (!std::getline(std::cin, this->prompt))
            return;
        if (!std::atoi(this->prompt.c_str())) {
            std::cout << "Please write a number !" << std::endl;
            std::cout << "How many people are you ? : ";
        }
    }
    std::cout << "\nOh great ! Please sit here !" << std::endl;
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