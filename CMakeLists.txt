cmake_minimum_required(VERSION 3.19)
project(Mivos)

set(CMAKE_CXX_STANDARD 14)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

add_executable(Mivos main.cpp Application/consts&enums.h Application/Entities/Organism.cpp Application/Entities/Organism.h Application/Entities/OrganismManager.cpp Application/Entities/OrganismManager.h Application/Entities/Animals/Animals.cpp Application/Entities/Animals/Animals.h Application/Entities/Plants/Plants.cpp Application/Entities/Plants/Plants.h Application/Entities/Animals/Sheep.cpp Application/Entities/Animals/Sheep.h Application/Entities/Animals/Wolf.cpp Application/Entities/Animals/Wolf.h Application/Entities/Animals/Fox.cpp Application/Entities/Animals/Fox.h Application/Entities/Animals/Turtle.cpp Application/Entities/Animals/Turtle.h Application/Entities/Animals/Antelope.cpp Application/Entities/Animals/Antelope.h Application/Entities/Plants/Grass.cpp Application/Entities/Plants/Grass.h Application/Entities/Plants/Dandelion.cpp Application/Entities/Plants/Dandelion.h Application/Entities/Plants/Guarana.cpp Application/Entities/Plants/Guarana.h Application/Entities/Plants/Wolfberry.cpp Application/Entities/Plants/Wolfberry.h Application/Entities/Plants/Pineborscht.cpp Application/Entities/Plants/Pineborscht.h Application/Entities/AllOrganisms.h)
target_link_libraries(Mivos ${CURSES_LIBRARIES})