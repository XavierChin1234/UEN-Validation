#include "Business.h"

//Check if lenght of string is == 9
bool Business::CheckLength(std::string input){
    if(input.length() < 9 || input.length() > 9){
        return false;
    }
    return true;
}

//Check if last character is a alphabet
bool Business::CheckLastAlphabet(std::string input){
    if(std::isdigit(input.back())){
        return false;
    }
    return true;
}

//Check if the first 8 characters are digits
bool Business::CheckEightDigitsNumber(std::string input){
    for(int i = 1; i < input.length() -1 ; i++){
        if(std::isdigit(input[i]) == 0){
            return false;
        }
    }
    return true;
}

//Check if string is NULL or empty
bool Business::IsStringEmpty(std::string input){
    for(int i = 1;i < input.length()-1; i++){
        if(input.empty() == true || isspace(input[i]) == 1){
            return false;
        }
    }
    return true;
}

//Validate UEN for Businesses registered with ACRA
bool Business::ValidateBusinessUEN(std::string input){
    if(this->IsStringEmpty(input) == true && this->CheckLength(input) == true
    && this->CheckEightDigitsNumber(input) == true && this->CheckLastAlphabet(input) == true){
        return true;
    }
    return false;
}