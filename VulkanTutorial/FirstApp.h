#pragma once

#include "Window.h"

class FirstApp
{
public:
	static constexpr int WIDHT = 800;
	static constexpr int HEIGHT = 600;

	void run();
private:
	Window Window{ WIDHT, HEIGHT, "Hello Vulkan!" };
};

