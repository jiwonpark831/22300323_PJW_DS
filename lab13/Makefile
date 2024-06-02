CC = g++
LIBPATH = ./lib/
LIB = $(LIBPATH)sort.cpp
INCLUDEPATH = -I$(LIBPATH)
EXE1 = ds071
EXE2 = ds072
EXE3 = ds073
EXE4 = ds074
EXE5 = ds075
EXE6 = ds076
EXEALL = $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6)

all : $(EXEALL)

$(EXE1): $(EXE1).cpp 
	$(CC) -o $@ $^

$(EXE2): $(EXE2).cpp 
	$(CC) -o $@ $^
	
$(EXE3): $(EXE3).cpp
	$(CC) -o $@ $^

$(EXE4): $(EXE4).cpp
	$(CC) -o $@ $^

$(EXE5): $(EXE5).cpp
	$(CC) -o $@ $^

$(EXE6): $(EXE6).cpp $(LIB)
	$(CC) -o $@ $^ $(INCLUDEPATH)

clean:
	rm $(EXEALL)