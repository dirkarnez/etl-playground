cmake_minimum_required(VERSION 3.5.0)
project("etl-playground" LANGUAGES CXX)

# add_definitions(-DETL_DEBUG)

find_package(etl REQUIRED)
if (etl_FOUND)
    message("etl found")
    # message("include dir: ${etl_INCLUDE_DIR}")
    # message("link libraries: ${etl_LIBRARY}")
else ()
    message("etl not found")
endif()

add_executable(${PROJECT_NAME} 
  # "src/Scheduler.cpp" # neeed malloc / free / etc...
  "src/main.cpp"
)

target_include_directories(${PROJECT_NAME}
  PUBLIC
  "include"
)

target_link_libraries(${PROJECT_NAME} etl::etl)
set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 17)
