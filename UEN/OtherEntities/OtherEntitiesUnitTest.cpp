#include <stdlib.h>
#include <stdio.h>
#include "OtherEntities.h"
#include <iostream>

int main(){
    OtherEntities Entities;
    std::string input = "t01cc0001a";

    /*Test case 1: Return true if UEN format is correct
     * input: Valid UEN
     * Expected output: true
     * Actual: true
    */
   printf("Test case 1.\n");
    if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }
    printf("\n");
    /*Test case 2: Input a UEN with a invalid Entity type and check if function returns false
     * input: A UEN with invalid Entity type
     * Excpected output: false
     * Actual: false
    */
   input = "t01aa0001a";
   printf("Test case 2.\n");
    if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 3: Input a UEN with a valid Entity type and check if function returns true
     * input: A UEN with valid Entity type
     * Expected output: true
     * Actual: true
    */
   input = "t01lp0001a";
   printf("Test case 3.\n");
    if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 4: Input a UEN with a length < 10
     * input: A UEN with a lenght < 10
     * Expected output: false
     * Actual: false
    */
   input = "t01lp001a";
   printf("Test case 4:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 5: Input a UEN with a length > 10
     * input: A UEN with a lenght > 10
     * Expected output: false
     * Actual: false
    */
   input = "t01lp00001a";
   printf("Test case 5:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 6: Input a UEN with a length == 10
     * input: A UEN with a lenght == 10
     * Expected output: true
     * Actual: true
    */
   input = "t01lp0001a";
   printf("Test case 6:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 7: Check if first characters is valid with year indication
     * input: A UEN with a invalid first character year indication
     * Expected output: false
     * Actual: false
    */
   input = "a01lp0001a";
   printf("Test case 7:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 8: Check if first characters is valid with year indication
     * input: A UEN with a valid first character year indication
     * Expected output: true
     * Actual: true
    */
   input = "t01lp0001a";
   printf("Test case 8:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 9: Check if last character is a alphabet
     * input: A UEN with a invalid last character
     * Expected output: false
     * Actual: false
    */
   input = "t01lp00011";
   printf("Test case 9:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 10: Check if last character is a alphabet
     * input: A UEN with a valid last character
     * Expected output: true
     * Actual: true
    */
   input = "t01lp0001a";
   printf("Test case 10:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid Entity type.\n");
    }
    else{
        printf("Invalid Entity type.\n");
    }
    printf("\n");
    /*Test case 11: Check if string is empty
     * input: A string that is empty
     * Expected output: false
     * Actual: false
    */
   input = "";
   printf("Test case 11:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("String is not empty.\n");
    }
    else{
        printf("String is empty.\n");
    }
    printf("\n");
    /*Test case 12: Check if characters 6 to 9 is a digit
     * input: A UEN containing non digit from characters 6 to 9
     * Expected output: false
     * Actual: false
    */
   input = "t01lpabcda";
   printf("Test case 12:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid UEN format.\n");
    }
    else{
        printf("Invalid UEN format.\n");
    }
    printf("\n");

    /*Test case 13: Check if characters 6 to 9 is a digit
     * input: A UEN containing digits from characters 6 to 9
     * Expected output: true
     * Actual: true
    */
   input = "t01lp0001a";
   printf("Test case 13:\n");
   if(Entities.ValidateOtherEntitiesUEN(input) == true){
        printf("Valid UEN format.\n");
    }
    else{
        printf("Invalid UEN format.\n");
    }

    return 0;
}