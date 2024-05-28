CC = g++
LIBPATH = ./lib/
LIB = $(LIBPATH)linkedQueue.cpp
INCLUDEPATH = -I$(LIBPATH)
EXE1 = ds061
EXE2 = ds062
EXE3 = ds063
EXEALL = $(EXE1) $(EXE2) $(EXE3)

all : $(EXEALL)

$(EXE1): $(EXE1).cpp 
	$(CC) -o $@ $^

$(EXE2): $(EXE2).cpp $(LIB)
	$(CC) -o $@ $^ $(INCLUDEPATH)
	
$(EXE3): $(EXE3).cpp
	$(CC) -o $@ $^

clean:
	rm $(EXEALL)