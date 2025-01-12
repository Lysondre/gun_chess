
#pragma once

#include <any>

namespace bus
{
enum class MessageType
{
    This,
    That
};

struct Message
{
    MessageType type;
    std::any data;
};
} // namespace bus
