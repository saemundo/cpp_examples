#
# This is a simple makefile for this dummy project
#
CFLAGS = -I. -Wall -ftest-coverage -fprofile-arcs

bin/runner : build/main.o build/dummy.o build/nonaction.o
	g++ -o bin/runner build/main.o build/dummy.o build/nonaction.o
build/main.o : src/Main.cpp src/Dummy.h src/NonAction.h
	g++ -c src/Main.cpp -o build/main.o
build/dummy.o : src/Dummy.cpp src/Dummy.h
	g++ -c src/Dummy.cpp -o build/dummy.o
build/nonaction.o : src/NonAction.cpp src/NonAction.h
	g++ -c src/NonAction.cpp -o build/nonaction.o
bin/tests : build/tests-main.o build/dummy.o build/nonaction.o
	g++ -o $@ $^ $(CFLAGS) -lm -lncurses -Os 
build/tests-main.o : src/tests-main.cpp src/NonAction.h src/Dummy.h
	g++ -c src/tests-main.cpp -o build/tests-main.o
clean:
	-rm bin/runner bin/tests build/*.o