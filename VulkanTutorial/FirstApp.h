#pragma once

#include "LveWindow.h"

class FirstApp
{
public:
	static constexpr int WIDHT = 800;
	static constexpr int HEIGHT = 600;

	void run();
private:
	LveWindow lveWindow{ WIDHT, HEIGHT, "Hello Vulkan!" };
};

