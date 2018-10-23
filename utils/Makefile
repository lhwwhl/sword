AR := ar
CPP := g++
CPPFLAGS := -std=c++11
LIBPATH := ./utils
INCLUDE := -I ./utils
SOURCE := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp, %.o, $(notdir $(SOURCE)))

TARGET := libutils.a

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(AR) cru $(TARGET) $(OBJS)

.PHONY : clean
clean :
	rm -rf $(OBJS)
	rm -rf $(TARGET)
