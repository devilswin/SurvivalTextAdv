#ifndef LOOT_INVENTORY_HPP
#define LOOT_INVENTORY_HPP
#include <vector>
class loot_inventory
{
private:

    int size_of_container;
public:
    void insert_into_inventory(int test);
    std::vector<int> contents;
    loot_inventory();
};

#endif // LOOT_INVENTORY_HPP
