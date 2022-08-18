# Find source files
FILE(GLOB_RECURSE MINECRAFTREDO_SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

# Build library
add_library(MinecraftRedo STATIC
    ${MINECRAFTREDO_SOURCES}
)

target_link_libraries(MinecraftRedo
    ${MINECRAFTREDO_PACKAGES_LIBRARIES}
    ${MINECRAFTREDO_DEPENDENCIES}
)