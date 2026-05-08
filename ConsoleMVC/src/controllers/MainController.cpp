#include "MainController.h"
#include "../utils/ConsoleUtil.h"
#include <iostream>

MainController::MainController(MainMenuView& view)
    : m_view(view)
{
}

void MainController::run()
{
    while (true)
    {
        ConsoleUtil::clearScreen();
        m_view.showMenu();

        int choice = m_view.getMenuChoice();

        if (choice == 0)
            break;

        handleChoice(choice);
        ConsoleUtil::pause();
    }
}

void MainController::handleChoice(int choice)
{
    std::cout << "\n";
    ConsoleUtil::printSeparator();

    switch (choice)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        std::cout << "준비 중입니다.\n";
        break;
    default:
        std::cout << "잘못된 입력입니다.\n";
        break;
    }

    ConsoleUtil::printSeparator();
}
