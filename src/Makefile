# Made by Gabriel Barnard
# Made on the 14th of February 2026



.PHONY: compile run all clean

all: clean compile run

compile: main.cpp CalculateTDEE.cpp
	mkdir -p ../bin
	g++ main.cpp CalculateTDEE.cpp -o ../bin/'Total Daily Energy Expenditure Calculator'

run:
	./../bin/'Total Daily Energy Expenditure Calculator'

clean:
	rm -rf ../bin
