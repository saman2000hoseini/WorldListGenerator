#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>


char LowerCase[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char UpperCase[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char Numbers[]={'1','2','3','4','5','6','7','8','9','10'};
char Marks[]={'!','@','#','$','%','^','&','*','(',')','_','-','+','=','/','?'};



int main()
{
    char suggestion[30],location[1000];
    int L,U,N,M,place;
    int min,max,sum,total,counter;
    printf("LowerCase UpperCase Numbers Marks\n");
    scanf("%d%d%d%d",&L,&U,&N,&M);
    printf("Min and Max length:\n");
    scanf("%d%d",&min,&max);
    printf("Your suggestion:\n");
    gets(suggestion);
    gets(suggestion);
    if(strlen(suggestion)>=2)
    {
        printf("First End:\n");
        scanf("%d",&place);
    }
    printf("File location:\n");
    gets(location);
    if (L && U && N && !M)
    {
        sum = 62;
    }
    else if (L && U && !N && M)
    {
        sum = 68;
    }
    else if (L && !U && N && M)
    {
        sum = 52;
    }
        else if (!L && U && N && M)
    {
        sum = 52;
    }
        else if (L && U && !N && !M)
    {
        sum = 52;
    }
    else if (L && !U && N && !M)
    {
        sum = 36;
    }
    else if (!L && U && N && !M)
    {
        sum = 36;
    }
    else if (!L && U && !N && M)
    {
        sum = 42;
    }
    else if (L && !U && !N && M)
    {
        sum = 42;
    }
    else if (!L && !U && N && M)
    {
        sum = 26;
    }
    else if (L && !U && !N && !M)
    {
        sum = 26;
    }
    else if (!L && U && !N && !M)
    {
        sum = 26;
    }
    else if (!L && !U && N && !M)
    {
        sum = 10;
    }
    else if (!L && !U && !N && M)
    {
        sum = 16;
    }
    else
    {
        sum = 78;
    }
    char collection[sum];
    if (L && U && N && !M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 52; i++)
        {
            collection[i] = UpperCase[i - 26];
        }
        for (int i = 52; i < 62; i++)
        {
            collection[i] = Numbers[i - 52];
        }
    }
    else if (L && U && !N && M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 52; i++)
        {
            collection[i] = UpperCase[i - 26];
        }
        for (int i = 52; i < 62; i++)
        {
            collection[i] = Marks[i - 52];
        }
    }
    else if (L && !U && N && M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 42; i++)
        {
            collection[i] = Marks[i - 26];
        }
        for (int i = 42; i < 52; i++)
        {
            collection[i] = Numbers[i - 41];
        }
    }
    else if (!L && U && N && M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = UpperCase[i];
        }
        for (int i = 26; i < 42; i++)
        {
            collection[i] = Marks[i - 26];
        }
        for (int i = 42; i < 52; i++)
        {
            collection[i] = Numbers[i - 41];
        }
    }
    else if (L && U && !N && !M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 52; i++)
        {
            collection[i] = UpperCase[i - 26];
        }
    }
    else if (L && !U && N && !M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 36; i++)
        {
            collection[i] = Numbers[i - 26];
        }
    }
    else if (!L && U && N && !M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = UpperCase[i];
        }
        for (int i = 26; i < 36; i++)
        {
            collection[i] = Numbers[i - 26];
        }
    }
    else if (!L && U && !N && M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = UpperCase[i];
        }
        for (int i = 26; i < 42; i++)
        {
            collection[i] = Marks[i - 26];
        }
    }
    else if (L && !U && !N && M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 42; i++)
        {
            collection[i] = Marks[i - 26];
        }
    }
    else if (!L && !U && N && M)
    {
        for (int i = 0; i < 10; i++)
        {
            collection[i] = Numbers[i];
        }
        for (int i = 10; i < 26; i++)
        {
            collection[i] = Marks[i - 10];
        }
    }
    else if (L && !U && !N && !M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
    }
    else if (!L && U && !N && !M)
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = UpperCase[i];
        }
    }
    else if (!L && !U && N && !M)
    {
        for (int i = 0; i < 10; i++)
        {
            collection[i] = Numbers[i];
        }
    }
    else if (!L && !U && !N && M)
    {
        for (int i = 0; i < 16; i++)
        {
            collection[i] = Marks[i];
        }
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            collection[i] = LowerCase[i];
        }
        for (int i = 26; i < 52; i++)
        {
            collection[i] = UpperCase[i - 26];
        }
        for (int i = 52; i < 62; i++)
        {
            collection[i] = Numbers[i - 52];
        }
        for (int i = 62; i < 78; i++)
        {
            collection[i] = Marks[i - 62];
        }
    }
    if (strlen(suggestion)<2)
    {
        total = 0;
        for (int j = min; j <= max; j++)
        {
            int total0 = sum;
            for (int i = 1; i < j; i++)
            {
                total0 = sum * total0;
            }
            total += total0;
        }
        counter = 0;
        FILE *fptr;
        fptr = fopen(location,"w");
        if(fptr == NULL)
        {
            printf("Error!");
        }
        char word[max+min];
        for (int j = min; j <= max; j++)
        {
            int total0 = sum;
            for (int i = 1; i < j; i++)
            {
                total0 = sum * total0;
            }
            int beta[j];
            for (int i = 0; i < j; i++)
            {
                beta[i] = 0;
            }
            for (int i = 0; i < total0; i++)
            {
                for (int k = 0; k < j; k++)
                {
                    if (beta[k] == sum)
                    {
                        beta[k] = 0;
                        beta[k + 1]++;
                    }
                    char temp[max+min+2];
                    temp[0]=collection[beta[k]];temp[1]='\0';
                    strcat(temp,word);
                    strcpy(word,temp);
                }
                fprintf(fptr,"%s\n",word);
                counter++;
                int prs = ((counter * 100) / total) ;
                beta[0]++;
                word[0] = '\0';
            }
        }
        fclose(fptr);
    }
    else
    {
        int m = min - strlen(suggestion);
        int n = max - strlen(suggestion);
        total = 0;
        for (int j = m; j <= n; j++)
        {
            int total0 = sum;
            for (int i = 1; i < j; i++)
            {
                total0 = sum * total0;
            }
                total += total0;
        }
        counter = 0;
        FILE *fptr;
        fptr = fopen(location,"w");
        if(fptr == NULL)
        {
            printf("Error!");
        }
        char word[max+min];
        for (int j = m; j <= n; j++)
        {
            int total0 = sum;
            for (int i = 1; i < j; i++)
            {
                total0 = sum * total0;
            }
            int beta[j];
            for (int i = 0; i < j; i++)
            {
                beta[i] = 0;
            }
            for (int i = 0; i < total0; i++)
            {
                for (int k = 0; k < j; k++)
                {
                    if (beta[k] == sum)
                    {
                        beta[k] = 0;
                        beta[k + 1]++;
                    }
                    char temp[max+min+2];
                    temp[0]=collection[beta[k]];temp[1]='\0';
                    strcat(temp,word);
                    strcpy(word,temp);
                }
                if(!place)
                {
                    char temp[max+min+2];
                    strcpy(temp,suggestion);
                    strcat(temp,word);
                    strcpy(word,temp);
                }
                else
                {
                    strcat(word,suggestion);
                }
                fprintf(fptr,"%s\n",word);
                counter++;
                int prs = ((counter * 100) / total) ;
                beta[0]++;
                word[0] = '\0';
            }
        }
        fclose(fptr);
    }
}
