#include "views/MainMenuView.h"
#include "controllers/MainController.h"

int main()
{
    MainMenuView   view;
    MainController controller(view);

    controller.run();

    return 0;
}
