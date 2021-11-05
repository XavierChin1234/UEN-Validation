
main: main.o Business.o OtherEntities.o LocalCompanies.o
	g++ -std=c++11 -o main main.o Business.o OtherEntities.o LocalCompanies.o

main.o: main.cpp ../RegisteredBusiness/Business.cpp ../OtherEntities/OtherEntities.cpp ../LocalCompanies/LocalCompanies.cpp ../RegisteredBusiness/Business.h ../OtherEntities/OtherEntities.h ../LocalCompanies/LocalCompanies.h
	g++ -std=c++11 -c main.cpp ../RegisteredBusiness/Business.cpp ../OtherEntities/OtherEntities.cpp ../LocalCompanies/LocalCompanies.cpp

../RegisteredBusiness/Business.o: ../RegisteredBusiness/Business.cpp ../RegisteredBusiness/Business.h
	g++ -std=c++11 -c ../RegisteredBusiness/Business.cpp

../OtherEntities/OtherEntities.o: ../OtherEntities/OtherEntities.cpp ../OtherEntities/OtherEntities.h
	g++ -std=c++11 -c ../OtherEntities/OtherEntities.cpp

../LocalCompanies/LocalCompanies.o: ../LocalCompanies/LocalCompanies.cpp ../LocalCompanies/LocalCompanies.h
	g++ -std=c++11 -c ../LocalCompanies/LocalCompanies.cpp

clean:
	rm *.o 