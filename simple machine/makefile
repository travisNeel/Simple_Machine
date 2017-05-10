# Makefile for C project

TARGET = test

FILES   =   $(wildcard *.cpp)
OBJS    =   $(FILES:.cpp=.o)
ASMS    = $(FILES:.cpp=.s)

# Tools
GCC     = g++
RM      = rm -f

# Targets ---------------------------------------
all:    $(TARGET)

$(TARGET):  $(OBJS)
	$(GCC) -o $@  $^

asm:    $(ASMS)

clean:
	$(RM) $(TARGET) $(OBJS) $(ASMS)

# Implicit rules --------------------------------
%.o:    %.cpp
	$(GCC) -c $< -o $@

%.s:    %.cpp
	$(GCC) -S -masm=intel $< -o $@
