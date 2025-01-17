#include <cstdint>
#include <string_view>

// Generated using Github Copilot
constexpr std::uint32_t fnv1a_hash(std::string_view str,
                                   std::uint32_t hash = 2166136261u)
{
    for (char c : str)
    {
        hash ^= c;
        hash *= 16777619u;
    }
    return hash;
}
