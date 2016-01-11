CC = g++
impl = $(wildcard *.cpp)
LNK = -lcppunit
OUTFILENAME = a.out

$(OUTFILENAME): $(impl)
	$(CC) -g $^ $(LNK)	

clean:
	-rm $(OUTFILENAME)
