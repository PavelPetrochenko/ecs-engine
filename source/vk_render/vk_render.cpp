#include <stdexcept>

#define VOLK_IMPLEMENTATION
#include <vk_render/vk_render.h>

static std::vector<const char*> requiredInstanceExtensions = {
       VK_EXT_DEBUG_UTILS_EXTENSION_NAME,
       VK_KHR_SURFACE_EXTENSION_NAME,
};

void VulkanRender::init(const char* applicationName, const char* engineName) {
    if (volkInitialize() != VK_SUCCESS) {
        throw std::runtime_error("failed to load Vulkan loader from the system!");
    }

    requiredInstanceExtensions.push_back("VK_KHR_win32_surface");

    VkApplicationInfo appInfo{};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = applicationName;
    appInfo.applicationVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.pEngineName = engineName;
    appInfo.engineVersion = VK_MAKE_VERSION(1, 0, 0);
    appInfo.apiVersion = VK_API_VERSION_1_2;

    VkInstanceCreateInfo instanceInfo{};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;
    instanceInfo.enabledExtensionCount = static_cast<uint32_t>(requiredInstanceExtensions.size());
    instanceInfo.ppEnabledExtensionNames = requiredInstanceExtensions.data();
    instanceInfo.enabledLayerCount = 0;

    if (vkCreateInstance(&instanceInfo, nullptr, &instance) != VK_SUCCESS) {
        throw std::runtime_error("failed to create Vulkan instance!");
    }

    volkLoadInstance(instance);
}

void VulkanRender::cleanup() {
    vkDestroyInstance(instance, nullptr);
}