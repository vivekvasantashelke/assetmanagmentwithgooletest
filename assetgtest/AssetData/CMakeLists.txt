cmake_minimum_required(VERSION 3.5)

project(AssetData)
add_library(AssetData SHARED assetmainwindow.cpp assetmainwindow.h assetmainwindow.ui
assetmanagerinformation.cpp assetmanagerinformation.h AssetManagerInterface.h
assetrecord.cpp assetrecord.h assetrecord.ui
assetreport.cpp assetreport.h
Image.qrc
)

add_subdirectory(test/)
find_package(Qt6 REQUIRED COMPONENTS Sql)
target_link_libraries(AssetData PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(AssetData PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(AssetData PRIVATE Qt6::Sql)

include_directories("${CMAKE_SOURCE_DIR}/AssetDataBase/")
target_link_libraries(AssetData PUBLIC AssetDataBase)



