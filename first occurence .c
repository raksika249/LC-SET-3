int strStr(char* haystack, char* needle) {
    int len2 = strlen(needle);
    if(len2>strlen(haystack))
    return -1;
    int j = 0;
    for (int k = 0; k < strlen(haystack); k++) {
        if (haystack[k] == needle[0]) {
            j=0;
            for (int i = k; i < strlen(haystack); i++) {
                if (haystack[i] == needle[j])
                    j++;
                else{
                    j = 0;
                    break;
                }
                if (j == len2)
                    return (i + 1) - len2;
            }
        }
    }
    return -1;
}
