#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[]="This is A Online;Lab Exam on Array, Strings, and this is problem two.";
    int n=strlen(str);
    int coma=0,dot=0,VOWEL=0,vowel=0,semiclone=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]!=' ')
        {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            VOWEL++;
        }
        else if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }
        else if(str[i]==';')
        {
            semiclone++;
        }
       else if(str[i]==',')
        {
            coma++;
        }
       else if(str[i]=='.')
        {
            dot++;
        }
        }
        

    }
    printf("The frequency of small letter vowel is: %d\n",vowel);
    printf("The frequency of capital vowel is: %d\n",VOWEL);
    printf("The frequency of the comma ','is: %d\n",coma);
    printf("The frequency of the full stop '.'is: %d\n",dot);
    printf("The frequency of the semiclone ';'is: %d\n",semiclone);
    return 0;
}
