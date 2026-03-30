# Note: We bumped the version to 3.14 because FetchContent requires it
cmake_minimum_required(VERSION 3.14)
project(BasicFlowchartEditor)

include_directories(include)

# --- THE CHEAT CODE: Automatically download and link SFML ---
include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.1 
)
FetchContent_MakeAvailable(SFML)
# ------------------------------------------------------------

add_executable(flowchart src/main.cpp)

# Tell our executable to use the SFML graphics and window modules
target_link_libraries(flowchart PRIVATE sfml-graphics sfml-window sfml-system)