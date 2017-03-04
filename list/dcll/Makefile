CC = g++
AS = as
LD = ld
OBJS = list_aux_routines.o list_interface_routines.o
SRCS = list_aux_routines.cpp list_interface_routines.cpp
OUTPUT = libdcll.so

all : $(OBJS)
	$(CC) --shared -o $(OUTPUT) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) -fPIC -c $(SRCS)

clean:
	rm -f libdccll.so *.o

