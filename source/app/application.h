#pragma once

#include <windows.h>

#include <entt/entt.hpp>

#include <core/graphics/window.h>
#include <core/graphics/render.h>

#include <glfw_window/glfw_window.h>
#include <vk_render/vk_render.h>

using namespace core::graphics;

typedef struct Info {
	const char* name;
	uint32_t width;
	uint32_t height;
} Info;

class Application {
public:
	void run();

private:
	void load();
	void init();
	void exec();
	void close();

	void cleanup();

private:
	Info* info;
	IWindow* window;
	IRender* render;
};