int  _put_string(char *str)
{
        int i;
	i = 0;
        while (str[i] != '\0' && str[i] != '\n')
        {
               _putchar(str[i]);
                i++;
        }

        return (i);
}

char* uint_to_char(unsigned int num) {
    char* result = NULL;
    int i = 0;

    // Determine the number of digits in the input number
    unsigned int temp = num;
    do {
        i++;
    } while (temp /= 10);

    // Allocate memory for the result string
    result = (char*) malloc(i + 1);
    if (!result) {
        return NULL;
    }

    // Convert each digit of the number to a char and add it to the result string
    i = 0;
    do {
        result[i++] = (char) ((num % 10) + '0');
        num /= 10;
    } while (num > 0);

    // Add a null terminator at the end of the string
    result[i] = '\0';

    // Reverse the order of the characters in the string
    int j, k;
    for (j = 0, k = i - 1; j < k; j++, k--) {
        char temp = result[j];
        result[j] = result[k];
        result[k] = temp;
    }

    return result;
}

