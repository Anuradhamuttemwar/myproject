 #include<iostream.h>
 #include<conio.h>
 void add (int x , int y)
 {
 int c;
 c = x+y;
 cout<<"addition="<<c;
 }
 void main ()
 {
 int a,b;
 clrscr();
 cout<<"enter the two values \n";
 cin>>a>>b;
 add (a,b);
 getch();
 }