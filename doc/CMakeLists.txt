add_custom_target(doc-build-dir
    mkdir -p build
    WORKING_DIRECTORY ${CMAKE_CURRENT_BUILD_DIR}
    COMMENT "Creating build dir for Doxygen docs" VERBATIM
    )

add_custom_target(doc
    doxygen ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile
    WORKING_DIRECTORY ${CMAKE_CURRENT_BUILD_DIR}
    COMMENT "Generating API documentation with Doxygen" VERBATIM
    )

add_dependencies(doc doc-build-dir)
