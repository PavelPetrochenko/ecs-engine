#pragma once

#include <core/common.h>

namespace core::graphics
{
    class IWindow {
    public:
        virtual void init(const char* name, uint32_t width, uint32_t height) = 0;
        virtual void proccesEvents() = 0;
        virtual bool isClose() = 0;
        virtual void cleanup() = 0;
    };
}