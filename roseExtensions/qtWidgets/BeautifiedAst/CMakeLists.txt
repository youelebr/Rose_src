
include_directories(${KDE4_INCLUDES} ${KDE4_INCLUDE_DIR} ${QT_INCLUDES} )


########### next target ###############


########### install files ###############




#original Makefile.am contents follow:

##------------ BeautifiedAst Makefile.am -----------
#include $(top_srcdir)/src/roseExtensions/qtWidgets/Make.inc 
#
#if ROSE_WITH_ROSEQT
#
#noinst_LTLIBRARIES = libBeautifiedAst.la 
#
#
#
#libBeautifiedAst_la_SOURCES = BAstModel.cpp\
#                              BAstNode.cpp\
#                              BAstView.cpp
#
#nodist_libBeautifiedAst_la_SOURCES = moc_BAstModel.cxx\
#                                     moc_BAstView.cxx\
#                                     qrc_BeautifiedAst.cpp
#
#
#
## Target for installing header 
#headerTargetdir    =  $(roseQtWidgetsHeaderInstallPath)/
#headerTarget_HEADERS = BAstModel.h\
#                       BAstNode.h\
#                       BAstView.h
#
#
#endif
#
#EXTRA_DIST = BeautifiedAst.qrc \
#	icons/loop.png \
#	icons/sourcefile.gif \
#	icons/class.gif \
#	icons/namespace.gif \
#	icons/project.gif \
#	icons/function.gif \
#	icons/includes.gif \
#	icons/include.gif
#
