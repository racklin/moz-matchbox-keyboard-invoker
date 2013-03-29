cmake_minimum_required(VERSION 2.6)

project(matchbox-keyboard-invoker)

find_package(PkgConfig)

pkg_check_modules(GTKP20 gtk+-2.0)
if (GTKP20_FOUND)
  link_directories(${GTKP20_LIBRARY_DIRS})
  include_directories(${GTKP20_INCLUDE_DIRS})
endif(GTKP20_FOUND)

pkg_check_modules(X11 x11)
if (X11_FOUND)
  link_directories(${X11_LIBRARY_DIRS})
  include_directories(${X11_INCLUDE_DIRS})
endif(X11_FOUND)

pkg_check_modules(XUL libxul)
if (XUL_FOUND)
  link_directories(${XUL_LIBRARY_DIRS})
  include_directories(${XUL_INCLUDE_DIRS})
  message("xullib = ${XUL_LIBRARY_DIRS}")
endif(XUL_FOUND)

add_library(mk-invoker SHARED im-protocol.c mozMatchboxKeyboardInvokerImpl.cpp mozMatchboxKeyboardInvokerModules.cpp)
target_link_libraries(mk-invoker ${GTKP20_LIBRARIES})
target_link_libraries(mk-invoker ${X11_LIBRARIES})
target_link_libraries(mk-invoker ${XUL_LIBRARIES})

