#pragma once

#include "Window.h"
#include "Pipeline.h"

class FirstApp
{
public:
	static constexpr int WIDHT = 800;
	static constexpr int HEIGHT = 600;

	void run();
private:
	Window Window{ WIDHT, HEIGHT, "Hello Vulkan!" };
	Pipeline pipeline{ "shaders\\simple_shader.vert.spv", "shaders\\simple_shader.frag.spv" };
};

