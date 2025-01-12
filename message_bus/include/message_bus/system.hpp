
#pragma once

#include <memory>
#include <message_bus/message.hpp>

namespace bus
{
class MessageBus;

class System
{
  public:
    void connect(std::shared_ptr<MessageBus> bus);
    virtual void handle_message(const Message& message) = 0;

  private:
    std::weak_ptr<MessageBus> bus;
};
} // namespace bus
