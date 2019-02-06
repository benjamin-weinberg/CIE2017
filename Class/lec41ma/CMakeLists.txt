## \author Hans J. Johnson

if(NOT CIE_SETTINGS_CONFIGURED)
    message(FATAL_ERROR "ERROR: clion must be started in the parent directory in order to configure the C++11 compiler flags" )
endif()

add_library(lec41_support_library insertionSort.cpp)
##================================
## Build the application
add_executable(lec41ma lec41ma.cpp)
target_link_libraries(lec41ma lec41_support_library)
