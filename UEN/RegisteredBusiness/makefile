
BusinessUnitTest: Business.o BusinessUnitTest.o
	g++ -std=c++11 -o BusinessUnitTest Business.o BusinessUnitTest.o

BusinessUnitTest.o: BusinessUnitTest.cpp Business.h
	g++ -std=c++11 -c BusinessUnitTest.cpp

Business.o: Business.cpp Business.h
	g++ -std=c++11 -c Business.cpp

clean:
	rm *.o