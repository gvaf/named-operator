WHEELS=deps/wheels/include
INC=include

CXX=g++
CXXFLAGS=-std=c++11 -pedantic -Werror -Wall -Wextra \
		 -I$(INC) -I$(WHEELS)

example: $(INC)/base/named_operator.hpp $(INC)/util/io_helpers.hpp example.cpp
	$(CXX) -o example example.cpp $(CXXFLAGS)

strings: $(INC)/base/named_operator.hpp $(INC)/util/io_helpers.hpp example.cpp
	$(CXX) -o strings strings.cpp $(CXXFLAGS)
