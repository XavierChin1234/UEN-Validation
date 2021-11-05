#include "LocalCompanies.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
int main(){
    LocalCompanies Companies;

    /*Test case 1: Return true if UEN format is correct
     * input: Valid UEN
     * Expected output: true
     * Actual: true
    */
    std::string input = "123456789A";
    printf("Test case 1:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    /*Test case 2: Check if UEN is not empty
     * input: Empty String
     * Expected output: false
     * Actual false
    */
    input = "";
    printf("Test case 2:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("Input is not empty.\n");
    }
    else{
        printf("Input is empty.\n");
    }

    /*Test case 3: Check if UEN Length is correct.
     * input: A string that is less than 10
     * Expected output: false
     * Actual false
    */
    input = "1234567891a";
    printf("Test case 3:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    /*Test case 4: Check if UEN Length is correct.
     * input: A string that is more than 10
     * Expected output: false
     * Actual false
    */
    input = "12345678a";
    printf("Test case 4:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    /*Test case 5: Check if UEN Length is correct.
     * input: A string that is == 10
     * Expected output: true
     * Actual true
    */
    input = "123456789a";
    printf("Test case 5:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    /*Test case 6: Check if UEN last character is a alphabet
     * input: A string only contains numbers
     * Expected output: false
     * Actual false
    */
    input = "1234567891";
    printf("Test case 6:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    /*Test case 7: Check if UEN Length is correct.
     * input: A string that contains a alphabet on the last character
     * Expected output: true
     * Actual true
    */
    input = "123456789a";
    printf("Test case 7:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    /*Test case 8: Check if UEN first 9 characters are numbers
     * input: A string that contains alphabet in the first nine characters
     * Expected output: false
     * Actual false
    */
    input = "1j345o789a";
    printf("Test case 8:\n");
    if(Companies.LocalCompaniesValidate(input) == true){
        printf("UEN format is correct.\n");
    }
    else{
        printf("UEN format is incorrect.\n");
    }

    return 0;
}