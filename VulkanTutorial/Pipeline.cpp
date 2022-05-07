#include "Pipeline.h"

#include <fstream>
#include <iostream>

Pipeline::Pipeline(const std::string& vertFilepath, const std::string& fragFilepath)
{
	createGraphicsPipeline(vertFilepath, fragFilepath);
}

std::vector<char> Pipeline::readFile(const std::string& filepath)
{
	// Открываем файл
	std::ifstream file{filepath, std::ios::ate | std::ios::binary};
	
	// Проверка наличия файла
	if (!file.is_open())
	{
		throw std::runtime_error("failed to open file: " + filepath);
	}

	// Выделяем память
	size_t fileSize = static_cast<size_t>(file.tellg());
	std::vector<char> buffer(fileSize);

	// Записываем в буфер содержимое файла
	file.seekg(0);
	file.read(buffer.data(), fileSize);

	// Закрываем файл
	file.close();
	return buffer;
}

void Pipeline::createGraphicsPipeline(const std::string& vertFilepath, const std::string& fragFilepath)
{
	auto vertCode = readFile(vertFilepath);
	auto fragCode = readFile(fragFilepath);

	std::cout << "Vertex Shader Code Size: " << vertCode.size() << '\n';
	std::cout << "Fragment Shader Code Size: " << fragCode.size() << '\n';
}
