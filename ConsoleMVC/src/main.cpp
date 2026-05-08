#include "models/ItemRepository.h"
#include "views/ItemView.h"
#include "controllers/ItemController.h"

int main()
{
    ItemRepository repository;
    ItemView       view;
    ItemController controller(repository, view);

    controller.run();

    return 0;
}
