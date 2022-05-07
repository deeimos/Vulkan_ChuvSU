#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

class Window
{
public:
	Window(int w, int h, std::string name);
	~Window();

	Window(const Window&) = delete;
	Window& operator=(const Window&) = delete;

	bool shouldClose();

private:
	// Инициализация окна
	void initWindow();

	// Высота и ширина экрана в пикселях
	const int widht;
	const int height;

	// Заголовок окна
	std::string windowName;

	// Окно
	GLFWwindow* window;
};

