bin_PROGRAMS=helloworld
helloworld_SOURCES=main.cpp
helloworld_CPPFLAGS = -I$(top_srcdir)/includes  ## add path to headerfiles
helloworld_LDADD=$(top_srcdir)/src/dynamic_lib/libHelloLib.la  ## link with static library
helloworld_LDADD+= -dlopen $(top_srcdir)/src/module/libHelloModule.la
