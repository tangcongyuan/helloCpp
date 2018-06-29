SYSTEMC_HOME?=/usr/local/systemc-2.3.2_c++11
CFLAG = -Wall -Werror -g -Wl,-rpath,$(SYSTEMC_HOME)/lib-linux64,-rpath,$(SYSTEMC_HOME)/lib
CC = g++
INCLUDE = -I. -Iinclude/ -I$(SYSTEMC_HOME)/include -I$(OUTDIR_T)
LIBS = -L. -L$(SYSTEMC_HOME)/lib-linux64 -L$(SYSTEMC_HOME)/lib -lsystemc -lm -std=c++11
OUTDIR = ./out

all: compile run

touch:
	@mkdir $(OUTDIR)

compile:
	@($(CC) $(CFLAG) $(INCLUDE) $(LIBS) *.cpp -o $(OUTDIR)/out.o)

run:
	@($(OUTDIR)/out.o)

clean:
	rm -rf $(OUTDIR)/*
