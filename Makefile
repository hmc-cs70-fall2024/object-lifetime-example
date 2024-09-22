OPTS = --std=c++17 -g

cowparty: cowparty.o cow.o barn.o
	clang++ -o cowparty cowparty.o cow.o barn.o

cow.o: cow.cpp cow.hpp
	clang++ $(OPTS) -c cow.cpp

barn.o: barn.cpp barn.hpp cow.hpp
	clang++ $(OPTS) -c barn.cpp

cowparty.o: cowparty.cpp barn.hpp cow.hpp
	clang++ $(OPTS) -c cowparty.cpp