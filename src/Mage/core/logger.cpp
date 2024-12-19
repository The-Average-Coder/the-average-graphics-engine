#include "logger.hpp"

#include <string>
#include <iostream>
#include <sstream>
#include <cstdarg>

namespace Mage::Logger {

	enum LogLevel : unsigned char {
		LOG_LEVEL_FATAL = 0,
		LOG_LEVEL_ERROR,
		LOG_LEVEL_WARN,
		LOG_LEVEL_INFO,
		LOG_LEVEL_DEBUG,
		LOG_LEVEL_TRACE
	};

	//static LogLevel s_LogLevel;

	void initialiseLogging() {
		//s_LogLevel = LOG_LEVEL_TRACE;

		// create log file.
	}

	void shutdownLogging() {
		// cleanup logging/write queued entries.
	}

	static std::string logLevelPrefixes[6] = { "[FATAL]: ", "[ERROR]: ", "[WARN]: ", "[INFO]: ", "[DEBUG]: ", "[TRACE]: " };

	static void getRemainingMessage(std::stringstream outputMessage, std::string message, ...) {

	}

	static void logMessage(LogLevel level, std::string message) {
		std::stringstream outputMessage;

		outputMessage << logLevelPrefixes[level];

		outputMessage << message;

		outputMessage << "\n";

		std::cout << outputMessage.str();
	}

	void fatal(std::string message) {
		logMessage(LOG_LEVEL_FATAL, message);
	}

	void error(std::string message) {
		logMessage(LOG_LEVEL_ERROR, message);
	}

	void warn(std::string message) {
		logMessage(LOG_LEVEL_WARN, message);
	}

	void info(std::string message) {
		logMessage(LOG_LEVEL_INFO, message);
	}

	void debug(std::string message) {
		logMessage(LOG_LEVEL_DEBUG, message);
	}

	void trace(std::string message) {
		logMessage(LOG_LEVEL_TRACE, message);
	}
}