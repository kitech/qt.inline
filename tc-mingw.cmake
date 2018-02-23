# this one is important
SET(CMAKE_SYSTEM_NAME Windows)
#this one not so much
SET(CMAKE_SYSTEM_VERSION 1)

# x32, x64
if(${WINARCH} MATCHES "x64")
  # specify the cross compiler
  SET(CMAKE_C_COMPILER  ccache x86_64-w64-mingw32-gcc)
  SET(CMAKE_CXX_COMPILER ccache x86_64-w64-mingw32-g++)
  # where is the target environment
  SET(CMAKE_FIND_ROOT_PATH /usr/x86_64-w64-mingw32/)
else(${WINARCH} MATCHES "x64")
  # specify the cross compiler
  SET(CMAKE_C_COMPILER   ccache i686-w64-mingw32-gcc)
  SET(CMAKE_CXX_COMPILER ccache i686-w64-mingw32-g++)
  # where is the target environment
  SET(CMAKE_FIND_ROOT_PATH /usr/i686-w64-mingw32/)
endif(${WINARCH} MATCHES "x64")

# search for programs in the build host directories
SET(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
# for libraries and headers in the target directories
SET(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
SET(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
