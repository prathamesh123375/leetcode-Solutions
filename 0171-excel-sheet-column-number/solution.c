int titleToNumber(char* columnTitle) {
    int x = 0, i = 0;
    while (columnTitle[i] != '\0') {
        x = x * 26 + (columnTitle[i] - 'A' + 1);
        i++;
    }
    return x;
}
