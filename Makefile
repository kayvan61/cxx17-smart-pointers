all: sharedPtr uniquePtr

sharedPtr: sharedPtr.cpp
	g++ -std=c++17 -o sharedPtr sharedPtr.cpp

uniquePtr: uniquePtr.cpp
	g++ -std=c++17 -o uniquePtr uniquePtr.cpp

clean:
	rm uniquePtr sharedPtr
