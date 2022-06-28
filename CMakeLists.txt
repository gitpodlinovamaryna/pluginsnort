set( FILE_LIST
my_module.h
my_module.cc
${MY_INCLUDES}
)

add_library( my OBJECT ${FILE_LIST})

install(FILES ${MY_INCLUDES}
    DESTINATION "${INCLUDE_INSTALL_PATH/service_inspectors/ssl/}"
)