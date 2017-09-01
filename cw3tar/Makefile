# Makefile for BEAST plugins

BEAST_DIR = /home/cserv1_a/intern/ai23/beast/

include $(BEAST_DIR)config.env

# Compiler settings...
CXX = g++
LDFLAGS = -L$(BEAST_DIR)lib -lbeast 
CXXFLAGS =  -Wall -shared -fPIC -I$(BEAST_DIR)include/

# profiling options are -g -pg

# Catch all...
nothing:
	@echo ----- type "make thingy" to build thingy.so from thingy.cc -----

# Build a BEAST plugin...
%: %.cc
	$(CXX) $(CXXFLAGS) -o $@.so $<

clean:
	rm -f *.o *.d

