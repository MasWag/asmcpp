all: sum_monitored sum

%_monitored.cc: %.cc ../../src/asmc++
	../../src/asmc++ $< -c asm.conf -o $@

sum_monitored: sum_monitored.o sum_main.o
	$(CXX) $^ -o $@

sum: sum.o sum_main.o
	$(CXX) $^ -o $@

clean:
	$(RM) sum.o sum_monitored.o sum_main.o sum_monitored.cc 

.PHONY: clean
