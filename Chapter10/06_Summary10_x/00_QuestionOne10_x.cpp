#include <array>
#include <numeric> // std::reduce
#include <iostream>

// We want to use ItemTypes to index an array. Use enum rather than enum class.
enum ItemTypes
{
    item_health_potion,
    item_torch,
    item_arrow,
    max_items
};

using inventory_t = std::array<int, ItemTypes::max_items>;

int countTotalItems(const inventory_t &player_inventory)
{
    return std::accumulate(player_inventory.begin(), player_inventory.end(), 0);
}

int main()
{
    inventory_t inventory{2, 5, 10};

    std::cout << "The player has " << countTotalItems(inventory) << " items in total.\n";

    // We can access individual items using the enumerators:
    std::cout << "The player has " << inventory[ItemTypes::item_torch] << " torchs\n";

    return 0;
}