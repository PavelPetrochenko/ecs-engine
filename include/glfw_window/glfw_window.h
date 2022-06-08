#pragma once

#include <core/graphics/window.h>
#include <GLFW/glfw3.h>

class GLFWWindow : public core::graphics::IWindow {
public:
    ENGINE_API void init(const char* name, uint32_t width, uint32_t height);
    ENGINE_API void proccesEvents();
    ENGINE_API bool isClose();
    ENGINE_API void cleanup();

private:
    const char* name;
    uint32_t width;
    uint32_t height;

    GLFWwindow* window;
};