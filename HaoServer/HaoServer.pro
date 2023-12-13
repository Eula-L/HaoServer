TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += ./include #头文件
LIBS += -lpthread -lmysqlclient #导入开发库

SOURCES += \
    src/Mysql.cpp \
    src/TCPKernel.cpp \
    src/Thread_pool.cpp \
    src/block_epoll_net.cpp \
    src/clogic.cpp \
    src/err_str.cpp \
    src/main.cpp

HEADERS += \
    include/Mysql.h \
    include/TCPKernel.h \
    include/Thread_pool.h \
    include/block_epoll_net.h \
    include/clogic.h \
    include/err_str.h \
    include/packdef.h

DISTFILES += \
    src/makefile
