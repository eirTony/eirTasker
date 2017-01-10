#-------------------------------------------------
#
# Project created by QtCreator 2017-01-02T01:33:01
#
#-------------------------------------------------

QT       += network sql svg xml

QT       -= gui

TARGET = boost_lib
TEMPLATE = lib

DEFINES += BOOST_LIB_LIBRARY

include(../thirdCommon.pri)
include(../../boost_log.pri)

SOURCES += boost_lib.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/attribute_name.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/attribute_set.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/attribute_value_set.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/code_conversion.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/core.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/date_time_format_parser.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/default_attribute_names.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/default_sink.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/dump.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/dump_avx2.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/dump_ssse3.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/event.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/exceptions.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/format_parser.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/global_logger_storage.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/named_scope.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/named_scope_format_parser.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/once_block.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/permissions.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/process_id.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/process_name.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/record_ostream.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/severity_level.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/spirit_encoding.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/syslog_backend.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/text_file_backend.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/text_multifile_backend.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/text_ostream_backend.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/thread_id.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/thread_specific.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/threadsafe_queue.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/timer.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/timestamp.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/trivial.cpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/unhandled_exception_count.cpp

HEADERS += boost_lib.h\
        boost_lib_global.h \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/alignment_gap_between.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/attribute_set_impl.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/bit_tools.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/default_sink.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/id_formatting.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/murmur3.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/spirit_encoding.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/stateless_allocator.hpp \
    ../../../../../../../lang/boost_1_63_0/libs/log/src/unique_ptr.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/attributes.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/common.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/core.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/exceptions.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/expressions.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/sinks.hpp \
    ../../../../../../../lang/boost_1_63_0/boost/log/trivial.hpp

unix {
    target.path = /usr/lib
    INSTALLS += target
}
