#pragma once

#include <core/common.h>

namespace core::graphics
{
    class IRender {
    public:
        virtual void init(const char* applicationName, const char* engineName) = 0;
        virtual void cleanup() = 0;      
    };
}