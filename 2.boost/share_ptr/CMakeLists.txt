CMAKE_MINIMUM_REQUIRED(VERSION 2.8.2)
PROJECT(boost)
INCLUDE_DIRECTORIES(/home/lin/boost/include)
LINK_DIRECTORIES(/home/lin/boost/lib)
ADD_EXECUTABLE(boost boost.cpp)
TARGET_LINK_LIBRARIES(boost boost_system boost_filesystem)

