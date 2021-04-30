IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

all: roadc-example1 roadc-example2 roadc-example3

roadc-example1: roadc-example1.c roadc.c 
	$(CC) -o $@ $^ $(CFLAGS) 

roadc-example2: roadc-example2.c roadc.c 
	$(CC) -o $@ $^ $(CFLAGS) 

roadc-example3: roadc-example3.c roadc.c 
	$(CC) -o $@ $^ $(CFLAGS) 

clean:
	rm -f *.o *~ $(INCDIR)/*~ core roadc-example1.exe roadc-example2.exe roadc-example3.exe

