
add_library(MessageBus
    src/system.cpp
)

target_include_directories(MessageBus
    PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include"
)
