/* Code from Kernighan & Ritchie 2nd ed. p.69 */
/* I was obliged to change the name of the function getline() to
   getlin() because there is now a function getline() in stdio.h,
   and how to mask a library function is NOT the point of this example.
   RMD 2021-02-23    */

#include <stdio.h>
#define MAXLINE 1000  /* maximum input line length */

int getlin(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";   /* pattern to search for */

/* find all lines matching pattern */
int main()
{
    char line[MAXLINE];
    int found = 0;

    while (getlin(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0) {
            printf("%s", line);
            found++;
        }
    return found;
}

/* getlin: get line into s, return length */
int getlin(char s[], int lim)
{
    int c, i;

    i = 0;
    while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
        s[i++] = c;
    if (c == '\n')
        s[i++] = c;
    s[i] = '\0';
    return i;
}

/* strindex: return index of t in s, -1 if none */
int strindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
            ;
        if (k > 0 && t[k] == '\0')
            return i;
    }
    return -1;
}
