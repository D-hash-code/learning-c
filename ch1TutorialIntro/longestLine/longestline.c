//
// Created by Darshan Hindocha on 21/02/2022.
//

// given some text input, get the longest line
//while (there's another line)
    // if (this line longer than longest line)
        // (save this line as longest line)
        // (save length of this line)
//print longest line


#include <stdio.h>
#define MAXLINE 1000   /* Max input length line */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE) ) > 0)
        if (len > max) {
            max = len;
            copy(longest,line);
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* getline: read a line into s, return length */

int getline(char s[],int lim)
{
    int c, i;

    for (i=0; i < lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
        s[i]=c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}


/* copy: copy from into to, assume it's big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}