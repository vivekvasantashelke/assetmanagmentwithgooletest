cmake_minimum_required(VERSION 3.5)

project(AssetmanagmentDb_test)
set(CMAK_CXX_STANDARD 11)
set(CMAK_CXX_STANDARD_REQUIRED ON)
add_executable( AssetmanagmentDb_test main.cpp AssetmanagmentDb_test.cpp)

target_link_libraries(AssetmanagmentDb_test PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(AssetmanagmentDb_test PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
find_package(Qt6 REQUIRED COMPONENTS Sql)
target_link_libraries(AssetmanagmentDb_test PRIVATE Qt6::Sql)

include_directories("${CMAKE_SOURCE_DIR}/googletest/googletest/include")
include_directories("${CMAKE_SOURCE_DIR}/googletest/googlemock/include")
include_directories("${CMAKE_SOURCE_DIR}/AssetDataBase")
#include_directories("${CMAKE_SOURCE_DIR}/AssetManagement1")
include_directories("${CMAKE_SOURCE_DIR}/AssetData")

#include_directories("${CMAKE_SOURCE_DIR}/AssetManagment1")
#target_link_libraries(AssetManagement1 PUBLIC test)
target_link_libraries(AssetmanagmentDb_test PUBLIC
  # AssetManagement1
  AssetData
    AssetDataBase
    gtest
    gmock)
