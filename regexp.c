/* Code fragment to give context to "Arrays and pointers: Exercise"
 * 
 * Taken from Brian Kernighan, "A Regular Expression Pattern Matcher",
 * Chapter 1 of "Beautiful Code", Andy Oram & Greg Wilson eds.,
 * O'Reilly, 2007.
 *
 * "The main program is not interesting here; like many Unix tools,
 * it reads either its standard input or a sequence of files, and prints
 * those lines that contain a match of the regular expression."
 */

/* match: search of regexp anywhere in text */
int match(char *regexp, char *text)
{
    if (regexp[0] == '^')
        return matchhere(regexp+1, text);
    do {    /* must look even if string is empty */
        if (matchhere(regexp, text))
            return 1;
    } while (*text++ != '\0');
    return 0;
}

/* matchhere: search for regexp at beginning of text */
int matchhere(char *regexp, char *text)
{
    if (regexp[0] == '\0')
        return 1;
    if (regexp[1] == '*')
        return matchstar(regexp[0], regexp+2, text);
    if (regexp[0] == '$' && regexp[1] == '\0')
        return *text == '\0';
    if (*text!='\0' && (regexp[0]=='.' || regexp[0]==*text))
        return matchhere(regexp+1, text+1);
    return 0;
}

/* matchstar: search fo c*regexp at beginning of text */
int matchstar(int c, char *regexp, char *text)
{
    do {
        if (matchhere(regexp, text))
            return 1;
    } while (*text != '\0' && (*text++ == c || c == '.'));
    return 0;
}
