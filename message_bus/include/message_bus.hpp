
#pragma once

#include <memory>
#include <message_bus/message.hpp>
#include <vector>

namespace bus
{
class System;

class MessageBus : std::enable_shared_from_this<MessageBus>
{
  public:
    MessageBus() = default;

    void register_system(std::unique_ptr<System> system);
    void publish_message(const Message msg);

  private:
    // TODO: Use a message queue
    std::vector<std::unique_ptr<System>> systems;
};
} // namespace bus
