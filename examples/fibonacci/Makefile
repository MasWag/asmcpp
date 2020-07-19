all: finobacci finobacci_monitored

%_monitored.cc: %.cc ../../src/asmc++
	../../src/asmc++ $< -c asm.conf -o $@

finobacci: fibonacci.cc
	g++ $< -o $@

finobacci_monitored: fibonacci_monitored.cc
	g++ $< -o $@
