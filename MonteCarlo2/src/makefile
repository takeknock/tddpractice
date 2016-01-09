CC = g++
impl = $(wildcard *.cpp)
LNK = -lcppunit
OUTFILENAME = a.out

$(OUTFILENAME): $(impl)
	$(CC) $^ $(LNK)	

clean:
	-rm $(OUTFILENAME)
