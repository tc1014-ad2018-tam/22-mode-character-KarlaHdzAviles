/*This program helps the user to identify which is the most repeated character of the introduced string.
 *
 * Author: Karla Alexandra Hernandez Aviles
 * Email:A01411843@itesm.mx
 * Date:18/10/2018
 *
 */

 //This program use this libraries
#include <stdio.h>
#include <string.h>

int main() {
    // Declaration of variables
    char str[300];                     //Str=string
    char mode = str[0];
    int counter = 0;
    int count = 0;

    // In this part the program ask to the user for the string
    printf("Welcome user, this program will help you to identify which character is the most repeated."
           "Please, enter your string:\n");
    fgets(str, sizeof(str), stdin);

    // In this part the program compares the characters with others characters
    for (int k = 0; k < strlen(str); k++) {
        counter = 0;

        for (int n = k + 1; n < strlen(str); n++) {

            //In this part the program exclude or prevent the spaces from characters
            if (str[k] == str[n] && str[n] != ' ') {
                counter++;
            }
        }

        //in this part, the program replaces the value, if one value is more repeated than another,
        // it replaces the previous value
        if (counter > count) {
            count = counter;
            mode = str[k];
        }
    }

    //The program shows the result
    printf("The most repeated character is %c", mode);

    return 0;
}
