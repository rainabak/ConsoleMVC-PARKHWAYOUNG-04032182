#pragma once
#include "IController.h"
#include "../views/MainMenuView.h"

class MainController : public IController
{
public:
    explicit MainController(MainMenuView& view);
    void run() override;

private:
    MainMenuView& m_view;

    void handleChoice(int choice);
};
