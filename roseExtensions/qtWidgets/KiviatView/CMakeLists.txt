
include_directories(${KDE4_INCLUDES} ${KDE4_INCLUDE_DIR} ${QT_INCLUDES} )


########### next target ###############


########### install files ###############




#original Makefile.am contents follow:

##------------ KiviatView Makefile.am -----------
#include $(top_srcdir)/src/roseExtensions/qtWidgets/Make.inc 
#
#if ROSE_WITH_ROSEQT
#
#noinst_LTLIBRARIES = libKiviatView.la 
#
#
#
#libKiviatView_la_SOURCES = KiviatView.cpp
#
#nodist_libKiviatView_la_SOURCES = moc_KiviatView.cxx
#
#
#
## Target for installing header 
#headerTargetdir    =  $(roseQtWidgetsHeaderInstallPath)/
#headerTarget_HEADERS = KiviatView.h
#
#
#endif
#
#EXTRA_DIST = 
#
