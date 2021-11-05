#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "../LocalCompanies/LocalCompanies.h"
#include "../OtherEntities/OtherEntities.h"
#include "../RegisteredBusiness/Business.h"

//Declaration of methods
std::string PromptUENNo();

//Variable declaration
std::string inputNo;
bool check = false;
std::string UEN;

int main(){
    
    while(inputNo != "q"){
        check = false;
        printf("Choose one entities.\n");
        printf("1. Business registered with ACRA.\n");
        printf("2. Local companies registered with ACRA.\n");
        printf("3. Other entities.\n");
        printf("Enter \"q\" to quit.\n");
        std::getline(std::cin,inputNo);
        printf("\n");

        try{
            //Check if input is a non numerical number
            if(!std::isdigit(inputNo[0]) && inputNo != "q"){
                //Throw exeception
                throw(1);
            }
            else if(inputNo == "q"){
                break;
            }
            //Check if input is < 1 or > 3
            else if(std::stoi(inputNo) < 1 || std::stoi(inputNo) > 3){
                throw(1);
            }
            else if(std::stoi(inputNo) == 1){
                //Create business object
                Business RegBus;
                while(check == false){
                    //prompt user to enter UEN number
                    UEN = PromptUENNo();
                    //check if UEN number is valid
                    if(RegBus.ValidateBusinessUEN(UEN) == true){
                    printf("Valid Businesses registered with ACRA UEN: %s\n",UEN.c_str());
                    //if UEN is valid return to menu
                    check = true;
                    }
                    //if UEN == q return to menu
                    else if(UEN == "q"){
                        check = true;
                    }
                    //if UEN is invalid prompt a guide for a valid UEN number.
                    else{
                        printf("Invalid registered business UEN number.\n");
                        printf("A valid registered business UEN format is: \"nnnnnnnnX\"\n");
                        printf("n = a number.\nX = a check alphabet\nPlease try again.\n");
                        printf("To return to menu enter \"q\".\n");
                        printf("\n");
                    }
                }
            }
            else if(std::stoi(inputNo) == 2){
                //Create LocalCompanies object
                LocalCompanies LocalComp;
                while(check == false){
                    //prompt user to enter UEN number
                    UEN = PromptUENNo();
                    //check if UEN number is valid
                    if(LocalComp.LocalCompaniesValidate(UEN) == true){
                    printf("Valid Local companies registered with ACRA UEN: %s\n",UEN.c_str());
                    //if UEN is valid return to menu
                    check = true;
                    }
                    //if UEN == q return to menu
                    else if(UEN == "q"){
                        check = true;
                    }
                    //if UEN is invalid prompt a guide for a valid UEN number.
                    else{
                        printf("Invalid Local companies UEN number.\n");
                        printf("A valid Local companies UEN format is: \"yyyynnnnnX\"\n");
                        printf("yyyy = year of insurance.\nn = a number.\nX = a check alphabet.\nPlease try again.\n");
                        printf("To return to menu enter \"q\".\n");
                        printf("\n");
                    }
                }
                    
            }
            else if(std::stoi(inputNo) == 3){
                //Create OtherEntities object
                OtherEntities OtherEntitie;
                while(check == false){
                    //prompt user to enter UEN number
                    UEN = PromptUENNo();
                    //check if UEN number is valid
                    if(OtherEntitie.ValidateOtherEntitiesUEN(UEN) == true){
                    printf("Valid UEN for other entities: %s\n",UEN.c_str());
                    //if UEN is valid return to menu
                    check = true;
                    }
                    //if UEN == q return to menu
                    else if(UEN == "q"){
                        check = true;
                    }
                    //if UEN is invalid prompt a guide for a valid UEN number.
                    else{
                        printf("Invalid other entities UEN number.\n");
                        printf("A valid other entities UEN format is: \"TyyPQnnnnX\"\n");
                        printf("Tyy/Syy = year of insurance.\n\'T\' represents \'20\' \'S\' represents \'19\' and \'R\' represents \'18\'.\n");
                        printf("\"PQ\" represent entity type.");
                        printf("n = a number.\nX = a check alphabet.\nPlease try again.\n");
                        printf("To return to menu enter \"q\".\n");
                        printf("\n");
                    }
                }     
            }
        }catch(int x){
            printf("Invalid input!\n");
        }
        printf("\n");
    }
    return 0;
}

//Prompt user to enter UEN number and return UEN string
std::string PromptUENNo(){
    std::string UEN;
    printf("Enter a valid UEN number: ");
    std::getline(std::cin,UEN);

    return UEN;
}