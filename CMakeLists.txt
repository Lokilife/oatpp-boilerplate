cmake_minimum_required(VERSION 3.1)

set(project_name oatend) ## rename your project here

project(${project_name})

set(CMAKE_CXX_STANDARD 14)

add_library(${project_name}-lib
    src/main.cpp
    src/AppComponent.hpp
    src/controllers/AppController.hpp
    src/controllers/Controllers.hpp
    src/dto/DTOs.hpp
    src/dto/HelloDTO.hpp
)

## link libs

find_package(oatpp 1.3.0 REQUIRED)

target_link_libraries(${project_name}-lib
        PUBLIC oatpp::oatpp
        PUBLIC oatpp::oatpp-test
)

target_include_directories(${project_name}-lib PUBLIC src)

## add executables

add_executable(${project_name}
        src/main.cpp
)
target_link_libraries(${project_name} ${project_name}-lib)
add_dependencies(${project_name} ${project_name}-lib)

set_target_properties(${project_name}-lib ${project_name} PROPERTIES
        CXX_STANDARD ${CMAKE_CXX_STANDARD}
        CXX_EXTENSIONS OFF
        CXX_STANDARD_REQUIRED ON
)
