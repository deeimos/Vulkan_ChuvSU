#include "FirstApp.h"

void FirstApp::run()
{
	while (!Window.shouldClose())
	{
		glfwPollEvents();
	}
}
