#include<stdio.h>
char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13;
// char a14, a15, a16, a17;
int alphaOne(int, char);

/* This is a Copyright code to the Authors.
In case of copy of any part of this code, mention reference of that code's source in yours code.
Otherwise, your code will be legally challenged */

int main()
{   printf("\n\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n%c C%c-DRA%cON%c Production %c\n%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 201,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 187, 186, 21, 20, 21, 186, 200, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205 ,188);
    printf("\n%c Input may include numbers. Press '@' for %c print. Limit 13 characters %c %c\n%c Enter Name: ", 175, 3, 2,174, 16);
    char input[13] ="\0";
    scanf("%[^\n]s" , input);
    printf("\n");

    for (int i=1 ; i <= 5; i++)
    {   alphaOne(i, a1=input[0]);    printf("    ");
        alphaOne(i, a2=input[1]);    printf("    ");
        alphaOne(i, a3=input[2]);    printf("    ");
        alphaOne(i, a4=input[3]);    printf("    ");
        alphaOne(i, a5=input[4]);    printf("    ");
        alphaOne(i, a6=input[5]);    printf("    ");
        alphaOne(i, a7=input[6]);    printf("    ");
        alphaOne(i, a8=input[7]);    printf("    ");
        alphaOne(i, a9=input[8]);    printf("    ");
        alphaOne(i, a10=input[9]);    printf("    ");
        alphaOne(i, a11=input[10]);   printf("    ");
        alphaOne(i, a12=input[11]);   printf("    ");
        alphaOne(i, a13=input[12]);   printf("    ");
        // alphaOne(i, a14=input[13]);   printf("    ");
        // alphaOne(i, a15=input[14]);   printf("    ");
        // alphaOne(i, a16=input[15]);   printf("    ");
        // alphaOne(i, a17=input[16]);   printf("    ");      
        printf("\n");
    }
    printf("\n%c", 218);    for(int i=1 ; i<=69 ; i++)  { printf("%c", 196); } printf("%c", 191);
    printf("\n%c %c Logic & Coding by:  Huzaifa-Bin-Latif(Sleeping Dragon) + Asad_376 %c", 179, 16, 179);
    printf("\n%c %c Code Modifier:      Husna Sarwar                                  %c", 179, 16, 179);
    printf("\n%c %c Motivation:         Khawaja Muhammad Shahzaib (KMS)               %c", 179, 16, 179);
    printf("\n%c            %c Students from UNIVERSITY of PUNJAB, Lahore %c           %c", 179, 175, 174, 179);
    printf("\n%c", 192);    for(int i=1 ; i<=69 ; i++)  { printf("%c", 196); } printf("%c", 217);
    printf("\n\n\n");

    return 0;
}

/*<------------------------------------->*/

/* This is a Copyright code to the Authors.
In case of copy of any part of this code, mention reference of that code's source in yours code.
Otherwise, your code will be legally challenged */

//alphabet_function
int alphaOne(int x, char ao)
{   switch (x)
    {   case 1:
    {   switch (ao)
        {
        case 'A':
        case 'a': printf("    *    ");    break;
        case 'B':
        case 'b': printf("* * * * ");    break;
        case 'C':
        case 'c': printf(" * * *  ");    break;
        case 'D':
        case 'd': printf("* * * *  ");    break;
        case 'E':
        case 'e': printf("* * * *  ");    break;
        case 'F':
        case 'f': printf("* * * * ");    break;
        case 'G':
        case 'g': printf(" * * *  ");    break;
        case 'H':
        case 'h': printf("*       * ");    break;
        case 'I':
        case 'i': printf("* * * * ");    break;
        case 'J':
        case 'j': printf("   * * * * ");    break;
        case 'K':
        case 'k': printf("*    * ");    break;
        case 'L':
        case 'l': printf("*       ");    break;
        case 'M':
        case 'm': printf("*           * ");    break;
        case 'N':
        case 'n': printf("*       * ");    break;
        case 'O':
        case 'o': printf("  * * *   ");    break;
        case 'P':
        case 'p': printf("* * * *  ");    break;
        case 'Q':
        case 'q': printf("  * * *      ");    break;
        case 'R':
        case 'r': printf("* * * *  ");    break;
        case 'S':
        case 's': printf(" * * * * ");    break;
        case 'T':
        case 't': printf("* * * * * ");    break;
        case 'U':
        case 'u': printf("*       * ");    break;
        case 'V':
        case 'v': printf("*       * ");    break;
        case 'W':
        case 'w': printf("*               * ");    break;
        case 'X':
        case 'x': printf("*       * ");    break;
        case 'Y':
        case 'y': printf("*       * ");    break;
        case 'Z':
        case 'z': printf("* * * * * ");    break;
        case '1': printf("   *      "); break;
        case '2': printf("* * * *   "); break;
        case '3': printf("* * * *   "); break;
        case '4': printf("*     *   "); break;
        case '5': printf("* * * *   "); break;
        case '6': printf("* * * *   "); break;
        case '7': printf("* * * *   "); break;
        case '8': printf("* * * *   "); break;
        case '9': printf("* * * *   ");break;
        case '0': printf("* * * *   "); break;
        case '*': printf("     ");    break;
        case '-': printf("   ");    break;
        case '@': { printf("  * *   * *  "); }    break;
        default:        break;
            }    }    break;
    
    case 2:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf("   * *   ");    break;
        case 'B':
        case 'b': printf("*      *");    break;
        case 'C':
        case 'c': printf("*     * ");    break;
        case 'D':
        case 'd': printf("*       *");    break;
        case 'E':
        case 'e': printf("*        ");    break;
        case 'F':
        case 'f': printf("*       ");    break;
        case 'G':
        case 'g': printf("*       ");    break;
        case 'H':
        case 'h': printf("*       * ");    break;
        case 'I':
        case 'i': printf("   *    ");    break;
        case 'J':
        case 'j': printf("      *    ");    break;
        case 'K':
        case 'k': printf("*  *   ");    break;
        case 'L':
        case 'l': printf("*       ");    break;
        case 'M':
        case 'm': printf("* *       * * ");    break;
        case 'N':
        case 'n': printf("* *     * ");    break;
        case 'O':
        case 'o': printf("*       * ");    break;
        case 'P':
        case 'p': printf("*      * ");    break;
        case 'Q':
        case 'q': printf("*       *    ");    break;
        case 'R':
        case 'r': printf("*      * ");    break;
        case 'S':
        case 's': printf("*        ");    break;
        case 'T':
        case 't': printf("    *     ");    break;
        case 'U':
        case 'u': printf("*       * ");    break;
        case 'V':
        case 'v': printf(" *     *  ");    break;
        case 'W':
        case 'w': printf("*       *       * ");    break;
        case 'X':
        case 'x': printf("  *   *   ");    break;
        case 'Y':
        case 'y': printf(" *     *  ");    break;
        case 'Z':
        case 'z': printf("      *   ");    break;
        case '1': printf(" * *      "); break;
        case '2': printf("      *   "); break;
        case '3': printf("      *   "); break;
        case '4': printf("*     *   "); break;
        case '5': printf("*         "); break;
        case '6': printf("*         "); break;
        case '7': printf("     *    "); break;
        case '8': printf("*     *   "); break;
        case '9': printf("*     *   "); break;
        case '0': printf("*     *   "); break;
        case '*': printf("     ");    break;
        case '-': printf("   ");    break;
        case '@': { printf(" * * * * * * "); }    break;
        default:        break;
            }    }    break;

    case 3:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf("  *   *  ");    break;
        case 'B':
        case 'b': printf("*  * *  ");    break;
        case 'C':
        case 'c': printf("*       ");    break;
        case 'D':
        case 'd': printf("*       *");    break;
        case 'E':
        case 'e': printf("* * * *  ");    break;
        case 'F':
        case 'f': printf("* * *   ");    break;
        case 'G':
        case 'g': printf("*   * * ");    break;
        case 'H':
        case 'h': printf("* * * * * ");    break;
        case 'I':
        case 'i': printf("   *    ");    break;
        case 'J':
        case 'j': printf("      *    ");    break;
        case 'K':
        case 'k': printf("**     ");    break;
        case 'L':
        case 'l': printf("*       ");    break;
        case 'M':
        case 'm': printf("*   *   *   * ");    break;
        case 'N':
        case 'n': printf("*   *   * ");    break;
        case 'O':
        case 'o': printf("*       * ");    break;
        case 'P':
        case 'p': printf("* * * *  ");    break;
        case 'Q':
        case 'q': printf("*       *    ");    break;
        case 'R':
        case 'r': printf("* * * *  ");    break;
        case 'S':
        case 's': printf(" * * * * ");    break;
        case 'T':
        case 't': printf("    *     ");    break;
        case 'U':
        case 'u': printf("*       * ");    break;
        case 'V':
        case 'v': printf("  *   *   ");    break;
        case 'W':
        case 'w': printf("*       *       * ");    break;
        case 'X':
        case 'x': printf("    *     ");    break;
        case 'Y':
        case 'y': printf("  * * *   ");    break;
        case 'Z':
        case 'z': printf("    *     ");    break;
        case '1': printf("   *      "); break;
        case '2': printf("* * * *   "); break;
        case '3': printf(" * * **   "); break;
        case '4': printf("* * * *   "); break;
        case '5': printf("* * * *   "); break;
        case '6': printf("* * * *   "); break;
        case '7': printf("    *     "); break;
        case '8': printf("* * * *   "); break;
        case '9': printf("* * * *   "); break;
        case '0': printf("*     *   "); break;
        case '*': printf("     ");    break;
        case '-': printf("***");    break;
        case '@': { printf("  * * * * *  "); }    break;
        default:        break;
            }    }    break;
        
    case 4:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf(" * * * * ");    break;
        case 'B':
        case 'b': printf("*      *");    break;
        case 'C':
        case 'c': printf("*     * ");    break;
        case 'D':
        case 'd': printf("*       *");    break;
        case 'E':
        case 'e': printf("*        ");    break;
        case 'F':
        case 'f': printf("*       ");    break;
        case 'G':
        case 'g': printf("*     * ");    break;
        case 'H':
        case 'h': printf("*       * ");    break;
        case 'I':
        case 'i': printf("   *    ");    break;
        case 'J':
        case 'j': printf("*     *    ");    break;
        case 'K':
        case 'k': printf("*  *   ");    break;
        case 'L':
        case 'l': printf("*       ");    break;
        case 'M':
        case 'm': printf("*    * *    * ");    break;
        case 'N':
        case 'n': printf("*     * * ");    break;
        case 'O':
        case 'o': printf("*       * ");    break;
        case 'P':
        case 'p': printf("*        ");    break;
        case 'Q':
        case 'q': printf("*     * * *  ");    break;
        case 'R':
        case 'r': printf("*   *    ");    break;
        case 'S':
        case 's': printf("       * ");    break;
        case 'T':
        case 't': printf("    *     ");    break;
        case 'U':
        case 'u': printf("*       * ");    break;
        case 'V':
        case 'v': printf("   * *    ");    break;
        case 'W':
        case 'w': printf("*       *       * ");    break;
        case 'X':
        case 'x': printf("  *   *   ");    break;
        case 'Y':
        case 'y': printf("    *     ");    break;
        case 'Z':
        case 'z': printf(" *        ");    break;
        case '1': printf("   *      "); break;
        case '2': printf("*         "); break;
        case '3': printf("      *   "); break;
        case '4': printf("      *   "); break;
        case '5': printf("      *   "); break;
        case '6': printf("*     *   "); break;
        case '7': printf("   *      "); break;
        case '8': printf("*     *   "); break;
        case '9': printf("      *   "); break;
        case '0': printf("*     *   "); break;
        case '*': printf("     ");    break;
        case '-': printf("   ");    break;
        case '@': { printf("    * * *    "); }    break;
        default:        break;
            }    }    break;
    
    case 5:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf("*       *");    break;
        case 'B':
        case 'b': printf("* * * * ");   break;
        case 'C':
        case 'c': printf(" * * *  ");    break;
        case 'D':
        case 'd': printf("* * * *  ");    break;
        case 'E':
        case 'e': printf("* * * *  ");    break;
        case 'F':
        case 'f': printf("*       ");    break;
        case 'G':
        case 'g': printf(" * * *  ");    break;
        case 'H':
        case 'h': printf("*       * ");    break;
        case 'I':
        case 'i': printf("* * * * ");    break;
        case 'J':
        case 'j': printf(" * * *     ");    break;
        case 'K':
        case 'k': printf("*    * ");    break;
        case 'L':
        case 'l': printf("* * * * ");    break;
        case 'M':
        case 'm': printf("*     *     * ");    break;
        case 'N':
        case 'n': printf("*       * ");    break;
        case 'O':
        case 'o': printf("  * * *   ");    break;
        case 'P':
        case 'p': printf("*        ");    break;
        case 'Q':
        case 'q': printf("  * * *    * ");    break;
        case 'R':
        case 'r': printf("*     *  ");    break;
        case 'S':
        case 's': printf("* * * *  ");    break;
        case 'T':
        case 't': printf("    *     ");    break;
        case 'U':
        case 'u': printf(" * * * *  ");    break;
        case 'V':
        case 'v': printf("    *     ");    break;
        case 'W':
        case 'w': printf("  *  *     *  *   ");    break;
        case 'X':
        case 'x': printf("*       * ");    break;
        case 'Y':
        case 'y': printf("    *     ");    break;
        case 'Z':
        case 'z': printf("* * * * * ");    break;
        case '1': printf("* * * *   "); break;
        case '2': printf("* * * *   "); break;
        case '3': printf("* * * *   "); break;
        case '4': printf("      *   "); break;
        case '5': printf("* * * *   "); break;
        case '6': printf("* * * *   "); break;
        case '7': printf("  *       "); break;
        case '8': printf("* * * *   "); break;
        case '9': printf("* * * *   "); break;
        case '0': printf("* * * *   "); break;
        case '*': printf("     ");    break;
        case '-': printf("   ");    break;
        case '@': { printf("      *      "); }    break;
        default:        break;
        }    }    break;
    default:        break;
        }   }
/*<------------------------------------->*/