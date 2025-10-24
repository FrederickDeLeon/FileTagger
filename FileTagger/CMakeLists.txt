# CMakeList.txt : CMake project for FileTagger, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (FileTagger "FileTagger.cpp" "FileTagger.h" "TagManager.cpp" "TagManager.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET FileTagger PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
