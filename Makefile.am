AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = ${ACLOCAL_FLAGS} -I m4
lib_LTLIBRARIES = libriak_client.la
libriak_client_la_SOURCES = src/pbc.cpp \
			    src/riak.pb.cc \
			    src/riak_kv.pb.cc

libriak_client_la_CXXFLAGS = -g3 -Ibuild/deps/include $(CFLAG_VISIBILITY) 
libriak_client_la_LDFLAGS = -Lbuild/deps/lib -lprotobuf-lite 
			    -version-info 1:0:0 -no-undefined

riak_client_includedir = $(includedir)/riak_client/cxx
#nobase_include_HEADERS = riak_client/cxx/riak_client.hpp 

riak_client_libincludedir = $(libdir)/riak_client/include

#bin_PROGRAMS = riakc
#riakc_SOURCES = src/riakc/riakc.cpp
#riakc_CXXFLAGS = $(libriak_client_la_CXXFLAGS)
# -I/usr/local/Cellar/readline/6.2.1/include
#riakc_LDFLAGS = -lriak_client
 # -L/usr/local/Cellar/readline/6.2.1/lib -lreadline

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = riak_client.pc

#check_PROGRAMS = riak_cxx_unit_test
#TESTS = $(check_PROGRAMS)

#riak_cxx_unit_test_SOURCES = test/test_riak_object.cpp test/test_basic.cpp
#riak_cxx_unit_test_CXXFLAGS = $(libriak_client_la_CXXFLAGS)
#riak_cxx_unit_test_LDFLAGS = -lriak_client -lriakboost_unit_test_framework-mt-riak_client

#riak_cxx_test_server_SOURCES = test/test_server.cpp src/cxx/pbc_header.cpp src/cxx/pbc_message.cpp src/cxx/riakclient.pb.cc
#riak_cxx_test_server_CXXFLAGS = $(libriak_client_la_CXXFLAGS) -Isrc/cxx
#riak_cxx_test_server_LDFLAGS =  $(libriak_client_la_LDFLAGS) -lriak_client 

CLEANFILES = $(check_PROGRAMS)
SUBDIRS = deps
DIST_SUBDIRS = deps
