all: fibonacci fibonacci_monitored

%_monitored.cc: %.cc ../../src/asmc++ asm.conf
	../../src/asmc++ $< -c asm.conf -o $@

fibonacci: fibonacci.cc
	g++ $< -o $@

fibonacci_monitored: fibonacci_monitored.cc
	g++ $< -o $@
