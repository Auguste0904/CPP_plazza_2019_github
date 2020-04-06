/*
** EPITECH PROJECT, 2019
** CPP_plazza_2019_github
** File description:
** Shell.hpp
*/

#ifndef __PLAZZA_HPP_
#define __PLAZZA_HPP_

#include "Exception.hpp"
#include "ErrorHandling.hpp"
#include <iostream>
#include <string>
#include <string.h>

namespace plazza
{
    enum PizzaType
    {
        Regina = 1,
        Margarita = 2,
        Americana = 4,
        Fantasia = 8
    };

    enum PizzaSize
    {
        S = 1,
        M = 2,
        L = 4,
        XL = 8,
        XXL = 16
    };

    class Shell
    {
        public:
            Shell(const std::string &prompt);
            ~Shell() = default;

            void launchShell();
        protected:
            std::string prompt;
    };
}

#endif