#include "LveWindow.h"

LveWindow::LveWindow(int w, int h, std::string name): widht(w), height(h), windowName(name)
{
	initWindow();
}

LveWindow::~LveWindow()
{
	glfwDestroyWindow(window);
	glfwTerminate();
}

bool LveWindow::shouldClose()
{
	return glfwWindowShouldClose(window);
}

void LveWindow::initWindow()
{
	glfwInit();
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(widht, height, windowName.c_str(), nullptr, nullptr);
}
