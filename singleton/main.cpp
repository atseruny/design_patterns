#include "include/Logger.hpp"

int main()
{
	Logger::GetInstance().Log("Player connected");
	Logger::GetInstance().Log("Enemy spawned");
}
