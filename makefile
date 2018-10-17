hepsi:derle calistir

derle:
	g++ -I ./include/ -o ./lib/Top.o -c ./src/Top.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Top.o ./src/Test.cpp

calistir:
	./bin/Test