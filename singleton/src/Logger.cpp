#include "../include/Logger.hpp"

#include <iostream>

Logger& Logger::GetInstance()
{
	// Initialized on first use; initialization is thread-safe since C++11.
	static Logger instance;
	return instance;
}

void Logger::Log(const std::string& message)
{
	std::cout << message << std::endl;
}
