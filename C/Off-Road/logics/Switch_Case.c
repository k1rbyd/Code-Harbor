#include <stdio.h>
int main()
{
    char city_code;
    printf("Enter the city code:");
    city_code=getchar();
    switch(city_code)
    {
        case 'N':
            printf("New York");
            break;
            case 'W':
                printf("Washington DC");
                break;
                case 'L':
                    printf("London");
                    break;
                    default:
                        printf("Ooops!! This city code is invalid.");
    }
}



#include <stdio.h>
#include <ctype.h>
int main()
{
    char letter;
    printf("Enter the letter:");
    letter=getchar();
    switch(toupper(letter))
    {
        case 'A':
            case 'E':
                case 'I':
                    case 'O':
                        case 'U':
                            printf("Vowel");
                            break;
                            default:
                                printf("Consonants");

    }
}