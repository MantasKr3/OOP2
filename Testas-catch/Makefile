CXX=c++
CXXFLAGS=-g -std=c++11 

testai: F.o studentas.o 
	g++ -std=c++11 -o main testai.cpp F.o studentas.o
F:
	g++ -std=c++11 -c F.cpp
studentas:
	g++ -std=c++11 -c studentas.cpp
clean:
	rm *.o main
