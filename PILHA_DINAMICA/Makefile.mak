CC     = gcc
WINDRES= windres
RM     = rm -f
OBJS   = main.o \
         pilhaDinamica.o \
         AppResource.res

LIBS   =
CFLAGS =

.PHONY: Projeto\ vazio1.exe clean clean-after

all: Projeto\ vazio1.exe

clean:
	$(RM) $(OBJS) Projeto\ vazio1.exe

clean-after:
	$(RM) $(OBJS)

Projeto\ vazio1.exe: $(OBJS)
	$(CC) -Wall -s -o '$@' $(OBJS) $(LIBS)

main.o: main.c pilhaDinamica.h
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

pilhaDinamica.o: pilhaDinamica.c pilhaDinamica.h
	$(CC) -Wall -s -c $< -o $@ $(CFLAGS)

AppResource.res: AppResource.rc
	$(WINDRES) -i AppResource.rc -J rc -o AppResource.res -O coff

