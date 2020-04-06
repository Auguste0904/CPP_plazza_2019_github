/*
** EPITECH PROJECT, 2019
** OOP_arcade_2019
** File description:
** main.cpp
*/

#include "Exception.hpp"

plazza::Exception::Exception(const std::string &message) throw()
{
    this->message = message;
}

plazza::Exception::Exception() throw()
{
    ;
}

const char *plazza::Exception::what() const throw()
{
    return (this->message.c_str());
}