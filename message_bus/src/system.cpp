
#include <message_bus.hpp>
#include <message_bus/system.hpp>

namespace bus
{
void System::connect(std::shared_ptr<MessageBus> bus)
{
    this->bus = bus;
}
} // namespace bus
