#include "mage.hpp"

#include <iostream>

int main() {
    Mage::Init();

    Mage::GetInput();
    Mage::Render();

    std::cin.get();
}