#include <stdio.h>
#include <decode.h>

int main()
{

char*[] data = NULL;

data = readFile();

data = base64(data);

data = reverse(data);


}