#include<stdio.h>
#include<string.h>
   
int main(){
    char firstWord[20];
    char secondWord[20];
    int thirdnumber;

    char sample[] = "Hi";

    printf("-----------------------------\n");
    printf("WELCOME TO PASSWORD GENERATOR\n");
    printf("---------Security By: Zain-Zameer\n");
    printf("\n");



    printf("Enter Any Word/Letter/Name/Place/Thing: ");
    scanf("%s",&firstWord);
    printf("Enter Any Month: ");
    scanf("%s",&secondWord);
    printf("Enter any Number: ");
    scanf("%d",&thirdnumber);
    printf("___________________\n");
    printf("-------------------\n");
    printf("Generated Password: ");
    // For First Word
    for (int i = 0; i < strlen(firstWord); i++)
    {
        if(firstWord[i]=='a' || firstWord[i] == 'A'){
            printf("@");
        }
        else if(firstWord[i]=='b' || firstWord[i] == 'B'){
            printf("X");
        }
        else if(firstWord[i]=='c' || firstWord[i] == 'C'){
            printf("x");
        }
        else if(firstWord[i]=='d' || firstWord[i] == 'D'){
            printf("Fortyf");
        }
        else if(firstWord[i]=='e' || firstWord[i] == 'E'){
            printf("Q");
        }
        else if(firstWord[i]=='f' || firstWord[i] == 'F'){
            printf("$");
        }
        else if(firstWord[i]=='g' || firstWord[i] == 'G'){
            printf("*");
        }
        else if(firstWord[i]=='h' || firstWord[i] == 'H'){
            printf("**");
        }
        else if(firstWord[i]=='i' || firstWord[i] == 'I'){
            printf("^");
        }
        else if(firstWord[i]=='j' || firstWord[i] == 'J'){
            printf("&&");
        }
        else if(firstWord[i]=='k' || firstWord[i] == 'K'){
            printf("U");
        }
        else if(firstWord[i]=='l' || firstWord[i] == 'L'){
            printf("o");
        }
        else if(firstWord[i]=='m' || firstWord[i] == 'M'){
            printf("B");
        }
        else if(firstWord[i]=='n' || firstWord[i] == 'N'){
            printf("Gg");
        }
        else if(firstWord[i]=='o' || firstWord[i] == 'O'){
            printf("Y");
        }
        else if(firstWord[i]=='p' || firstWord[i] == 'P'){
            printf("QT");
        }
        else if(firstWord[i]=='q' || firstWord[i] == 'Q'){
            printf("E");
        }
        else if(firstWord[i]=='r' || firstWord[i] == 'R'){
            printf("v");
        }
        else if(firstWord[i]=='s' || firstWord[i] == 'S'){
            printf("@");
        }
        else if(firstWord[i]=='t' || firstWord[i] == 'T'){
            printf("hi");
        }
        else if(firstWord[i]=='u' || firstWord[i] == 'U'){
            printf("xv");
        }
        else if(firstWord[i]=='v' || firstWord[i] == 'V'){
            printf("s");
        }
        else if(firstWord[i]=='w' || firstWord[i] == 'W'){
            printf("M");
        }
        else if(firstWord[i]=='x' || firstWord[i] == 'X'){
            printf("dAwg");
        }
        else if(firstWord[i]=='y' || firstWord[i] == 'Y'){
            printf("iYe");
        }
        else if(firstWord[i]=='z' || firstWord[i] == 'Z'){
            printf("##");
        }else{
            printf("\nEnter Any Name/Thing/Place: Only Words are allowed.\n");
            printf("\n");
            break;
        }
    }

    // For Month 
    for (int i = 0; i < strlen(sample); i++) {
        if (strcmp(secondWord, "January") == 0 || strcmp(secondWord, "january") == 0) {
            printf("00");
        }
        else if (strcmp(secondWord, "February") == 0 || strcmp(secondWord, "february") == 0) {
            printf("010");
        }
        else if (strcmp(secondWord, "March") == 0 || strcmp(secondWord, "march") == 0) {
            printf("011");
        }
        else if (strcmp(secondWord, "April") == 0 || strcmp(secondWord, "april") == 0) {
            printf("0100");
        }
        else if (strcmp(secondWord, "May") == 0 || strcmp(secondWord, "may") == 0) {
            printf("0101");
        }
        else if (strcmp(secondWord, "June") == 0 || strcmp(secondWord, "june") == 0) {
            printf("110");
        }
        else if (strcmp(secondWord, "July") == 0 || strcmp(secondWord, "july") == 0) {
            printf("111");
        }
        else if (strcmp(secondWord, "August") == 0 || strcmp(secondWord, "august") == 0) {
            printf("1000");
        }
        else if (strcmp(secondWord, "September") == 0 || strcmp(secondWord, "september") == 0) {
            printf("1001");
        }
        else if (strcmp(secondWord, "October") == 0 || strcmp(secondWord, "october") == 0) {
            printf("1010");
        }
        else if (strcmp(secondWord, "November") == 0 || strcmp(secondWord, "november") == 0) {
            printf("1011");
        }
        else if (strcmp(secondWord, "December") == 0 || strcmp(secondWord, "december") == 0) {
            printf("1100");
        }else{
            printf("\nEnter Any Month: Only Name of Month are allowed.\n");
            printf("\n");
            break;
        }
    }

    // For Number
    for (int i = 0; i < thirdnumber; i++)
    {
        if(i>5){
            printf("Greater Than 5 are not allowed.");
        }
        else{
            printf("*&7");
            continue;
        }
    }
    


    
    
    
    
    
    return 0;
}