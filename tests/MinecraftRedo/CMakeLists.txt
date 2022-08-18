add_executable(MinecraftRedoGame main.cpp)
target_link_libraries(MinecraftRedoGame 
    PUBLIC MinecraftRedo
    ${MINECRAFTREDO_DEPENDENCIES}
)