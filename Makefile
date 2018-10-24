CXX := g++
CPPFLAGS := -std=c++11
LIBPATH := -L ./utils
INCLUDE := -I ./utils
TARGET := $(patsubst %.cpp, %, $(file))

all : target

target : $(file)
	$(CXX) $(CPPFLAGS) $(INCLUDE) $(LIBPATH) $< -o $(TARGET) -lutils

.PHONY : clean
clean :
	@echo "clean all complie"
	rm -rf $(patsubst %.cpp, %, $(wildcard *.cpp))
