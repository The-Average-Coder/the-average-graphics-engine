#pragma once

#include <string>

namespace Mage::Logger {

	enum LogLevel : unsigned char;

	void initialiseLogging();
	void shutdownLogging();

	void fatal(std::string message);
	void error(std::string message);
	void warn(std::string message);
	void info(std::string message);
	void debug(std::string message);
	void trace(std::string message);
}