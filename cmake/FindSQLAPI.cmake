find_path(SQLAPI_INCLUDE_DIRS SQLAPI.h)

find_library(SQLAPI_LIBRARY_RELEASE NAMES sqlapi)
find_library(SQLAPI_LIBRARY_DEBUG NAMES sqlapid)

include(SelectLibraryConfigurations)
select_library_configurations(SQLAPI)

include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(SQLAPI DEFAULT_MSG 
    SQLAPI_INCLUDE_DIRS SQLAPI_LIBRARIES
)

mark_as_advanced(
    SQLAPI_INCLUDE_DIRS
    SQLAPI_LIBRARY
    SQLAPI_LIBRARY_DEBUG
    SQLAPI_LIBRARY_RELEASE
    SQLAPI_LIBRARIES
)
