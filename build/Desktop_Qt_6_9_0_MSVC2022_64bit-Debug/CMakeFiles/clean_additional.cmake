# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QtOpenGLProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QtOpenGLProject_autogen.dir\\ParseCache.txt"
  "QtOpenGLProject_autogen"
  )
endif()
