int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int richest_sum = 0;
    int current_sum = 0;
    int i = 0;
    int j = 0;

    while (i < accountsSize)
    {
        while (j < *accountsColSize)
        {
            current_sum += accounts[i][j];
            if (current_sum > richest_sum)
                richest_sum = current_sum;
            j++;
        }
        current_sum = 0;
        j = 0;
        i++;
    }
    return (richest_sum);
} 
