char* simple_itoa(int n) {
    char* temp;
    int tmp = n;
    int i = 0;

    while (tmp) {
        i++;
        tmp = tmp / 10;
    }
    temp = malloc(i + 1);
    temp[i] = '\0';
    i--;
    while (i >= 0) {
        temp[i] = n % 10 + '0';
        i--;
        n /= 10;
    }
    return (temp);
}

char** fizzBuzz(int n, int* returnSize) {
    char** ret = malloc(sizeof(char*) * (n + 1));
    char* temp;
    int len;
    int i = 1;

    ret[n] = NULL;
    *returnSize = n;
    while (i <= n) {
        if (i % 3 == 0 && (i % 5 != 0))
            ret[i - 1] = strdup("Fizz");
        else if (i % 5 == 0 && (i % 3 != 0))
            ret[i - 1] = strdup("Buzz");
        else if (i % 5 == 0 && i % 3 == 0)
            ret[i - 1] = strdup("FizzBuzz");
        else {
            temp = simple_itoa(i);
            len = strlen(temp);
            ret[i - 1] = malloc(len + 1);
            ret[i - 1][len] = '\0';
            strcpy(ret[i - 1], temp);
            free(temp);
        }
        i++;
    }
    return (ret);
}
