#include "MainMenuView.h"
#include <iostream>
#include <limits>

void MainMenuView::showMenu() const
{
    std::cout << "============================\n";
    std::cout << "      Item Manager v1.0     \n";
    std::cout << "============================\n";
    std::cout << "  1. 아이템 추가\n";
    std::cout << "  2. 아이템 목록 조회\n";
    std::cout << "  3. 아이템 수정\n";
    std::cout << "  4. 아이템 삭제\n";
    std::cout << "  0. 종료\n";
    std::cout << "============================\n";
    std::cout << "선택: ";
}

int MainMenuView::getMenuChoice() const
{
    int choice;
    if (!(std::cin >> choice))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return -1;
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    return choice;
}
