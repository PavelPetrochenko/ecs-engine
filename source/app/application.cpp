#include "application.h"

void Application::run() {
    load();
    init();
    exec();
    close();
}

void Application::load() {
    info = new Info{ "Game", 800, 600 };
    window = new GLFWWindow();
    render = new VulkanRender();
}

void Application::init() {
    window->init(info->name, info->width, info->height);
    render->init(info->name, "Engine");
}

void Application::exec() {
    while (!window->isClose())
    {
        window->proccesEvents();
    }
}

void Application::close() {
    cleanup();
}

void Application::cleanup() {
    render->cleanup();
    window->cleanup();
}