cmake_minimum_required (VERSION 2.6)
project (Tutorial)

#--------------------
#  option
#    - https://cmake.org/cmake/help/latest/command/option.html?highlight=option
#--------------------
#  should we use our own math functions?
option ( USE_MYMATH "use tutorial provided math implementation" ON )

#--------------------
#  The version number.
#--------------------
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)


#--------------------------------------------------------------------------------
#  configure_file
#    - https://cmake.org/cmake/help/latest/command/configure_file.html?highlight=configure_file
#--------------------
#  configure a header file to pass some of the CMake settings to the source code
configure_file ( "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
                 "${PROJECT_BINARY_DIR}/TutorialConfig.h" )

#--------------------------------------------------------------------------------
#  include_directories
#--------------------
## add the binary tree to the search path for include files so that we will find TutorialConfig.h
include_directories( "${PROJECT_BINARY_DIR}" )


#--------------------------------------------------------------------------------
#  Use a library
#--------------------
## add the MathFunctions library?
if (USE_MYMATH)
  # add another include directory so that 
  # the MathFunctions/MathFunctions.h header file can be found for the function prototype
  include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
  # To make use of the new library we add an add_subdirectory call
  add_subdirectory (MathFunctions)
  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
  add_library(MathFunctions mysqrt.cxx)
endif (USE_MYMATH)
 

#--------------------------------------------------------------------------------
#  add the executable
#--------------------
add_executable( Tutorial tutorial.cxx )
target_link_libraries (Tutorial  ${EXTRA_LIBS})




