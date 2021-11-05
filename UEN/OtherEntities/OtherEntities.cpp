#include "OtherEntities.h"

//Check if lenght of string is == 10
bool OtherEntities::CheckLength(std::string input){
    if(input.length() < 10 || input.length() > 10){
        return false;
    }
    return true;
}

//Check if last character is a alphabet
bool OtherEntities::CheckAlphabet(std::string input){
    if(std::isdigit(input.back())){
        return false;
    }
    return true;
}

//Check if string is NULL or empty
bool OtherEntities::IsStringEmpty(std::string input){
    for(int i = 1;i < input.length()-1; i++){
        if(input.empty() == true || isspace(input[i]) == 1){
            return false;
        }
    }
    return true;
}

//Check if first characters is valid with year indication
bool OtherEntities::CheckYearIndication(std::string input){
    for(int i = 0; i < this->Year.size();i++){
        if( toupper(input.front()) == this->Year.at(i)){
            return true;
        }
    }
    return false;
}

//Check if isDigit
bool OtherEntities::CheckDigit(char input){
    return isdigit(input);
}

//Check if entity-type is valid
bool OtherEntities::CheckEntityType(std::string input){
    std::string CheckString = input.substr(3,2);
    transform(CheckString.begin(),CheckString.end(),CheckString.begin(), ::toupper);
    for(int i = 0; i < this->UENENTITY.size(); i ++){
        if(CheckString == this->UENENTITY.at(i)){
            return true;
        }
    }
    return false;
}

//Validate format for other entites that are issued a new UEN

bool OtherEntities::ValidateOtherEntitiesUEN(std::string input){
    if(this->CheckYearIndication(input) == true && this->CheckDigit(input[1]) == true 
    && this->CheckDigit(input[2]) == true && this->CheckEntityType(input) == true
    && this->CheckDigit(input[5]) == true && this->CheckDigit(input[6]) == true
    && this->CheckDigit(input[7]) == true && this->CheckDigit(input[8]) == true
    && this->CheckAlphabet(input) == true && this->CheckLength(input) == true
    && this->IsStringEmpty(input) == true){
        return true;
    }
    return false;
}

