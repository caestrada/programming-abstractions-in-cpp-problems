# Makefile for life
#****************************************************************

PROGRAM = life
OBJECTS = life.o life-graphics.o

ROOTPATH = ../..
CPPOPTIONS = -I$(ROOTPATH)/include -fvisibility-inlines-hidden
LDOPTIONS = -L$(ROOTPATH)/lib -static-libstdc++
LIB = -lStanfordCPPLib

# ***************************************************************
# Entry to bring the package up to date
#    The "make all" entry should be the first real entry

all: $(PROGRAM) spl.jar

spl.jar:
	@ln -s $(ROOTPATH)/java/spl.jar

life: $(OBJECTS)
	g++ -o $(PROGRAM) $(LDOPTIONS) $(OBJECTS) $(LIB)

life.o: life.cpp Makefile
	g++ -c $(CPPOPTIONS) life.cpp

life-constants.o: life-constants.h Makefile
	g++ -c $(CPPOPTIONS) life-constants.cpp

life-graphics.o: life-graphics.cpp life-graphics.h Makefile
	g++ -c $(CPPOPTIONS) life-graphics.cpp


# ***************************************************************
# Standard entries to remove files from the directories
#    tidy  -- eliminate unwanted files
#    clean -- delete derived files in preparation for rebuild

tidy:
	rm -f ,* .,* *~ core a.out *.err

clean scratch: tidy
	rm -f *.o *.a $(PROGRAM) $(OBJECTS) spl.jar
