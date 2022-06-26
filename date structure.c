/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */

  #include<stdio.h>
  int main()
  {
      struct Date
      {
          int day;
          int month;
          int year;
      };
      struct Date date1={7,12,2021};
      struct Date date2={14,6,2021};
      printf("%d/%d/%d\n",date1.day,date1.month,date1.year);
      printf("%d/%d/%d",date2.day,date2.month,date2.year);

  }
