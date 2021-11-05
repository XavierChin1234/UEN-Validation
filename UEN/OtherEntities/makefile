
OtherEntitiesUnitTest: OtherEntitiesUnitTest.o OtherEntities.o
	g++ -std=c++11  -o OtherEntitiesUnitTest OtherEntitiesUnitTest.o OtherEntities.o

OtherEntitiesUnitTest.o: OtherEntitiesUnitTest.cpp OtherEntities.h
	g++ -std=c++11 -c OtherEntitiesUnitTest.cpp

OtherEntities.o: OtherEntities.cpp OtherEntities.h
	g++ -std=c++11 -c OtherEntities.cpp

clean:
	rm *.o