 #include <stdio.h>

int main()
{
    
	char character;

	printf("Enter a character: ");
	scanf("%c", &character);

	if ((character >= 'A' && character <= 'Z') ||
		(character >= 'a' && character <= 'z'))
	{
		printf("It is a letter.\n");
	}
	else if (character >= '0' && character <= '9')
	{
		printf("It is a number.\n");
	}
	else
	{
		printf("It is a special character.\n");
	}

	return 0;
}
