#
# CNXT-Connector
# The CNXT-Connector is developed by Rodenstock GmbH to integrate data from measurement devices such as DNEye<sup>®</sup> Scanner, Rodenstock Fundus Scanner, and ImpressionIST<sup>®</sup> into 3rd party applications as well as into several applications of Rodenstock such as WinFit, Rodenstock Consulting etc. If you have any feedback then please feel free to contact us via email. Copyright © Rodenstock GmbH 2020
#
# The version of the OpenAPI document: 1.0.0
#
# https://openapi-generator.tech
#
# NOTE: Auto generated by OpenAPI Generator (https://openapi-generator.tech).

cmake_minimum_required (VERSION 2.8)

#PROJECT's NAME
project(cnxt-connector-client)

set_property(GLOBAL PROPERTY USE_FOLDERS On)

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create separate directory for build files.
")
endif()

# THE LOCATION OF OUTPUT BINARIES
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_DIR ${PROJECT_SOURCE_DIR}/lib)
#set(LIBRARY_OUTPUT_PATH ${CMAKE_LIBRARY_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/$(PlatformTarget))
set(LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin/$(PlatformTarget))
set(LIBRARY_OUTPUT_NAME ${PROJECT_NAME})

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# BUILD TYPE
message("A ${CMAKE_BUILD_TYPE} build configuration is detected")

# Update require components as necessary
#find_package(Boost 1.45.0 REQUIRED COMPONENTS ${Boost_THREAD_LIBRARY} ${Boost_SYSTEM_LIBRARY} ${Boost_REGEX_LIBRARY} ${Boost_DATE_TIME_LIBRARY} ${Boost_PROGRAM_OPTIONS_LIBRARY} ${Boost_FILESYSTEM_LIBRARY})

# Download and set dependencies
set(DEP_CPPRESTSDK ${CMAKE_CURRENT_BINARY_DIR}/packages/cpprestsdk/cpprestsdk.v141.2.10.12.1.nupkg)

if(NOT EXISTS ${DEP_CPPRESTSDK})
	file(DOWNLOAD "https://www.nuget.org/api/v2/package/cpprestsdk.v141/2.10.12.1" ${DEP_CPPRESTSDK} SHOW_PROGRESS TIMEOUT 60 TLS_VERIFY ON STATUS status LOG log)
	
	execute_process(COMMAND ${CMAKE_COMMAND} -E tar -xf ${DEP_CPPRESTSDK} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/packages/cpprestsdk)
endif()

# build and set path to cpp rest sdk
if(NOT DEFINED CPPREST_ROOT)
	#set(CPPREST_ROOT ${PROJECT_SOURCE_DIR}/packages/cpprestsdk)
	set(CPPREST_ROOT ${CMAKE_CURRENT_BINARY_DIR}/packages/cpprestsdk CACHE PATH "CPPRESTSDK Installation Directory")
endif()
#set(CPPREST_ROOT ${PROJECT_SOURCE_DIR}/3rdParty/cpprest)
set(CPPREST_INCLUDE_DIR ${CPPREST_ROOT}/build/native/include)
set(CPPREST_LIBRARY_DIR ${CPPREST_ROOT}/build/native/x64/lib)

set(DEP_BOOST ${CMAKE_CURRENT_BINARY_DIR}/packages/boost/boost.1.71.0.nupkg)

if(NOT EXISTS ${DEP_BOOST})
	file(DOWNLOAD "https://www.nuget.org/api/v2/package/boost/1.71.0" ${DEP_BOOST} SHOW_PROGRESS TIMEOUT 60 TLS_VERIFY ON STATUS status LOG log)
	
	execute_process(COMMAND ${CMAKE_COMMAND} -E tar -xf ${DEP_BOOST} WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/packages/boost)
endif()

if(NOT DEFINED BOOST_ROOT)
	#set(CPPREST_ROOT ${PROJECT_SOURCE_DIR}/packages/cpprestsdk)
	set(BOOST_ROOT ${CMAKE_CURRENT_BINARY_DIR}/packages/boost CACHE PATH "Boost Installation Directory")
endif()

set(BOOST_INCLUDE_DIR ${BOOST_ROOT}/lib/native/include)

include_directories(${PROJECT_SOURCE_DIR} api model ${CPPREST_INCLUDE_DIR} ${BOOST_INCLUDE_DIR})


# If using vcpkg, set include directories. Also comment out CPPREST section above since vcpkg will handle it.
# To install required vcpkg packages execute:
# > vcpkg install cpprestsdk cpprestsdk:x64-windows boost-uuid boost-uuid:x64-windows
# set(VCPKG_ROOT "C:\\vcpkg\\installed\\x64-windows")
# set(VCPKG_INCLUDE_DIR ${VCPKG_ROOT}/include)
# set(VCPKG_LIBRARY_DIR ${VCPKG_ROOT}/lib)
# include_directories(${PROJECT_SOURCE_DIR} api model ${VCPKG_INCLUDE_DIR})

#SUPPORTING FILES
set(SUPPORTING_FILES  "ApiClient" "ApiConfiguration" "ApiException" "HttpContent" "IHttpBody" "JsonBody" "ModelBase" "MultipartFormData" "Object" "StringBody")
#SOURCE FILES
file(GLOB SOURCE_FILES  "api/*"  "model/*")

add_library(${PROJECT_NAME} ${SUPPORTING_FILES} ${SOURCE_FILES})
