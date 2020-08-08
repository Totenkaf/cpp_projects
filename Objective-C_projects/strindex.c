#include <stdio.h>



  #define MAXLINE 1000 /* максимальный размер вводимой строки */

  int getl(char line[], int max); /*шаблон функции */
  int strrindex(char source[], char searchfor[]); /*шаблон функции */

  char pattern[] = "ould"; /* образец для поиска */


  int strindex (char s[], char t[]) // принимает два массива символов, ищет крайнее правое вхождение t в s
  {
      int i, j, k;
      for (i = 0; s[i] != '\0'; i++) {
          for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
          if (k > 0 && t[k] == '\0')
              return i;
      }
      return -1;
  }


 int main()
  {
      char line[MAXLINE];
      int found = 0;
      int rind;

      while (getl(line, MAXLINE) > 0)
          if ((rind = strrindex(line, pattern)) >= 0) {
                  printf ("%d-%s", rind, line);
                  found++;
          }
      return found;
  }

  /* getl: читает строку в s, возвращает длину */
  int getl(char s[], int lim)
  {
      int c, i;
      i = 0;
      while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
          s[i++] = c;
      if (c == '\n')
          s[i++] = c;
      s[i] = '\0';
      return i;
  }

  /* strrindex: вычисляет выдает позицию самого правого вхождения t в s 
   * или выдает -1, если t нет в s                                      */
  int strrindex (char s[], char t[])
  {
      int i, j, k;
      int tmp = -1;

      for (i = 0; s[i] != '\0'; i++) {
          for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
          if (k > 0 && t[k] == '\0' && i > tmp)
              tmp = i;
      }
      return tmp;
  }