/*Deepu Sasi
  Roll No : 25
  Branch  : AI&DS */

  #include<stdio.h>
  #include<string.h>
  int main()
  {
      struct Address
      {
          char name[30];
          int house_number;
          char street[30];
          char city[30];
      };
      struct Address address1={"Santhosh",12,"Gandhi nagar","Kuravilangad"};
      struct Address address2={"George",24,"Rajagiri","Kottayam"};
      printf("Address1\n Name:%s\n House Number:%d\n Street:%s\n City:%s\n\n",address1.name,address1.house_number,address1.street,address1.city);
      printf("Address2\n Name:%s\n House Number:%d\n Street:%s\n City:%s\n",address2.name,address2.house_number,address2.street,address2.city);

  }
