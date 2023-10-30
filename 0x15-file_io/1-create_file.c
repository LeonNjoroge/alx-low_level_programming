#inlcude "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to be created.
 * @text_content: The text content to be written to the file.
 *
 * Return: If successful, it returns 1. Otherwise, it returns -1.
 */


int create_file(const char *filename, char *text_content)
{
int m, a, b;

if (!filename)
{
return (-1);
}

m = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

if (m == -1)
{
return (-1);
}

if (!text_content)
{
text_content = "";
}

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

close (m);
return (1);

}
