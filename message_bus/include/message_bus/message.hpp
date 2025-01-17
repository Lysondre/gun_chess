
#pragma once

#include <any>
#include <cstdint>

namespace bus
{
struct Message
{
    std::int32_t type;
    std::any data;
};
} // namespace bus
