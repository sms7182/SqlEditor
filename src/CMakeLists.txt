find_package(SQLAPI REQUIRED)

get_filename_component(HEADER_PREFIX ../include ABSOLUTE)

include_directories(
    ${HEADER_PREFIX}
    ${SQLAPI_INCLUDE_DIRS}
)

set(HEADERS 
    ${HEADER_PREFIX}/ConnectToDB.h
)

set(SOURCES 
    ConnectToDB.cpp
    SqlTest.cpp
)

add_executable(SqlEditor ${SOURCES} ${HEADERS})

target_link_libraries(SqlEditor
    ${SQLAPI_LIBRARIES}
)
