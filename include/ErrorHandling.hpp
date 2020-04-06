/*
** EPITECH PROJECT, 2019
** CPP_plazza_2019_github
** File description:
** ErrorHandling.hpp
*/

#ifndef __ERRORHANDLING_HPP_
#define __ERRORHANDLING_HPP_

#include "Shell.hpp"

namespace plazza
{
    class Error
    {
        public:
            Error(int ac, char **av);
            ~Error() = default;

            void ErrorHandling(int ac, char **av);
            void launchHelp();
        protected:
            int ac;
            char **av;
    };
}

#endif