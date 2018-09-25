TARGET	=	test
OBJS	= 	NuclearData.o test.o

all : ${TARGET}

${TARGET} : ${OBJS}
	g++ -Wall -s -o $@ ${OBJS}

%.o : %.cpp %.h
	g++ -O2 -fPIC -DLINUX -Wall -c -o $@ $<


#####
.PHONY : clean
clean:
	rm -f ${TARGET} ${OBJS}
