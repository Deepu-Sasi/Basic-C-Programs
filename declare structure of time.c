/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */

  #include<stdio.h>
  int main()
  {
      struct Time
      {
          int seconds;
          int minutes;
          int hours;
      };
      struct Time time1={11,25,4};
      struct Time time2={55,21,8};
      printf("%d:%d:%d\n",time1.seconds,time1.minutes,time1.hours);
      printf("%d:%d:%d",time2.seconds,time2.minutes,time2.hours);

  }
