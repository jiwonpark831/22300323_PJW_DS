CC = g++
EXE1 = ds081
EXE2 = ds082
EXE3 = ds083
EXEALL = $(EXE1) $(EXE2) $(EXE3)

all : $(EXEALL)

$(EXE1): $(EXE1).cpp 
	$(CC) -o $@ $^

$(EXE2): $(EXE2).cpp
	$(CC) -o $@ $^
	
$(EXE3): $(EXE3).cpp
	$(CC) -o $@ $^

clean:
	rm $(EXEALL)