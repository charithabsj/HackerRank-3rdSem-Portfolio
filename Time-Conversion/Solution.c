// Time Conversion - Time: O(1), Space: O(1)
char* timeConversion(char* s) {
    char* result = malloc(20);
    int hour = (s[0] - '0') * 10 + (s[1] - '0');

    if (s[8] == 'P' && hour != 12) hour = hour + 12;
    if (s[8] == 'A' && hour == 12) hour = 0;

    sprintf(result, "%02d%c%c%c%c%c%c", hour, s[2], s[3], s[4], s[5], s[6], s[7]);
    return result;
}
