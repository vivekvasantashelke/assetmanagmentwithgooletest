cmake_minimum_required(VERSION 3.5)

project(AssetManagement1 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
add_subdirectory(AssetData)
add_subdirectory(AssetDataBase)
add_subdirectory(googletest)

set(PROJECT_SOURCES
        main.cpp
      
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(AssetManagement1
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET AssetManagement1 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(AssetManagement1 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()

        add_executable(AssetManagement1
            ${PROJECT_SOURCES}
        )
    endif()
endif()
find_package(Qt6 REQUIRED COMPONENTS Sql)  
target_link_libraries(AssetManagement1 PRIVATE Qt6::Sql)
target_link_libraries(AssetManagement1 PRIVATE Qt${QT_VERSION_MAJOR}::Core)

target_link_libraries(AssetManagement1 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

#target_link_directories(AssetManagement1 PUBLIC googletest/)
#target_link_libraries(AssetManagement1 PUBLIC googletest)
#include_directories("${CMAKE_SOURCE_DIR}/googletest/googletest/include")
#include_directories("${CMAKE_SOURCE_DIR}/googletest/googlemock/include")
#target_link_libraries(AssetManagement1 PUBLIC
        # assetmanagerinformation.h
 #   gtest
 # gmock)


include_directories("${CMAKE_SOURCE_DIR}/AssetData")
target_link_directories(AssetManagement1 PUBLIC AssetData/)
target_link_libraries(AssetManagement1 PUBLIC AssetData)
target_link_directories(AssetManagement1 PUBLIC AssetDataBase/)
target_link_libraries(AssetManagement1 PUBLIC AssetDataBase)


set_target_properties(AssetManagement1 PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS AssetManagement1
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(AssetManagement1)
endif()
