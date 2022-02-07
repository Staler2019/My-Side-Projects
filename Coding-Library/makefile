CC			:= g++
IDIR	 	:= ./c-cpp/complier
CFLAGS		:= -g -Wall -I $(IDIR)

PROCESS		:= ./main_testing
CINFILE		:= ./test.in
CERRFILE	:= ./test.err
OBJS 		:= ./c-cpp/compiler/FirstSet.o FollowSet.o

all: $(PROCESS)
	$(PROCESS) < $(CINFILE) 2> $(CERRFILE)

$(PROCESS): $(PROCESS).cpp $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp $(OBJS)

# %.o: %.cpp
# 	$(CC) $(CFLAGS) -c $< -o $@.o

clean:
	-rm $(TARGET) $(OBJS)