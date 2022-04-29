#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

class LveWindow
{
public:
	LveWindow(int w, int h, std::string name);
	~LveWindow();

	LveWindow(const LveWindow&) = delete;
	LveWindow& operator=(const LveWindow&) = delete;

	bool shouldClose();

private:
	// ������������� ����
	void initWindow();

	// ������ � ������ ������ � ��������
	const int widht;
	const int height;

	// ��������� ����
	std::string windowName;

	// ����
	GLFWwindow* window;
};

