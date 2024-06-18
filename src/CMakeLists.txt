cmake_minimum_required(VERSION 3.22)

project(Contact_Manager_Application)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE
    ${CMAKE_SOURCE_DIR}/src/main.cpp
    ${CMAKE_SOURCE_DIR}/src/Contact.cpp
    ${CMAKE_SOURCE_DIR}/src/Email.cpp
    ${CMAKE_SOURCE_DIR}/src/PhoneNumber.cpp
    ${CMAKE_SOURCE_DIR}/src/Address.cpp
    ${CMAKE_SOURCE_DIR}/src/User.cpp

)

add_executable(${PROJECT_NAME}  ${SOURCE})

target_include_directories( ${PROJECT_NAME} PRIVATE
    ${CMAKE_SOURCE_DIR}/inc/
    ${CMAKE_SOURCE_DIR}/src/
)
