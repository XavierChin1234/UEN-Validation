//Validate the format for businesses registered with ACRA
#include <stdlib.h>
#include <string>

class Business{
    public:

        //Validate UEN for Businesses registered with ACRA
        bool ValidateBusinessUEN(std::string input);

    private:
        //Check if lenght of string is == 9
        bool CheckLength(std::string input);

        //Check if last character is a alphabet
        bool CheckLastAlphabet(std::string input);

        //Check if the first 8 characters are digits
        bool CheckEightDigitsNumber(std::string input);

        //Check if string is NULL or empty
        bool IsStringEmpty(std::string input);
};


