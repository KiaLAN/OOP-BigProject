CXXFLAGS:=-O2 -std=c++14
ifndef TAR
	TAR:=main
else
	CXXFLAGS:= $(CXXFLAGS) -Wl,--unresolved-symbols=ignore-in-object-files
endif
OBJS:=$(wildcard Graph/*.o Parser/*.o) $(TAR).o

all: build

build: sub_build $(TAR).cpp
	g++ $(CXXFLAGS) -c $(TAR).cpp
	g++ $(CXXFLAGS) $(OBJS) -o $(TAR)

sub_build:
	make build -C Graph/
	make build -C Parser/

debug: $(TAR).cpp clean sub_debug
	g++ -g $(CXXFLAGS) -c $(TAR).cpp
	g++ -g $(CXXFLAGS) $(OBJS) -o $(TAR)

sub_debug:
	make debug -C Graph/
	make debug -C Parser/

.PHONY: clean cleanall
clean:
	-rm $(OBJS)

cleanall:
	-rm $(OBJS) *.o main draft
