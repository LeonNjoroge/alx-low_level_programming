#include "main.h"


/**
 * append_text_to_file - Appends text content to an existing file.
 * @filename: The name of the file to which text_content will be appended.
 * @text_content: The text content to be appended to the file.
 *
 * Return: If successful, it returns 1. Otherwise, it returns -1.
 */


int append_text_to_file(const char *filename, char *text_content)
{
int m, a, b;

if (!filename)
{
return (-1);
}

m = open(filename, O_WRONLY | O_APPEND);

if (m == -1)
{
return (-1);
}

if (text_content)
{
a = 0;
while (text_content[a])
{
a++;
}
b = write(m, text_content, a);

if (b == -1)
{
return (-1);
}

}

close(m);
return (1);

}
