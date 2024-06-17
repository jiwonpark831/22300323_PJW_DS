CC = g++
LIBPATH = ./lib/
LIB = $(LIBPATH)sort.cpp
INCLUDEPATH = -I$(LIBPATH)
EXE1 = ds101
EXE2 = ds102
EXE3 = ds103
EXE4 = ds104
EXE5 = ds105
EXE6 = ds106
EXE7 = ds107
EXE8 = ds108
EXE9 = ds109
EXE10 = ds110
EXEALL = $(EXE1) $(EXE2) $(EXE3) $(EXE4) $(EXE5) $(EXE6) $(EXE7) $(EXE8) $(EXE9) $(EXE10)

all : $(EXEALL)

$(EXE1): $(EXE1).cpp $(LIB)
	$(CC) -o $@ $^ $(INCLUDEPATH)

$(EXE2): $(EXE2).cpp 
	$(CC) -o $@ $^ 
	
$(EXE3): $(EXE3).cpp
	$(CC) -o $@ $^

$(EXE4): $(EXE4).cpp
	$(CC) -o $@ $^

$(EXE5): $(EXE5).cpp
	$(CC) -o $@ $^

$(EXE6): $(EXE6).cpp
	$(CC) -o $@ $^

$(EXE7): $(EXE7).cpp
	$(CC) -o $@ $^

$(EXE8): $(EXE8).cpp
	$(CC) -o $@ $^

$(EXE9): $(EXE9).cpp
	$(CC) -o $@ $^

$(EXE10): $(EXE10).cpp
	$(CC) -o $@ $^

clean:
	rm $(EXEALL)