#pragma once

#include <string>

class Logger
{
private:
	Logger() = default;

public:
	Logger(const Logger&) = delete;
	Logger& operator=(const Logger&) = delete;

	static Logger& GetInstance();
	void Log(const std::string& message);
};
