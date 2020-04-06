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