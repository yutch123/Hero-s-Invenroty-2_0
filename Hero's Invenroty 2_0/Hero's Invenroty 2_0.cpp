// Hero's Invenroty 2_0.
// Демонстрирует работу с векторами

#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<string> inventory; // объявляем вектор с именем inventory
    inventory.push_back("sword"); // push_back - добавляет новый элемент к концу вектора
    inventory.push_back("armor");
    inventory.push_back("sheild");
    cout << "You have " << inventory.size() << " items.\n"; // количество артефактов у героя
    cout << "\nYour items: \n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl; // отображение всего аресенала героя
    }
    cout << "\nYour trade your sword for a battle axe";
    inventory[0] = "battle axe";
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }
    cout << "\nThe item name " << inventory[0] << " has ";
    cout << inventory[0].size() <<" letters in it.\n"; // количество букв в названии первого элемента в снарежении героя
    cout << "\nYour shield is destroyed in a fierce battle";
    inventory.pop_back(); // pop_back - удаляет последний элемент массива
    cout << "\nYour items:\n";
    for (unsigned int i = 0; i < inventory.size(); ++i)
    {
        cout << inventory[i] << endl;
    }
    cout << "\nYou were robbed of all of your possessions by a thief.";
    inventory.clear(); // инвентарь пустой
    if (inventory.empty()) // проверка элементов вектора
    {
        cout << "\nYou have notthing.\n";
    }
    else
    {
        cout << "\nYou have at least one item.\n";
    }
    return 0;
}


