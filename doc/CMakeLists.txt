find_package(Doxygen)

if (DOXYGEN_FOUND)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

    add_custom_target(doc-build-dir
        mkdir -p build
        WORKING_DIRECTORY ${CMAKE_CURRENT_BUILD_DIR}
        COMMENT "Creating build dir for Doxygen docs" VERBATIM
        )

    add_custom_target(doc
        ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen" VERBATIM
        )

    add_dependencies(doc doc-build-dir)
endif (DOXYGEN_FOUND)
