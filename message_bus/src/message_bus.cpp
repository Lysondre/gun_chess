
#include <message_bus.hpp>
#include <message_bus/system.hpp>

namespace bus
{
void MessageBus::register_system(std::unique_ptr<System> system)
{
    system->connect(shared_from_this());
    systems.push_back(std::move(system));
}

void MessageBus::publish_message(const Message msg)
{
    for (auto& system : systems)
    {
        system->handle_message(msg);
    }
}
} // namespace bus
