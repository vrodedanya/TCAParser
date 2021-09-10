#include <stdio.h>

int main()
{
	char fileName[100];
	printf("Enter file name: ");
	scanf("%s", fileName);
	FILE* f = fopen(fileName, "wb");
	if (f == NULL)
	{
		fprintf(stderr, "Failed to open %s file!", fileName);
		return 1;
	}
	printf("Enter size of sequence: ");
	size_t size;
	scanf("%ld", &size);
	printf("Enter sequence of byte (): ");
	for (size_t i = 0 ; i < size ; i++)
	{
		unsigned char buf;
		scanf("%hhx", &buf);
		fputc(buf, f);
	}
	fclose(f);
	return 0;
}
