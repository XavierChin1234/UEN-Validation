#include "LocalCompanies.h"

//Check if lenght of string is == 10
bool LocalCompanies::CheckLength(std::string input){
    if(input.length() < 10 || input.length() > 10){
        return false;
    }
    return true;
}

//Check if last character is a alphabet
bool LocalCompanies::CheckAlphabet(std::string input){
    if(std::isdigit(input.back())){
        return false;
    }
    return true;
}

//Check if the first 9 characters are digits
bool LocalCompanies::CheckNineDigitsNumber(std::string input){
    for(int i = 1; i < input.length() -1 ; i++){
        if(std::isdigit(input[i]) == 0){
            return false;
        }
    }
    return true;
}

//Check if string is NULL or empty
bool LocalCompanies::IsStringEmpty(std::string input){
    for(int i = 1;i < input.length()-1; i++){
        if(input.empty() == true || isspace(input[i]) == 1){
            return false;
        }
    }
    return true;
}

//Validate String format for Local Companies registered with ACRA
bool LocalCompanies::LocalCompaniesValidate(std::string input){
    if(this->IsStringEmpty(input) == true && this->CheckLength(input) == true && this->CheckAlphabet(input) == true && this->CheckNineDigitsNumber(input) == true){
        return true;
    }
    return false;
}