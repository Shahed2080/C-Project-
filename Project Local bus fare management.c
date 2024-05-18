#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    printf("Sir, are you first time in Sughanda Drutojan?\nY\nN\n");
    char x;
    scanf("%c", &x);

    // char det[38], na[50] , ad[50], mb[30];

    if(x == 'Y')
    {
        char det[30], na[49], add[65],mb[78];
        printf("Enter your details : \n");
        gets(det);
        printf("Name: \n");
        gets(na);
        printf("Address: \n");
        gets(add);
        printf("Mobile: \n");
        gets(mb);

        FILE *file;
        file = fopen("newpassenger.txt", "a");


        fprintf(file, "\n\n\n");
        fputs(na, file);
        fprintf(file, "\n");
        fputs(add, file);
        fprintf(file, "\n");
        fputs(mb, file);
        fclose(file);
    }



    printf("Choose your destination >\n");
    printf("Section 1: Sonapur to Pourobazar\n");
     printf("Section 2: Pourobazar to Chowrasta\n");
       printf("Section 3: Chowrasta  to Somir Munshir Hat\n");
       printf("Section 4: Somir Munshir Hat  to Dagonbhuiyan\n");
       printf("Section 5: Daghonbhuiyan  to Mohipal\n\n");
       printf("Enter the section number : ");
       int section;
       scanf("%d", &section);
       switch(section)
       {
       case 1:
           printf("1.Sonapur - Dotter Hat \n");printf("2.Sonapur - White Hall \n");printf("3.Sonapur - Biswanath \n");printf("4.Sonapur - Pouro Bazar \n");printf("5.Dotter Hat - White Hall \n");printf("6.Dotter Hat - Biswanath \n");
           printf("7.Dotter Hat - Pouro Bazar \n");printf("8.White Hall - Biswanath \n");printf("9.White Hall - Pouro Bazar \n");printf("10.Biwanath - Pouro Bazar \n");printf("\nEnter the number as shown : \n");
           int a;
           scanf("%d", &a);
           switch(a)
           {
           case 1:
             printf("Your travel distance is 1.7 km. Pay 5 tk\n");
             break;
           case 2:
            printf("Your travel distance is 3.1 km. Pay 10 tk\n");
            break;
            case 3:
             printf("Your travel distance is 3.85 km. Pay 10 tk\n");
             break;
           case 4:
            printf("Your travel distance is 4.4 km. Pay 10 tk\n");
            break;
            case 5:
             printf("Your travel distance is 1.4 km. Pay 5 tk\n");
             break;
           case 6:
            printf("Your travel distance is 2.15 km. Pay 5 tk\n");
            break;
            case 7:
             printf("Your travel distance is 2.7 km. Pay 10 tk\n");
             break;
           case 8:
            printf("Your travel distance is 0.75 km. Pay 5 tk\n");
            break;
            case 9:
             printf("Your travel distance is 1.3 km. Pay 5 tk\n");
             break;
           case 10:
            printf("Your travel distance is 0.55 km. Pay 5 tk\n");
            break;
           default:
            printf("The distance is not exits.please try again .....\n");
            break;
           }
           break;


           case 2:
            printf("1.Pouro Bazar - Maijdee court \n");printf("2.Pouro Bazar - Maijdee Bazar \n");printf("3.Pouro Bazar - Chowrasta \n");
            printf("4.Maijdee court - Maijdee Bazar \n");printf("5.Maijdee court - Chowrasta \n");printf("6.Maijdee Bazar - Chowrasta \n");

             int b;
           scanf("%d", &b);
           switch(b)
           {
           case 1:
             printf("Your travel distance is 0.64 km. Pay 5 tk\n");
             break;
           case 2:
            printf("Your travel distance is 2.24 km. Pay 5 tk\n");
            break;
            case 3:
             printf("Your travel distance is 8.44 km. Pay 20 tk\n");
             break;
           case 4:
            printf("Your travel distance is 1 km. Pay 5 tk\n");
            break;
            case 5:
             printf("Your travel distance is 7.2 km. Pay 15 tk\n");
             break;
           case 6:
            printf("Your travel distance is 6.2 km. Pay 15 tk\n");
            break;

           default:
            printf("The distance is not exits.please try again .....\n");
            break;
           }
           break;

           case 3:
            printf("1.Chowrasta - Chowmuhuni \n");printf("2.Chowrasta - Miar pol Bazar \n");printf("3.chowrasta - Setubhanga Bazar \n");printf("4.Chowrasta - Dineshgonj Bazar \n");
            printf("5.Chowrasta - Somir Munshir Hat \n");printf("6.Chowmuhuni - Miar pol Bazar \n");printf("7.Chowmuhuni - Setubhanga Bazar \n");printf("8.Chowmuhuni - Dineshgonj Bazar \n");
            printf("9.Chowmuhuni - Somir Munshir Hat \n");printf("10.Miar pol Bazar - Setubhanga Bazar \n");printf("11.Miar pol Bazar - Dineshgonj bazar \n");printf("12.Miar pol bazar - Somir Munshir Hat \n");
            printf("13.Setunbhang Bazar - Dineshgonj Bazar \n");printf("14.Setunbhang bazar - Somir Munshir Hat \n");printf("15.Dineshgong Bazar - Somir Munshir Hat \n");

                   int c;
           scanf("%d", &c);
           switch(c)
           {
           case 1:
             printf("Your travel distance is 1.6 km. Pay 5 tk\n");
             break;
           case 2:
            printf("Your travel distance is 3.6 km. Pay 10 tk\n");
            break;
            case 3:
             printf("Your travel distance is 6.6 km. Pay 15 tk\n");
             break;
           case 4:
            printf("Your travel distance is 7.2 km. Pay 15 tk\n");
            break;
            case 5:
             printf("Your travel distance is 11.3 km. Pay 25 tk\n");
             break;
           case 6:
            printf("Your travel distance is 2 km. Pay 5 tk\n");
            break;
            case 7:
             printf("Your travel distance is 5 km. Pay 10 tk\n");
             break;
           case 8:
            printf("Your travel distance is 5.6 km. Pay 15 tk\n");
            break;
            case 9:
             printf("Your travel distance is 9.7 km. Pay 20 tk\n");
             break;
           case 10:
            printf("Your travel distance is 3 km. Pay 10 tk\n");
            break;
            case 11:
             printf("Your travel distance is 3.6 km. Pay 10 tk\n");
             break;
           case 12:
            printf("Your travel distance is 7.7 km. Pay 20 tk\n");
            break;
            case 13:
             printf("Your travel distance is 0.6 km. Pay 5 tk\n");
             break;
           case 14:
            printf("Your travel distance is 4.7 km. Pay 10 tk\n");
            break;
            case 15:
                printf("Your travel distance is 4.1 km. Pay 10 tk\n");
           default:
            printf("The distance is not exits.please try again .....\n");
            break;
           }
           break;
            case 4:
                printf("1.Somir Munshir Hat - Senbag \n");printf("2.Somir Munshir Hat - Sebarhat \n");printf("3.Somir Munshir Hat - Tulatuli Bazar \n");printf("4.Somir Munshir Hat - Dagonbhuyan \n");
                printf("5.Senbag - Sebarhat \n");printf("6.Senbag - Tulatulir Bazar \n");printf("7.Senbag - Dagonbhuiyan \n");printf("8.Sebarhat - Tulatulir Bazar \n");printf("9.Sebarhat - Dagonbhuiyan \n");
                printf("10.Tulatulir Bazar - Dagonbhuiyan \n");

                     int d;
           scanf("%d", &d);
           switch(d)
           {
           case 1:
             printf("Your travel distance is 1.5 km. Pay 5 tk\n");
             break;
           case 2:
            printf("Your travel distance is 5.7 km. Pay 15 tk\n");
            break;
            case 3:
             printf("Your travel distance is 8.2 km. Pay 20 tk\n");
             break;
           case 4:
            printf("Your travel distance is 10.5 km. Pay 25 tk\n");
            break;
            case 5:
             printf("Your travel distance is 4.2 km. Pay 10 tk\n");
             break;
           case 6:
            printf("Your travel distance is 6.7 km. Pay 15 tk\n");
            break;
            case 7:
             printf("Your travel distance is 9 km. Pay 20 tk\n");
             break;
           case 8:
            printf("Your travel distance is 2.5 km. Pay 5 tk\n");
            break;
            case 9:
             printf("Your travel distance is 4.8 km. Pay 10 tk\n");
             break;
           case 10:
            printf("Your travel distance is 2.3 km. Pay 5 tk\n");
            break;
           default:
            printf("The distance is not exits.please try again .....\n");
            break;
           }
           break;

           case 5:
            printf("1.Daghonbhuiyan - Gonipur Bazar \n");printf("2.Daghonbhuiyan - Beker Bazar\n");printf("3.Daghonbhuiyan -Temuhani \n");printf("4.Daghonbhuiyan - Mohipal. \n");
            printf("5.Gonipur Bazar to Beker Bazar \n");printf("6.Gonipur - Temuhani  \n");printf("7. Gonipur - Mohipal \n");printf("8.Beker Bazar - Temuhani \n");printf("9.Beker Bazar - Mohipal. \n");
            printf("10.Temuhani - Mohipal \n");

            int e;
           scanf("%d", &e);
           switch(e)
           {
           case 1:
             printf("Your travel distance is 2.1 km. Pay 5 tk\n");
             break;
           case 2:
            printf("Your travel distance is 4.2 km. Pay 10 tk\n");
            break;
            case 3:
             printf("Your travel distance is 10.7 km. Pay 25 tk\n");
             break;
           case 4:
            printf("Your travel distance is 13.2 km. Pay 30 tk\n");
            break;
            case 5:
             printf("Your travel distance is 2.1 km. Pay 5 tk\n");
             break;
           case 6:
            printf("Your travel distance is 8.6 km. Pay 20 tk\n");
            break;
            case 7:
             printf("Your travel distance is 11.1 km. Pay 25 tk\n");
             break;
           case 8:
            printf("Your travel distance is 6.5 km. Pay 15 tk\n");
            break;
            case 9:
             printf("Your travel distance is 9 km. Pay 20 tk\n");
             break;
           case 10:
            printf("Your travel distance is 2.5 km. Pay 5 tk\n");
            break;
           default:
            printf("The distance is not exits.please try again .....\n");
            break;
           }
           break;

           default:
            printf("Section does not exist ");
            break;
       }


}
