#include "mage.hpp"
#include "core/logger.hpp"

#include <iostream>

void Mage::Init() {
	Mage::Logger::info("Initialising");
}

void Mage::GetInput() {
	Mage::Logger::warn("Input not set up...");
}

void Mage::Render() {
	Mage::Logger::trace("Rendering...");
}