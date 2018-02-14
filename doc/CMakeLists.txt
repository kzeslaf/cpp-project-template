find_package(Doxygen)

if (DOXYGEN_FOUND)
    configure_file(
        ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
        ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
        @ONLY
        )

    add_custom_target(doc-build-dir
        COMMAND
            ${CMAKE_COMMAND} -E make_directory build
        WORKING_DIRECTORY
            ${CMAKE_CURRENT_BUILD_DIR}
        COMMENT
            "Creating build dir for Doxygen docs" VERBATIM
        )

    add_custom_target(doc ALL
        COMMAND
            ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
        WORKING_DIRECTORY
            ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT
            "Generating API documentation with Doxygen" VERBATIM

        #
        # List following files in QtCreator project tree.
        #
        SOURCES
            ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in
            ${CMAKE_CURRENT_SOURCE_DIR}/src/index.dox
        )

    add_dependencies(doc doc-build-dir)
endif (DOXYGEN_FOUND)
