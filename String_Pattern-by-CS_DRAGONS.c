#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define size 20

//Color_Functions
void red (), yellow(), green(), blue(), purple(), cyan(), reset ();
//login_function
void welcome();
//Horizantal_print
void horizantal(char input[]), vertical(char input[]);   int alphaOne(int, char), OneAlpha(int,char), alphaTwo(char ch), Twoalpha(char);

//main
int main()
{
    system("cls");
    welcome();
    printf("\n\n");
    for (int i=1; i<=30000; i++){    printf("\r\t\t\t\t\t\t\t\t\tPlease wait, while Loading: %d%c ", i/300, 37);    }
    system("cls");
    //Welcome
    red(); printf("\n\t\t\t%c", 201);    for(int i=1 ; i<=26 ; i++)  { printf("%c", 196); } printf("%c", 187);    printf("\n\t\t\t%c  WELCOME TO SD Printers  %c", 179, 179);    printf("\n\t\t\t%c", 200);    for(int i=1 ; i<=26 ; i++)  { printf("%c", 196); } printf("%c", 188);   printf("\n");
    reset();
    yellow(); printf("\n\n%c Input may include numbers. Press '@' for %c print. Limit 13 characters Only %c %c\n\n%c Enter Name: ", 175, 3, 2,174, 16); reset();
    char input[size] ={"\0"};
    scanf(" %[^\n]s" , input);

    int choice;
    printf("\n\n\t\t<--Color Choice-->\n\n");
    red(); printf("   1. Red"); purple(); printf("   2. Purple"); yellow(); printf("   3. Yellow"); green(); printf("   4. Green"); blue(); printf("   5. Blue"); cyan(); printf("   6. Cyan"); reset(); printf("   7. White");  printf("\n\nEnter Color choice(1-7): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1: red();
        break;
    case 2: purple();
        break;
    case 3: yellow();
        break;
    case 4: green();
        break;
    case 5: blue();
        break;
    case 6: cyan();
        break;
    case 7:
        break;
    
    default: printf("\nSorry! Invalid  Choice entered.");
        break;
    }

    printf("\n");
    int inp;
    printf("\n\n\t\t<--Printing Format-->\n\n");
    printf("\n1. Horizantal Print\n2. Vertical Print\nEnter your Choice(1-2):");
    scanf("%d", &inp);
    printf("\n\n");
    switch (inp)
    {
    case 1: horizantal(input);
        break;
    case 2: vertical(input);
        break;
    
    default: red(); printf("\nInvalid Chocie!!!"); reset();
        break;
    }
    
    reset();
    return 0;
}


void welcome()
{

    for (int i=0; i<182; i++){    printf("%c", 220);    }
    for (int i=0; i<2 ; i++){    printf("\n%c",219); printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%c",219);    }
    printf("\n%c\t\t\t\t\t\t",219);
    red(); printf("%c               %c    %c %c %c %c     %c           %c %c %c       %c %c %c      %c           %c    %c %c %c %c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    reset(); printf("\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t",219);
    red(); printf("%c       %c       %c    %c           %c          %c     %c    %c       %c    %c %c       %c %c    %c ",254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    reset(); printf("\t\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t",219);
    red(); printf("%c       %c       %c    %c %c %c %c     %c          %c          %c       %c    %c   %c   %c   %c    %c %c %c %c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    reset(); printf("\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t",219);
    red(); printf("%c       %c       %c    %c           %c          %c     %c    %c       %c    %c    %c %c    %c    %c ",254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    reset(); printf("\t\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t",219);
    red(); printf("  %c  %c     %c  %c      %c %c %c %c     %c %c %c %c     %c %c %c       %c %c %c      %c     %c     %c    %c %c %c %c",254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254,254);
    reset(); printf("\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t\t\t\t\t\t",219);
    green(); printf("     /");
    reset(); printf("\t\t\t\t\t\t\t\t\t\t\t\t%c",219);
    
    printf("\n%c\t\t\t\t\t\t\t\t\t\t\t",219);
    green(); printf("  _ /_     __");
    reset(); printf("\t\t\t\t\t\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t\t\t\t\t\t",219);
    green(); printf("   /      /  %c ",92);
    reset(); printf("\t\t\t\t\t\t\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t\t\t\t\t\t\t\t",219);
    green(); printf("   %c__/   %c__/",92,92);
    reset(); printf("\t\t\t\t\t\t\t\t\t\t\t%c",219);

    for (int i=0; i<2 ; i++){    printf("\n%c",219); printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%c",219);    }

    printf("\n%c\t\t\t\t",219);
    cyan(); printf(" %c %c %c %c    %c %c %c %c        %c %c %c %c     %c %c %c %c     %c %c %c %c    %c       %c    %c %c %c %c %c    %c %c %c %c     %c %c %c %c      %c %c %c %c",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
    reset(); printf("\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t",219);
    cyan(); printf("%c           %c       %c      %c      %c    %c      %c       %c       %c %c     %c        %c        %c           %c      %c    %c",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
    reset(); printf("\t\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t",219);
    cyan(); printf(" %c %c %c %c    %c       %c      %c %c %c %c     %c %c %c %c        %c       %c   %c   %c        %c        %c %c %c %c     %c %c %c %c      %c %c %c %c",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
    reset(); printf("\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t",219);
    cyan(); printf("       %c    %c       %c      %c           %c   %c          %c       %c     %c %c        %c        %c           %c   %c              %c",4,4,4,4,4,4,4,4,4,4,4,4,4,4);
    reset(); printf("\t\t\t\t%c",219);

    printf("\n%c\t\t\t\t",219);
    cyan(); printf("%c %c %c %c     %c %c %c %c        %c           %c     %c     %c %c %c %c    %c       %c        %c        %c %c %c %c     %c     %c     %c %c %c %c ",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
    reset(); printf("\t\t\t\t%c",219);

    for (int i=0; i<2 ; i++){    printf("\n%c",219); printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%c",219);    }

    for (int i=0; i<182; i++){    printf("%c", 223);    }
}

/*<------------------------------------->*/
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
int OneAlpha(int x, char ao)
{   switch (x)
    {   case 1:
    {   switch (ao)
        {
        case 'A':
        case 'a': printf("    a    ");    break;
        case 'B':
        case 'b': printf("b b b b ");    break;
        case 'C':
        case 'c': printf(" c c c  ");    break;
        case 'D':
        case 'd': printf("d d d d  ");    break;
        case 'E':
        case 'e': printf("e e e e  ");    break;
        case 'F':
        case 'f': printf("f f f f ");    break;
        case 'G':
        case 'g': printf(" g g g  ");    break;
        case 'H':
        case 'h': printf("h       h ");    break;
        case 'I':
        case 'i': printf("i i i i ");    break;
        case 'J':
        case 'j': printf("   j j j j ");    break;
        case 'K':
        case 'k': printf("k    k ");    break;
        case 'L':
        case 'l': printf("l       ");    break;
        case 'M':
        case 'm': printf("m           m ");    break;
        case 'N':
        case 'n': printf("n       n ");    break;
        case 'O':
        case 'o': printf("  o o o   ");    break;
        case 'P':
        case 'p': printf("p p p p  ");    break;
        case 'Q':
        case 'q': printf("  q q q      ");    break;
        case 'R':
        case 'r': printf("r r r r  ");    break;
        case 'S':
        case 's': printf(" s s s s ");    break;
        case 'T':
        case 't': printf("t t t t t ");    break;
        case 'U':
        case 'u': printf("u       u ");    break;
        case 'V':
        case 'v': printf("v       v ");    break;
        case 'W':
        case 'w': printf("w               w ");    break;
        case 'X':
        case 'x': printf("x       x ");    break;
        case 'Y':
        case 'y': printf("y       y ");    break;
        case 'Z':
        case 'z': printf("z z z z z ");    break;
        case '1': printf("   1      "); break;
        case '2': printf("2 2 2 2   "); break;
        case '3': printf("3 3 3 3   "); break;
        case '4': printf("4     4   "); break;
        case '5': printf("5 5 5 5   "); break;
        case '6': printf("6 6 6 6   "); break;
        case '7': printf("7 7 7 7   "); break;
        case '8': printf("8 8 8 8   "); break;
        case '9': printf("9 9 9 9   ");break;
        case '0': printf("0 0 0 0   "); break;
        case ' ': printf("   "); break;
        case '-': printf("   ");    break;
        case '@': { printf("  %c %c   %c %c  ", 3,3,3,3); }    break;
        default:        break;
            }    }    break;
    
    case 2:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf("   a a   ");    break;
        case 'B':
        case 'b': printf("b      b");    break;
        case 'C':
        case 'c': printf("c     c ");    break;
        case 'D':
        case 'd': printf("d       d");    break;
        case 'E':
        case 'e': printf("e        ");    break;
        case 'F':
        case 'f': printf("f       ");    break;
        case 'G':
        case 'g': printf("g       ");    break;
        case 'H':
        case 'h': printf("h       h ");    break;
        case 'I':
        case 'i': printf("   i    ");    break;
        case 'J':
        case 'j': printf("      j    ");    break;
        case 'K':
        case 'k': printf("k  k   ");    break;
        case 'L':
        case 'l': printf("l       ");    break;
        case 'M':
        case 'm': printf("m m       m m ");    break;
        case 'N':
        case 'n': printf("n n     n ");    break;
        case 'O':
        case 'o': printf("0       0 ");    break;
        case 'P':
        case 'p': printf("p      p ");    break;
        case 'Q':
        case 'q': printf("q       q    ");    break;
        case 'R':
        case 'r': printf("r      r ");    break;
        case 'S':
        case 's': printf("s        ");    break;
        case 'T':
        case 't': printf("    t     ");    break;
        case 'U':
        case 'u': printf("u       u ");    break;
        case 'V':
        case 'v': printf(" v     v  ");    break;
        case 'W':
        case 'w': printf("w       w       w ");    break;
        case 'X':
        case 'x': printf("  x   x   ");    break;
        case 'Y':
        case 'y': printf(" y     y  ");    break;
        case 'Z':
        case 'z': printf("      z   ");    break;
        case '1': printf(" 1 1      "); break;
        case '2': printf("      2   "); break;
        case '3': printf("      3   "); break;
        case '4': printf("4     4   "); break;
        case '5': printf("5         "); break;
        case '6': printf("6         "); break;
        case '7': printf("     7    "); break;
        case '8': printf("8     8   "); break;
        case '9': printf("9     9   "); break;
        case '0': printf("0     0   "); break;
        case ' ': printf("   ");    break;
        case '-': printf("   ");    break;
        case '@': { printf(" %c %c %c %c %c %c ",3,3,3,3,3,3); }    break;
        default:        break;
            }    }    break;

    case 3:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf("  a   a  ");    break;
        case 'B':
        case 'b': printf("b  b b  ");    break;
        case 'C':
        case 'c': printf("c       ");    break;
        case 'D':
        case 'd': printf("d       d");    break;
        case 'E':
        case 'e': printf("e e e e  ");    break;
        case 'F':
        case 'f': printf("f f f   ");    break;
        case 'G':
        case 'g': printf("g   g g ");    break;
        case 'H':
        case 'h': printf("h h h h h ");    break;
        case 'I':
        case 'i': printf("   i    ");    break;
        case 'J':
        case 'j': printf("      j    ");    break;
        case 'K':
        case 'k': printf("kk     ");    break;
        case 'L':
        case 'l': printf("l       ");    break;
        case 'M':
        case 'm': printf("m   m   m   m ");    break;
        case 'N':
        case 'n': printf("n   n   n ");    break;
        case 'O':
        case 'o': printf("o       o ");    break;
        case 'P':
        case 'p': printf("p p p p  ");    break;
        case 'Q':
        case 'q': printf("q       q    ");    break;
        case 'R':
        case 'r': printf("r r r r  ");    break;
        case 'S':
        case 's': printf(" s s s s ");    break;
        case 'T':
        case 't': printf("    t     ");    break;
        case 'U':
        case 'u': printf("u       u ");    break;
        case 'V':
        case 'v': printf("  v   v   ");    break;
        case 'W':
        case 'w': printf("w       w       w ");    break;
        case 'X':
        case 'x': printf("    x     ");    break;
        case 'Y':
        case 'y': printf("  y y y   ");    break;
        case 'Z':
        case 'z': printf("    z     ");    break;
        case '1': printf("   1      "); break;
        case '2': printf("2 2 2 2   "); break;
        case '3': printf(" 3 3 33   "); break;
        case '4': printf("4 4 4 4   "); break;
        case '5': printf("5 5 5 5   "); break;
        case '6': printf("6 6 6 6   "); break;
        case '7': printf("    7     "); break;
        case '8': printf("8 8 8 8   "); break;
        case '9': printf("9 9 9 9   "); break;
        case '0': printf("0     0   "); break;
        case ' ': printf("   ");    break;
        case '-': printf("***");    break;
        case '@': { printf("  %c %c %c %c %c  ", 3,3,3,3,3); }    break;
        default:        break;
            }    }    break;
        
    case 4:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf(" a a a a ");    break;
        case 'B':
        case 'b': printf("b      b");    break;
        case 'C':
        case 'c': printf("c     c ");    break;
        case 'D':
        case 'd': printf("d       d");    break;
        case 'E':
        case 'e': printf("e        ");    break;
        case 'F':
        case 'f': printf("f       ");    break;
        case 'G':
        case 'g': printf("g     g ");    break;
        case 'H':
        case 'h': printf("h       h ");    break;
        case 'I':
        case 'i': printf("   i    ");    break;
        case 'J':
        case 'j': printf("j     j    ");    break;
        case 'K':
        case 'k': printf("k  k   ");    break;
        case 'L':
        case 'l': printf("l       ");    break;
        case 'M':
        case 'm': printf("m    m m    m ");    break;
        case 'N':
        case 'n': printf("n     n n ");    break;
        case 'O':
        case 'o': printf("o       o ");    break;
        case 'P':
        case 'p': printf("p        ");    break;
        case 'Q':
        case 'q': printf("q     q q q  ");    break;
        case 'R':
        case 'r': printf("r   r    ");    break;
        case 'S':
        case 's': printf("       s ");    break;
        case 'T':
        case 't': printf("    t     ");    break;
        case 'U':
        case 'u': printf("u       u ");    break;
        case 'V':
        case 'v': printf("   v v    ");    break;
        case 'W':
        case 'w': printf("w       w       w ");    break;
        case 'X':
        case 'x': printf("  x   x   ");    break;
        case 'Y':
        case 'y': printf("    y     ");    break;
        case 'Z':
        case 'z': printf(" z        ");    break;
        case '1': printf("   1      "); break;
        case '2': printf("2         "); break;
        case '3': printf("      3   "); break;
        case '4': printf("      4   "); break;
        case '5': printf("      5   "); break;
        case '6': printf("6     6   "); break;
        case '7': printf("   7      "); break;
        case '8': printf("8     8   "); break;
        case '9': printf("      9   "); break;
        case '0': printf("0     0   "); break;
        case ' ': printf("   ");    break;
        case '-': printf("   ");    break;
        case '@': { printf("    %c %c %c    ",3,3,3); }    break;
        default:        break;
            }    }    break;
    
    case 5:
    {    switch (ao)
        {
        case 'A':
        case 'a': printf("a       a");    break;
        case 'B':
        case 'b': printf("b b b b ");   break;
        case 'C':
        case 'c': printf(" c c c  ");    break;
        case 'D':
        case 'd': printf("d d d d  ");    break;
        case 'E':
        case 'e': printf("e e e e  ");    break;
        case 'F':
        case 'f': printf("f       ");    break;
        case 'G':
        case 'g': printf(" g g g  ");    break;
        case 'H':
        case 'h': printf("h       h ");    break;
        case 'I':
        case 'i': printf("i i i i ");    break;
        case 'J':
        case 'j': printf(" j j j     ");    break;
        case 'K':
        case 'k': printf("k    k ");    break;
        case 'L':
        case 'l': printf("l l l l ");    break;
        case 'M':
        case 'm': printf("m     m     m ");    break;
        case 'N':
        case 'n': printf("n       n ");    break;
        case 'O':
        case 'o': printf("  o o o   ");    break;
        case 'P':
        case 'p': printf("p        ");    break;
        case 'Q':
        case 'q': printf("  q q q    q ");    break;
        case 'R':
        case 'r': printf("r     r  ");    break;
        case 'S':
        case 's': printf("s s s s  ");    break;
        case 'T':
        case 't': printf("    t     ");    break;
        case 'U':
        case 'u': printf(" u u u u  ");    break;
        case 'V':
        case 'v': printf("    v     ");    break;
        case 'W':
        case 'w': printf("  w  w     w  w   ");    break;
        case 'X':
        case 'x': printf("x       x ");    break;
        case 'Y':
        case 'y': printf("    y     ");    break;
        case 'Z':
        case 'z': printf("z z z z z ");    break;
        case '1': printf("1 1 1 1   "); break;
        case '2': printf("2 2 2 2   "); break;
        case '3': printf("3 3 3 3   "); break;
        case '4': printf("      4   "); break;
        case '5': printf("5 5 5 5   "); break;
        case '6': printf("6 6 6 6   "); break;
        case '7': printf("  7       "); break;
        case '8': printf("8 8 8 8   "); break;
        case '9': printf("9 9 9 9   "); break;
        case '0': printf("0 0 0 0   "); break;
        case ' ': printf("   ");    break;
        case '-': printf("   ");    break;
        case '@': { printf("      %c      ",3); }    break;
        default:        break;
        }    }    break;
    default:        break;
        }   }
/*<------------------------------------->*/
//Horizantal_print
void horizantal(char input[])
{
    int cho;
    printf("\n\n\t\t<--Font Choice-->\n\n");
    printf("1. Starric ( * )\n2. Alphabatic ( a-z )\nEnter your choice(1-2): ");
    scanf("%d", &cho);
    printf("\n\n");
    switch (cho)
    {
    case 1:
    {
        char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26;
        for (int i=1 ; i <= 5; i++)
        {   alphaOne(i, a1=input[0]);     printf("   ");
            alphaOne(i, a2=input[1]);     printf("   ");
            alphaOne(i, a3=input[2]);     printf("   ");
            alphaOne(i, a4=input[3]);     printf("   ");
            alphaOne(i, a5=input[4]);     printf("   ");
            alphaOne(i, a6=input[5]);     printf("   ");
            alphaOne(i, a7=input[6]);     printf("   ");
            alphaOne(i, a8=input[7]);     printf("   ");
            alphaOne(i, a9=input[8]);     printf("   ");
            alphaOne(i, a10=input[9]);    printf("   ");
            alphaOne(i, a11=input[10]);   printf("   ");
            alphaOne(i, a12=input[11]);   printf("   ");
            alphaOne(i, a13=input[12]);   printf("   ");
            if (input[13]!='\0')
            {    if(i==3){ printf("****"); }     } 
            printf("\n");
        }
        printf("\n\n");
        for (int i=1; i<=5; i++)
        {
            alphaOne(i, a14=input[13]);   printf("   ");
            alphaOne(i, a15=input[14]);   printf("   ");
            alphaOne(i, a16=input[15]);   printf("   ");
            alphaOne(i, a17=input[16]);   printf("   ");
            alphaOne(i, a18=input[17]);   printf("   ");
            alphaOne(i, a19=input[18]);   printf("   ");
            alphaOne(i, a20=input[19]);   printf("   ");
            alphaOne(i, a21=input[20]);   printf("   ");
            alphaOne(i, a22=input[21]);   printf("   ");
            alphaOne(i, a23=input[22]);   printf("   ");
            alphaOne(i, a24=input[23]);   printf("   ");
            alphaOne(i, a25=input[24]);   printf("   ");
            alphaOne(i, a26=input[25]);   printf("   ");
            printf("\n"); 
        }   
    }
        break;
    case 2:
    {
        char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26;
        for (int i=1 ; i <= 5; i++)
        {   OneAlpha(i, a1=input[0]);     printf("   ");
            OneAlpha(i, a2=input[1]);     printf("   ");
            OneAlpha(i, a3=input[2]);     printf("   ");
            OneAlpha(i, a4=input[3]);     printf("   ");
            OneAlpha(i, a5=input[4]);     printf("   ");
            OneAlpha(i, a6=input[5]);     printf("   ");
            OneAlpha(i, a7=input[6]);     printf("   ");
            OneAlpha(i, a8=input[7]);     printf("   ");
            OneAlpha(i, a9=input[8]);     printf("   ");
            OneAlpha(i, a10=input[9]);    printf("   ");
            OneAlpha(i, a11=input[10]);   printf("   ");
            OneAlpha(i, a12=input[11]);   printf("   ");
            OneAlpha(i, a13=input[12]);   printf("   ");
            if(i==3){ printf("****"); }  
            printf("\n");
        }
        printf("\n\n");
        for (int i=1; i<=5; i++)
        {
            OneAlpha(i, a14=input[13]);   printf("   ");
            OneAlpha(i, a15=input[14]);   printf("   ");
            OneAlpha(i, a16=input[15]);   printf("   ");
            OneAlpha(i, a17=input[16]);   printf("   ");
            OneAlpha(i, a18=input[17]);   printf("   ");
            OneAlpha(i, a19=input[18]);   printf("   ");
            OneAlpha(i, a20=input[19]);   printf("   ");
            OneAlpha(i, a21=input[20]);   printf("   ");
            OneAlpha(i, a22=input[21]);   printf("   ");
            OneAlpha(i, a23=input[22]);   printf("   ");
            OneAlpha(i, a24=input[23]);   printf("   ");
            OneAlpha(i, a25=input[24]);   printf("   ");
            OneAlpha(i, a26=input[25]);   printf("   ");
            printf("\n"); 
        }   
    }
        break;
    default: printf("\nInvalid Choice Entered");
        break;
    }
}
/*<------------------------------------->*/
int alphaTwo(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A': printf("    *    \n   * *   \n  *   *  \n * * * * \n*       *");
        break;

    case 'b':
    case 'B': printf("\n* * * * \n*      *\n*  * *  \n*      *\n* * * *  \n");
        break;
    case 'c':
    case 'C': printf("\n  * * *  \n*       *\n*        \n*       *\n  * * *   \n");
        break;
    case 'd':
    case 'D': printf("\n* * * *  \n*       *\n*       *\n*       *\n* * * *  \n");
        break;
    case 'e':
    case 'E': printf("\n* * * *\n*      \n* * * *\n*      \n* * * *\n");
        break;
    case 'f':
    case 'F': printf("\n* * * *\n*      \n* * *  \n*      \n*      \n");
        break;
    case 'g':
    case 'G': printf("\n * * * \n*      \n*   * *\n*     *\n * * * \n");
        break;
    case 'h':
    case 'H': printf("\n*       *\n*       *\n* * * * *\n*       *\n*       *\n");
        break;
    case 'i':
    case 'I': printf("\n* * * *\n   *   \n   *   \n   *   \n* * * *\n");
        break;
    case 'j':
    case 'J': printf("\n  * * * *\n      *  \n      *  \n*     *  \n * * *   \n");
        break;
    case 'k':
    case 'K': printf("\n*     *\n*   *  \n* *    \n*   *  \n*     *\n");
        break;
    case 'l':
    case 'L': printf("\n*      \n*      \n*      \n*      \n* * * *\n");
        break;
    case 'm':
    case 'M': printf("\n*           *\n* *       * *\n*   *   *   *\n*    * *    *\n*     *     *\n");
        break;
    case 'n':
    case 'N': printf("\n*       *\n* *     *\n*   *   *\n*     * *\n*       *\n");
        break;
    case 'o':
    case 'O': printf("\n  * * *  \n*       *\n*       *\n*       *\n  * * *  \n");
        break;
    case 'p':
    case 'P': printf("\n* * * * \n*      *\n* * * * \n*       \n*       \n");
        break;
    case 'q':
    case 'Q': printf("\n  * * *     \n*       *   \n*       *   \n*     * * * \n  * * *    *\n");
        break;
    case 'r':
    case 'R': printf("\n* * * * \n*      *\n* * * * \n*   *   \n*     * \n");
        break;
    case 's':
    case 'S': printf("\n * * * *\n*       \n * * * *\n       *\n* * * * \n");
        break;
    case 't':
    case 'T': printf("\n* * * * *\n    *    \n    *    \n    *    \n    *    \n");
        break;
    case 'u':
    case 'U': printf("\n*       *\n*       *\n*       *\n*       *\n * * * * \n");
        break;
    case 'v':
    case 'V': printf("\n*       *\n *     * \n  *   *  \n   * *   \n    *    \n");
        break;
    case 'w':
    case 'W': printf("\n*               *\n*       *       *\n*       *       *\n*       *       *\n  *  *     *  *  \n");
        break;
    case 'x':
    case 'X': printf("\n*       *\n  *   *  \n    *    \n  *   *  \n*       *\n");
        break;
    case 'y':
    case 'Y': printf("\n*       *\n *     * \n  * * *  \n    *    \n    *    \n");
        break;
    case 'z':
    case 'Z': printf("\n* * * * *\n      *  \n    *    \n *       \n* * * * *\n");
        break;
    

    default:
        break;
    }
    return 0;
}
/*<------------------------------------->*/
int Twoalpha(char ch)
{
    switch (ch)
    {
    case 'a':
    case 'A': printf("\n    a    \n   a a   \n  a   a  \n a a a a \na       a\n");
        break;

    case 'b':
    case 'B': printf("\nb b b b   \nb      b  \nb  b b    \nb      b  \nb b b b  \n");
        break;
    case 'c':
    case 'C': printf("\n  c c c   \nc       c \nc         \nc       c \n  c c c   \n");
        break;
    case 'd':
    case 'D': printf("\nd d d d  \nd       d\nd       d\nd       d\nd d d d  \n");
        break;
    case 'e':
    case 'E': printf("\ne e e e\ne      \ne e e e\ne      \ne e e e\n");
        break;
    case 'f':
    case 'F': printf("\nf f f f\nf      \nf f f  \nf      \nf      \n");
        break;
    case 'g':
    case 'G': printf("\n g g g \ng      \ng   g g\ng     g\n g g g \n");
        break;
    case 'h':
    case 'H': printf("\nh       h\nh       h\nh h h h h\nh       h\nh       h\n");
        break;
    case 'i':
    case 'I': printf("\ni i i i\n   i   \n   i   \n   i   \ni i i i\n");
        break;
    case 'j':
    case 'J': printf("\n  j j j j\n      j  \n      j  \nj     j  \n j j j   \n");
        break;
    case 'k':
    case 'K': printf("\nk     k\nk   k  \nk k    \nk   k  \nk     k\n");
        break;
    case 'l':
    case 'L': printf("\nl      \nl      \nl      \nl      \nl l l l\n");
        break;
    case 'm':
    case 'M': printf("\nm           m\nm m       m m\nm   m   m   m\nm    m m    m\nm     m     m\n");
        break;
    case 'n':
    case 'N': printf("\nn       n\nn n     n\nn   n   n\nn     n n\nn       n\n");
        break;
    case 'o':
    case 'O': printf("\n  o o o  \no       o\no       o\no       o\n  o o o  \n");
        break;
    case 'p':
    case 'P': printf("\np p p p \np      p\np p p p \np       \np       \n");
        break;
    case 'q':
    case 'Q': printf("\n  q q q     \nq       q   \nq       q   \nq     q q q \n  q q q    q\n");
        break;
    case 'r':
    case 'R': printf("\nr r r r \nr      r\nr r r r \nr   r   \nr     r \n");
        break;
    case 's':
    case 'S': printf("\n s s s s\ns       \n s s s s\n       s\ns s s s \n");
        break;
    case 't':
    case 'T': printf("\nt t t t t\n    t    \n    t    \n    t    \n    t    \n");
        break;
    case 'u':
    case 'U': printf("\nu       u\nu       u\nu       u\nu       u\n u u u u \n");
        break;
    case 'v':
    case 'V': printf("\nv       v\n v     v \n  v   v  \n   v v   \n    v    \n");
        break;
    case 'w':
    case 'W': printf("\nw               w\nw       w       w\nw       w       w\nw       w       w\n  w  w     w  w  \n");
        break;
    case 'x':
    case 'X': printf("\nx       x\n  x   x  \n    x    \n  x   x  \nx       x\n");
        break;
    case 'y':
    case 'Y': printf("\ny       y\n y     y \n  y y y  \n    y    \n    y    \n");
        break;
    case 'z':
    case 'Z': printf("\nz z z z z\n      z  \n    z    \n z       \nz z z z z\n");
        break;
    

    default:
        break;
    }
    return 0;
}
/*<------------------------------------->*/
void vertical(char input[])
{
    int cho;
    printf("\n\n\t\t<--Fonts Choice-->\n\n");
    printf("1. Starric ( * )\n2. Alphabatic ( a-z )\nEnter your choice(1-2): ");
    scanf("%d", &cho);
    printf("\n\n");
    switch (cho)
    {
    case 1:
    {
        char a1;
        for (int i=0; input[i]!='\0'; i++)
        {
            a1=input[i];
            alphaTwo(a1);
            printf("\n");
        }
    }
        break;
    case 2: 
    {
        char a1;
        for (int i=0; input[i]!='\0'; i++)
        {
            a1=input[i];
            Twoalpha(a1);
        }
    }
        break;
    default: printf("\nInvalid Choice entered!!!");
        break;
    }

}
/*<------------------------------------->*/
//styling
void red () { printf("\033[1;31m"); }
void yellow() { printf("\033[1;33m"); }
void green() { printf("\033[0;32m"); }
void blue() { printf("\033[0;34m"); }
void purple() { printf("\033[0;35m"); }
void cyan() { printf("\033[0;36m"); }
void reset () { printf("\033[0m"); }
/*<------------------------------------->*/
