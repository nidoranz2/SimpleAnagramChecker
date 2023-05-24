#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isAnagram(char * s, char * t);

int main(int argc, char* argv[]){
    if(argc != 3){
        printf("Correct usage: ./[program_name] [string1] [string2]\n");
        return 1;
    }
    if(isAnagram(argv[1], argv[2])){
        printf("The two strings are anagrams\n");
        return 0;
    }
    printf("The two strings are not anagrams\n");
    return 1;
    
}

bool isAnagram(char * s, char * t){
    if (strlen(s) != strlen(t)){
        return false;
    }
    int hash[26] = {0};
    //create a counter for each alphabet, assuming there is only 26 lower alphabet letters
    //example hash[0] means the number of times the letter 'a' has appeared
    for(int i = 0; s[i] != '\0'; i++){
        if(!islower(s[i])){
            printf("Please only input lowercase english alphabets.\n");
            return false;
        }
        hash[s[i] - 'a'] += 1;
        //increase the counter of the times an alphabet has been encountered
        //s[i] returns the ASCII value of the character, s[i] - 'a' returns the integer that represents
        //the letter in a more understandable manner
    }
    for(int i = 0; t[i] != '\0'; i++){
        if(!islower(t[i])){
            printf("Please only input lowercase english alphabets.\n");
            return false;
        }
        hash[t[i] - 'a'] -= 1;
        //decrease the counter of the time an alphabet has been encountered
        // if it is an anagram the counter for every alphabet should be 0
    }
    for(int i = 0; i < 26; i++){
        if(hash[i] != 0){
            return false;
        }
    }
    return true;
}