# doclist
set(xmlformat_SRC xmlformat.cpp)

QT_ADD_RESOURCES(xmlformat_RES xmlformat.qrc)

add_library(xmlformat SHARED ${xmlformat_SRC} ${xmlformat_RES})
target_link_libraries(xmlformat ${JUFFED_LIBRARY} ${JUFF_QT_IMPORTED_TARGETS})
install(TARGETS xmlformat DESTINATION ${JUFFED_PLUGINS_DIR})
