CC       = gcc
CFLAGS   =  -m32 -Wunused -I../include -I../../../include -D__NO_PROTOTYPE__
BBSHOME	 = /home/bbs

.c.o:   ;   $(CC) $(CFLAGS) -c $*.c

all: bbspop3d

install: bbspop3d
	cp bbspop3d $(BBSHOME)/bin

clean:
	rm -fr *.o *.BAK *.log *core* DEAD* *~ bbspop3d

distclean:
	rm $(BBSHOME)/bin/bbspop3d

bbspop3d: bbspop3d.c $(BBSHOME)/src/src/pass.c
	$(CC) $(CFLAGS) -o bbspop3d bbspop3d.c $(BBSHOME)/src/src/pass.c -L$(BBSHOME)/src/lib -lSystem

