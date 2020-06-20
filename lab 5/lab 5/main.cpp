#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
using namespace std;


int getCountWords(string s);

string getCharsinString(string s);
int getRepetitionChar(string s, char c);


int main() {
    int x = 0, i, j, t;
    char str[100], s[100], ch, ch1, ch2;
    while (x != 8) {
        printf("1.split text\n 2.Upper case to lower case\n 3.Lower_case_to_upper_case\n 4.Remove_a_character\n 5.Add_a_character\n 6.Replace_a_character\n 7.Statistics\n 8.Exit\n ");
        printf("Enter an option:\n");
        scanf("%d", &x);


        if (x == 1) {
            getchar();
            printf("Enter your text:\n");
            fgets(str, 100, stdin);
            for (i = 0; str[i] != '\0'; i++) {
                if (str[i] == ' ') {
                    str[i] = '\n';
                }
            }
            printf("%s\n", str);
        }


        if (x == 2) {
            getchar();
            printf("Enter your text:\n");
            fgets(str, 99, stdin);

            for (i = 0; i <= strlen(str); i++) {
                if (str[i] >= 65 && str[i] <= 92) {
                    str[i] = str[i] + 32;
                }
            }
            printf("%s\n", str);

        }

        if (x == 3) {
            getchar();
            printf("Enter your text:\n");
            fgets(str, 99, stdin);

            for (i = 0; i <= strlen(str); i++) {
                if (str[i] >= 97 && str[i] <= 122) {
                    str[i] = str[i] - 32;
                }
            }
            printf("%s\n", str);

        }
        if (x == 4) {
            getchar();
            printf("Enter your text:\n");
            fgets(s, 99, stdin);
            printf("Enter The char to be removed:\n");
            scanf("%c", &ch);

            for (i = 0; s[i] != '\0'; i++) {
                if (s[i] == ch) {
                    for (j = i; s[j] != '\0'; j++)
                        s[j] = s[j + 1];
                    i--;
                }
            }
        }
        if (x == 5) {
            getchar();
            printf("Enter your text:\n");
            fgets(s, 99, stdin);
            printf("Enter The char to add to text:\n");
            scanf("%c", &ch);


            for (i = 0; i < strlen(s); i++) {
                if (s[i] == ' ') {

                    for (j = strlen(s); j >= i; j--)
                        s[j + 1] = s[j];
                    s[i] = ch;
                    i++;
                }
            }
            s[strlen(s) - 1] = ch;
        }
        if (x == 6) {
            int k, p;
            getchar();
            printf("Enter your text:\n");
            fgets(s, 99, stdin);
            printf("Enter The char to be removed:\n");
            scanf("%c", &ch1);
            getchar();
            printf("Enter The char to be reblace:\n");
            scanf("%c", &ch2);


            for (i = 0; i < strlen(s); i++) {
                if (s[i] == ch1) {
                    s[i] = ch2;
                }

            }
            printf("%s", s);
            return 0;
        }

        if (x == 7) {
            int stat[100] = {0},j,Ccout = 0, cout = 0;
            getchar();
            printf("Enter your text:\n");
            fgets(str, 99, stdin);
            for (i = 0; str[i] != strlen(s); i++) {
                if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
                    Ccout++;
                }
            }
            printf("The number of characters in the string are %d\n", Ccout);

            for (i = 0; str[i] != '\0'; i++) {
                if ((str[i] == ' ' && str[i - 1] != ' ') || (str[i - 1] != ' ' && str[i + 1] == '\0'))
                {
                    cout++;
                }
            }
                 printf("The number of words in the string are %d\n", cout);
            for (i = 0; str[i] != '\0'; i++) {
                stat[str[i]]++;
            }
            for (j = 32; j < 128; j++) {
                if (stat[j] != 0) {
                    printf("character %C: stats:%d\n", j, stat[j]);

                }
            }
        }
        return 0;

    }

}