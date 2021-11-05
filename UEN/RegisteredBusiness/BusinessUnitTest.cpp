#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include "Business.h"
using namespace std;

int main(){
    Business BusUEN;
    std::string input = "12345678a";

        /*Test case 1: Return true if UEN format is correct
        * input: Valid UEN
        * Expected output: true
        * Actual: true
        */
        printf("Test case 1:\n");
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN\n");
        }
        else{
            printf("Invalid UEN\n");
        }
        printf("\n");
        /*Test case 2: Input a UEN with a length < 9
        * input: A UEN with a lenght < 9
        * Expected output: false
        * Actual: false
        */
       printf("Test case 2:\n");
       input = "1234567a";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN length\n");
        }
        else{
            printf("Invalid UEN length\n");
        }
        printf("\n");

        /*Test case 3: Input a UEN with a length > 9
        * input: A UEN with a lenght > 9
        * Expected output: false
        * Actual: false
        */
       printf("Test case 3:\n");
       input = "1234567891a";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN length\n");
        }
        else{
            printf("Invalid UEN length\n");
        }
        printf("\n");    
        /*Test case 4: Input a UEN with a length == 9
        * input: A UEN with a lenght == 9
        * Expected output: true
        * Actual: true
        */
       printf("Test case 4:\n");
       input = "12345678a";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN length\n");
        }
        else{
            printf("Invalid UEN length\n");
        }
        printf("\n"); 
        /*Test case 5: Input a UEN with a digit last character and check if function return false
        * input: A UEN a digit last character
        * Expected output: false
        * Actual: false
        */
       printf("Test case 5:\n");
       input = "123456789";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN format.\n");
        }
        else{
            printf("Invalid UEN format\n");
        }
        printf("\n");
        /*Test case 6: Input a UEN with a alphabet last character and check if function return true
        * input: A UEN a alphabet last character
        * Expected output: true
        * Actual: true
        */
       printf("Test case 6:\n");
       input = "12345678a";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN format.\n");
        }
        else{
            printf("Invalid UEN format\n");
        }
        printf("\n");
        /*Test case 7: Input a UEN with alphabet in the first 8 characters and check if it return false
        * input: A UEN with alphabet in the first 8 character
        * Expected output: false
        * Actual: false
        */
       printf("Test case 7:\n");
       input = "12bd5678a";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN format.\n");
        }
        else{
            printf("Invalid UEN format\n");
        }
        printf("\n");
        /*Test case 8: Input a UEN with all digits in the first 8 characters and check if it return false
        * input: A UEN with digit in the first 8 character
        * Expected output: true
        * Actual: true
        */
       printf("Test case 8:\n");
       input = "12345678a";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN format.\n");
        }
        else{
            printf("Invalid UEN format\n");
        }
        printf("\n");
        /*Test case 9: input a string that is empty and check if the function return false
        * input: A empty string
        * Expected output: false
        * Actual: false
        */
       printf("Test case 9:\n");
       input = "";
        if(BusUEN.ValidateBusinessUEN(input) == true){
            printf("Valid UEN format.\n");
        }
        else{
            printf("Invalid UEN format\n");
        }
        printf("\n");
    
    return 0;
}