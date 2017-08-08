#include <stdio.h>

  // функция печати строки
  void printString(const char * string)
  {
    printf("%s\n", string);
  }

  // функция печати строки
  void printArrayString(const char ** string)
  {
    printf("%s\n", string[0]);
    printf("%s\n", string[1]);
    printf("%s\n", string[2]);

  }
int main (int argc, char * argv[])
{
  // Вывод аргументов командной строки
  printf("%d\n", argc);
  printf("%s\n", argv[0]);

  //Объявляем массив символов строки в трех разных вариантах
  char hello1[] =  { 'H','e','l','l','o','1','\0'};
  char hello2[] = "Hello2";
  const char * hello3 = "Hello3"; // с помощью указателя, содержиме указателя изменить нельзя, он является константой
  const char * const hello4 = "Hello4"; // нельзя изменить не только содержимое, но и адрес массива

  // Массив указателей на строки
  const char * states[] = { "Moscow", "New-York", "Kiev"};


  // выводим на печать все три массива
  printf("\n%s\n", hello1);
  printf("%s\n", hello2);
  printf("%s\n", hello3);

  /* Заменяем в первом варианте символ под индексом 0, во втором варианте символ под индексом 5, в третьем варианте
  *  изменит ничего нельзя, так как строковый указатель является константой.
  */
  hello1[0] = 'X';
  hello2[5] = '8';

  // снова выводим на печать массив
  printf("\n%s\n", hello1);
  printf("%s\n", hello2);
  printf("%s\n", hello4);

  // Запуск функции печати строки
  printf("\n");
  printString (hello3);

  // Печать массива указателей на строки
  printf("\n");
  printArrayString (states);



  return 0;
}