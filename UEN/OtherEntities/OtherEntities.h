//Validate the format for other entities registered with ACRA
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>

class OtherEntities{
    public:
        //Validate format for other entites that are issued a new UEN
        bool ValidateOtherEntitiesUEN(std::string input);
        
    private:
        //Entity-type indicator
        std::vector<std::string> UENENTITY {"LP","LL","FC","PF","RF","MQ","MM","NB","CC",
                                    "CS","MB","FM","GS","DP","CP","NR","CM","CD",
                                    "MD","HS","VH","CH","MH","CL","XL","CX","RP","TU",
                                    "TC","FB","FN","PA","PB","SS","MC","SM","GA","GB"};
        
        //Year indication
        std::vector<char> Year {'T','S','R'};

        //Check if lenght of string is == 10
        bool CheckLength(std::string input);

        //Check if last character is a alphabet
        bool CheckAlphabet(std::string input);

        //Check if first characters is valid with year indication
        bool CheckYearIndication(std::string input);

        //Check if string is NULL or empty
        bool IsStringEmpty(std::string input);

        //Check if entity-type is valid
        bool CheckEntityType(std::string input);      

        //Check if isDigit
        bool CheckDigit(char input);
};