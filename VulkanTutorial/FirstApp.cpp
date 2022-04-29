#include "FirstApp.h"

void FirstApp::run()
{
	while (!lveWindow.shouldClose())
	{
		glfwPollEvents();
	}
}
