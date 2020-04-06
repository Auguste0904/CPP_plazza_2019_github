/*
** EPITECH PROJECT, 2019
** CPP_plazza_2019_github
** File description:
** main.cpp
*/

#include "Shell.hpp"

int main(int ac, char **av)
{
    std::string prompt;
    plazza::Error errorGestion = {ac, av};
    plazza::Shell shell = {prompt};

    try {
        errorGestion.ErrorHandling(ac, av);
        shell.launchShell();
    } catch (plazza::Exception &message) {
        std::cerr << message.what() << std::endl;
        return (84);
    } catch (std::exception &message) {
        std::cerr << message.what() << std::endl;
        return (84);
    } catch (std::string &message) {
        std::cerr << message << std::endl;
        return (84);
    } catch (...) {
        std::cerr << "An unknown error occured!" << std::endl;
        return (84);
    }
    return 0;
}