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

int verifyMagic(int a[3][3]);

void randomSquare(int a[3][3]);


int main(void)
{
    //part1
//create 2d array for 3x3 square that is already polulated
//and is also already a magic square
//Test/verify if magic square
    int magicSq[3][3] = {4,9,2,3,5,7,8,1,6};//3x3 magic square


    printf("Pre-made square print out: \n");
    printSquare(magicSq);

    //add verify function here
    int magicStatus = 0; //0 is not magic, 1 is magic
    magicStatus = verifyMagic(magicSq); //should be magic
    if(magicStatus == 1)
    {
        printf("Function works!!!");
    }
    else
    {
        printf("Function not working!!!");

    }

    //part2
//create 2d arraygit
//populate square, no repeats
//populaton is by random
//check if magic square
//keep count of loop
//loop/randomize until it is a magic square
//print square and placement

    magicStatus = 0;
    int count = 0;
    while(magicStatus != 1)
    {


    }


    
    


    
    





    return EXIT_SUCCESS;
}

void printSquare(int a[3][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("[%d]",a[i][j]);
        }
        printf("\n");
    }
}

int verifyMagic(int a[3][3])//function to verify if magic square
{
    int row1, row2, row3, col1, col2, col3, diag1, diag2;
    row1 = a[0][0] + a[0][1] + a[0][2];
    row2 = a[1][0] + a[1][1] + a[1][2];
    row3 = a[2][0] + a[2][1] + a[2][2];

    col1 = a[0][0] + a[1][0] + a[2][0];
    col2 = a[0][1] + a[1][1] + a[2][1];
    col3 = a[0][2] + a[1][2] + a[2][2];

    diag1 = a[0][0] + a[1][1] + a[2][2];
    diag2 = a[2][0] + a[1][1] + a[0][2];

    if(row1 == row2 && row2 == row3 && row3 == col1 && col1 == col2 &&
    col2 == col3 && col3 == diag1 && diag1 == diag2)//every number must be equal
    {
        printf("This is a magic square!!\n"); 
        return 1; //return 1 if magic
    }
    else
    {
        printf("Not a magic square.\n");
        return 0; //return if not magic

    }
}

int[3][3] randomSquare(int a[3][3])
{
    
    int noRepeatArray[3][3]={0,0,0,0,0,0,0,0,0};
    for(int i = 0; i < 3; i++)
    {
        for int l = 0; l < 3; l++)
        {
            noRepeatArray[i] = rnGenerator();
            bool repeat = true;
            while(repeat)
            {
                bool verify = true;
                for(int j = 0; j < 9; j++)
                {
                    if(noRepeatArray[i] == noRepeatArray[j])
                    {
                        verify = false;
                    }
        
                }
                if(verify == true)
                {
                    repeat = false;
                }
        }

        
        
    }

            
    
}

int rnGenerator()
{
    time_t  t;
    srand((unsigned)  time(&t));
    int rng = rand()  %  9 + 1;
    return rng;
}






//part2
//create 2d arraygit
//populate square, no repeats
//populaton is by random
//check if magic square
//keep count of loop
//loop/randomize until it is a magic square
//print square and placement

//return success message