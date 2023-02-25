#include<stdio.h>
#include<string.h>
void main(){

    char name[100];
    char name2[100];
    char c;
    int count=0;
    int a;
    int vc = 0; // vc= vowel count
    int cc = 0; // cc= constant count
    int nd = 0; // nd=number of digit (in 8 condition)
    int nc = 0; // nc=number of character (in 8 condition)
    int ns = 0;// ns=number of space (in 8 condition)

    printf("1.Reverse string\n2.Concatenation\n3.Palindrom\n4.Copy a string\n5.Lenght of string\n6.Frequency of character in string\n7.Find numbers of vowels and consonants\n8.Finf number of blank\n");
    printf("Enter string : ");
    gets(name);
    printf("Choose any of above : ");
    scanf("%d",&a);

    if(a==1)
    {
        strrev(name);
        printf("Reverse string is : %s",name);
    }
    else if(a==2)
    {
        printf("enter name: ");
        getchar();
        gets(name2);
        strcat(name, name2);
        printf("Concatenation is :%s", name);
    }
    else if(a==3)
    {
        char temp[50];

        strcpy(temp, name);

        strrev(name);

        if (strcmp(name, temp) == 0)
        {
            printf("it is pelondrom");
        }
        else
        {
            printf("it is not pelindrom");
        }
    }
    else if (a==4)
    {
        printf("enter name: ");
        getchar();
        gets(name2);
        strcpy(name2, name);
        printf("name of 2 person is: %s", name);
    }
    else if (a==5)
    {
        printf("%d", strlen(name));
    }
    else if (a==6)
    {
         for (c = 'a'; c <= 'z'; c++)
        {
            count = 0;
            for (int i = 0; name[i] != 0; i++)
            {
                if (c == name[i])
                    count++;
            }
            if (count > 0)
                printf("%c found in %d times\n", c, count);
        }
    }
    else if(a==7)
    {
        for (int i = 0; i < strlen(name); i++)
        {
            if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u' || name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U')

                vc++;

            else

                cc++;
        }

        printf("\n vowel count is: %d", vc);
        printf("\n constant count is: %d", cc);
    }
    else if(a==8)
    {
        for (int i = 0; name[i] != '\0'; i++)
        {
            nc++;
            if (name[i] >= '0' && name[i] <= '9')
                nd++;
            if (name[i] == ' ' || name[i] == '\t')
                ns++;
        }

        printf("number of character is %d", nc);
        printf("\nnumber of blank space is %d", ns);
        printf("\nnumber of digit is %d", nd);
    }
}