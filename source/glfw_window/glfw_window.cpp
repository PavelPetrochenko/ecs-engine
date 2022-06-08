#include <glfw_window/glfw_window.h>

void GLFWWindow::init(const char* name, uint32_t width, uint32_t height) {
    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, name, nullptr, nullptr);
}

void GLFWWindow::proccesEvents() {
    glfwPollEvents();
}

bool GLFWWindow::isClose() {
    return glfwWindowShouldClose(window);
}

void GLFWWindow::cleanup() {
    glfwDestroyWindow(window);
    glfwTerminate();
}