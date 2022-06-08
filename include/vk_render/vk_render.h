#pragma once

#include <core/graphics/render.h>
#include <volk/volk.h>

#include <vector>

class VulkanRender : public core::graphics::IRender {
public:
    ENGINE_API void init(const char* applicationName, const char* engineName);
    ENGINE_API void cleanup();

private:
    VkInstance instance;
};