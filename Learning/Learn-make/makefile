all: hello.out

# var
CC = g++
INSTDIR = /usr/local/bin
INCLUDE = .
CFLAGS = -g -Wall -ansi
LIBS += -framework CoreFoundation


hello.out: hello.o 2.o 3.o
	$(CC) -o hello.out hello.o 2.o 3.o
hello.o: hello.cpp a.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c hello.cpp
2.o: 2.cpp b.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c 2.cpp
3.o: 3.cpp a.h b.h c.h
	$(CC) -I$(INCLUDE) $(CFLAGS) -c 3.cpp

clean:
	rm -f 2.o 3.o hello.o hello.out

install: make_test
	@if[	-d $(INSTDIR)	];	\
	then	\
		cp hello.out $(INSTDIR);\
		chmod a+x $$(INSTDIR)/hello.out	\
		chmod og-w $(INSTDIR)/hello.out	\
		echo "Installed in $(INSTDIR)";	\
	else	\
		echo "Sorry, $(INSTDIR) does not exist";\
	fi