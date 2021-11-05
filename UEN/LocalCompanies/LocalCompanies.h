//Validate the format for local companies registered with ACRA
#include <stdlib.h>
#include <string>



class LocalCompanies{
    public:
        //Validate String format for Local Companies registered with ACRA
        bool LocalCompaniesValidate(std::string input);

    private:
        //Check if lenght of string is == 10
        bool CheckLength(std::string input);

        //Check if last character is a alphabet
        bool CheckAlphabet(std::string input);

        //Check if the first 9 characters are digits
        bool CheckNineDigitsNumber(std::string input);

        //Check if string is NULL or empty
        bool IsStringEmpty(std::string input);

};

