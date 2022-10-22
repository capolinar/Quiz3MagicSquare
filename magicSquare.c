//headers go here
#include <stdlib.h> 
#include  <time.h> 
#include  <stdio.h>
#include <ctype.h>
#include <string.h>

//magic square verification code to be called
//check and verify if numbers are 1 to 9 (no 0 or 10+)
//print if errors are found for numbers
//check if each row, column, and diagnol add up to the same number
//print if not magic square/reason
//return true/false status

//add print square function
void printSquare(int a[3][3]);


int main(void)
{
    //part1
//create 2d array for 3x3 square that is already polulated
//and is also already a magic square
//Test/verify if magic square
    int magicSq[3][3] = {4,9,2,3,5,7,8,1,6};//3x3 magic square

    //add verify function here

    printf("Pre-made square print out: \n");
    printSquare(magicSq);
    
    


    
    





    return EXIT_SUCCESS;
}

void printSquare(int a[3][3])
{
    for(int i = 3; i < 3; i++)
    {
        for(int j = 3; j < 3; j++)
        {
            printf("%d",a[i][j]);
        }
    }
}
//main goes here


//part1
//create 2d array for 3x3 square that is already polulated
//and is also already a magic square
//Test/verify if magic square

//part2
//create 2d arraygit
//populate square, no repeats
//populaton is by random
//check if magic square
//keep count of loop
//loop/randomize until it is a magic square
//print square and placement

//return success message