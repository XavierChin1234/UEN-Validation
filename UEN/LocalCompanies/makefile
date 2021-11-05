
LocalCompaniesUnitTest: LocalCompaniesUnitTest.o LocalCompanies.o 
	g++ -std=c++11 -o LocalCompaniesUnitTest LocalCompanies.o LocalCompaniesUnitTest.o

LocalCompaniesUnitTest.o: LocalCompaniesUnitTest.cpp LocalCompanies.h
	g++ -std=c++11 -c LocalCompaniesUnitTest.cpp

LocalCompanies.o: LocalCompanies.cpp LocalCompanies.h
	g++ -std=c++11 -c LocalCompanies.cpp

clean:
	rm *.o


