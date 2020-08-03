
#include<iostream>
//#include<conio>
#include<stdio.h>
#include<fstream>
//#include<graphics>
#include<string.h>
#include<dos.h>
#include<stdlib.h>

using namespace std;

class customer
{ int csno;
  char cname[20];
  char email[10];
  double phno;
  char loc[10];
  public:
 void getcus();
 void putcus()
{ cout<<"\n\t CUSTOMER NAME:  ";
  cout<<"\t"<<cname;
  cout<<"\n\t PHONE NO:		";
  cout<<"\t"<<phno;
  cout<<"\n\t EMAIL:			   ";
  cout<<"\t"<<email;
  cout<<"\n\t LOCATION:		";
  cout<<"\t"<<loc;
}
 char* retcname()
 { return (cname); }
 int retcsno()
 {return csno;}
 void getcsno(int a)
 { csno=a;}
 void getcname(char a[])
 {strcpy(cname,a);}
 void getphone(double a)
 {phno=a;}
 double retphno()
 {return (phno);}
 void getemail(char a[])
 { strcpy(email,a); }
 char* retemail()
 {return (email);}

};

void customer::getcus()
{
  cout<<"\n\t CUSTOMER NAME:		";
  gets(cname);
  fflush(stdin);
  cout<<"\n\t PHONE NO:			";
  cin>>phno;
  fflush(stdin);
  cout<<"\n\t EMAIL:			   ";
  gets(email);
  fflush(stdin);
  cout<<"\n\t LOCATION:			";
  fflush(stdin);
  gets(loc);
}
//global
int cno;

class car
{
 int carno;
 char model[15];
 char type[10];
 char colour[10];
 int YOP;//year of production
 float mlg;
 float price;
 float hp;
 int  torq;
 customer c;

 public:

void getcus()
{c.getcus();
}
char* retmodel()
{
return model;
}
void putcus()
{c.putcus();
}

int retcarno()
 {
 return carno;
 }
 char* retcartype()
 {
 return type;
 }
 void getyop()
 {
 cout<<"\n\n\t\tYEAR OF PRODUCTION :\t";
  cin>>YOP;
 }
/////////////////////////////////
 void getmlg()
 {
 cout<<"\n\n\t\tMILEAGE :\t";
  cin>>mlg;
 }
/////////////////////////////////
void gethp()
 {
  cout<<"\n\n\t\tHORSE POWER :\t";
  cin>>hp;
 }
//////////////////////////////////
void getprice()
{
  cout<<"\n\n\t\tPRICE :\t";
  cin>>price;
}
///////////////////////////////////
 void getcolour()
{
 cout<<"\n\n\t\tColour :\t";
  gets(colour);
 }
////////////////////////////////////
 void gettorq()
 {
  cout<<"\n\n\tTorque :\t";
  cin>>torq;
 }
///////////////////////////////////
void getmodel()
 {
 cout<<"\n\n\n\tCar Model :\t";
  gets(model);
 }
///////////////////////////////////
 void gettype()
 {
 cout<<"\n\n\t Car Type:\t";
 gets(type);
 }
 void getdata()
 {carno=cno;
  cout<<"\n\n\tCAR MODEL :\t\t";
  cin>>model;
  cout<<"\n\n\tCAR TYPE :\t\t";
  cin>>type ;
  cout<<"\n\n\tCAR COLOR:\t\t";
  cin>>colour;
  cout<<"\n\n\tYEAR OF PRODUCTION :\t";
  cin>>YOP;
  cout<<"\n\n\tMILEAGE:\t\t";
  cin>>mlg;
  cout<<"\n\n\tPRICE:\t\t\t";
  cin>>price;
  cout<<"\n\n\tHORSE POWER:\t\t";
  cin>>hp;
  cout<<"\n\n\tTORQUE:\t\t\t";
  cin>>torq;
 }

  void putdata()
  {  cout<<"\n\t CAR NO:\t\t"<<carno;
	 cout<<"\n\t CAR MODEL:\t\t"<<model;
	 cout<<"\n\t CAR TYPE:\t\t"<<type;
	 cout<<"\n\t CAR COLOR:\t\t"<<colour;
	 cout<<"\n\t YEAR OF PRODUCTION:\t"<<YOP;
	 cout<<"\n\t MILEAGE:\t\t"<<mlg;
	 cout<<"\n\t PRICE:\t\t\t"<<price;
	 cout<<"\n\t HORSE POWER:\t\t"<<hp;
	 cout<<"\n\t TORQUE:\t\t"<<torq;


  }

};
////////////////////////////////////////
///MAIN FUNCN
////////////////////////////////////////
void deletelast();
void saleshist();
void main_menu();
void credits();
void inventory();
void purchase();
void viewstock();
void updatestock();
void addnew();
void background(int,int);
void initialise();
int  dele(car);


///////////////////////////
//////////////////////////
void main()
{clrscr();
 initialise();
 background(245,100);
 main_menu();
 credits();

}

///////////////////////

//FUNCTIONS
//////////////////////////
void credits()
{int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\tc\\bgi\\");
 int xx,yy,color;
 int x=getmaxx();
 int y=getmaxy();
 setcolor(6);
 rectangle(0,0,x,y);
 line(0,y,x,y);
 randomize();
 for(int i=0;i<2000;i++)
{xx=random(x);
 yy=random(y);
 color=
 random(15);
 putpixel(xx,yy,color);
 delay(2);

 }
 for(i=0;i<50;i++)
 {setcolor(i);
  settextstyle(0,0,2);
  outtextxy(50,200,"THANK YOU FOR VISITING OUR SHOWROOM");
  delay(15);
}
//credits 2
 setcolor(6);
 rectangle(0,0,x,y);
 line(0,y,x,y);
 randomize();
 for(i=0;i<2000;i++)
{xx=random(x);
 yy=random(y);
 color=random(15);
 putpixel(xx,yy,color);
 delay(2);
}
 for(i=0;i<50;i++)
 {setcolor(i);



  cleardevice();
 }
/////////////////////////////////////////////
////CIRCLE
/////////////////////////////////////////////

  for(int j=0,k=80,l=450;j<100;j++,k++,l--)
{

  char d[2]={'','\0'},e[2]={'','\0'};




  setcolor(j);
  settextstyle(0,0,5);
  outtextxy(200,200,"AUDI");
  settextstyle(0,0,2);
  outtextxy(100,300,"PROGRAM PRESENTED BY:");
  outtextxy(175,350,"ABHISHEK S. KURUP");
  outtextxy(175,370,"ALFRED W. JACOB");
  outtextxy(175,390,"DEEPAK MATHEW");
  outtextxy(175,410,"EBIN JOHNY");
  outtextxy(175,430,"JISHIL JINARAJ");
  outtextxy(175,450,"P.KRISHNADEV");
  settextstyle(0,0,5);
  outtextxy(400,150,d) ;
  outtextxy(100,150,e) ;
  delay(20);
  putpixel(xx,yy,color);
  rectangle(0,0,x,y);
 line(0,y,x,y);
 circle(k,70,50);
 circle(k+50,70,50);
 circle(l,70,50);
 circle(l-50,70,50);
 delay(10);
 cleardevice();
 }
  for(i=0;i<50;i++)
 {setcolor(i);
  delay(12);
 }




}
///////////////////////////
void main_menu()
{
 char ch='0';

 do
  { clrscr();
	cout<<"\n\n\n\t\t\tMAIN MENU"
	<<"\n\t\t\t"""""""""""""
	<<"\n\n\tPRESS FOR"
	<<"\n\n\t	1  : INVENTORY"
	<<"\n\n\t	2  : PURCHASE"
	<<"\n\n\t	3  : SALES HISTORY"
	<<"\n\n\t	4  : EXIT\n\n\t "
	<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin>>ch;

	switch(ch)
	 {
	  case '1': inventory();
		  break;
	  case '2': purchase();
		  break;
	  case '3': saleshist();
		  break;
	  case '4': clrscr();


	 }

  }while(ch!='4');
 }




///////////////////////////
void saleshist()
{
  int no=1;
  char ch='y';
  clrscr();
  car c;
  ifstream bin;
  bin.open("BILL.DAT",ios::in|ios::binary);
  int i=1;
  bin.seekg(0,ios::end);
  int end=bin.tellg();
  bin.seekg(0,ios::beg);
  int sz=sizeof(c);
  int pos=bin.tellg();
 if(pos!=end)
{
  do{
  clrscr();
   cout<<"\n	**********************************************************"
	   <<"\n	* PRESS:U - TO MOVE UP"
	   <<":D - TO MOVE DOWN"
	   <<":B - BACK TO MENU *"
	   <<"\n	**********************************************************";


   cout<<"\n\t\t\tSALES HISTORY"
   <<"\n\t*************************";
  i=1;
  bin.seekg(pos,ios::beg);
  while(!bin.eof()&&i<=no)
  {
  ++i;
   bin.read((char*)&c,sizeof(c));
   if(!bin.eof())
   {

	c.putdata();
	c.putcus();
	cout<<"\n";
	cout<<"\t*************************";
   }

   }
	cout<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
   cin>>ch;
   if((ch=='U'||ch=='u')&&pos!=0)
   pos-=sz;
   else if((ch=='d'||ch=='D')&&((pos+sz*1)!=end))
   pos+=sz;



}while(ch!='b'&&ch!='B');
}
else
{
clrscr();
cout<<"\n\n\n\n\t\t NO RECORDS EXIST";
getch();
}
bin.close();

}
///////////////////////////


void inventory()
{
  char ch='0';

 do
  { clrscr();
	cout<<"\n\n\n\t\t\tINVENTORY"
	<<"\n\t\t\t"""""""""""""
	<<"\n\n\tPRESS FOR"
	<<"\n\n\t	1  : VIEW STOCK"
	<<"\n\n\t	2  : UPDATE STOCK"
	<<"\n\n\t	3  : BACK TO MAIN MENU"
	<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin>>ch;

	switch(ch)
	 {
	  case '1': viewstock();
		  break;
	  case '2': updatestock();
		  break;
	 }

  }while(ch!='3');



}
/////////////////////////////
void updatestock()
{
  char ch='0';

 do
  { clrscr();
	cout<<"\n\n\n\t\t\tUPDATE STOCK "
	<<"\n\t\t\t"""""""""""""
	<<"\n\n\tPRESS FOR"
	<<"\n\n\t	1  : ADD NEW"
	<<"\n\n\t	2  : DELETE"
	<<"\n\n\t	3  : BACK TO INVENTORY\n\n\t	  "
	<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
	cin>>ch;

	switch(ch)
	 {
	  case '1': addnew();
		  break;
	  case '2': deletelast();
		  break;
	 }
  }while(ch!='3');
}
///////////////////////////////////
void addnew()
{clrscr();
 car c;
 fstream out("SHRWM.DAT",ios::binary|ios::app);
 int no;
 cout<<"\n\n\n\n\tENTER NO OF CARS TO BE ADDED:";
 cin>>no;
 clrscr();
 for(int i=0;i<no;++i)
  {
	clrscr();
	c.getdata();
	out.write((char*)&c,sizeof(c));
	++cno;
  }
  out.close();
  clrscr();
  cout<<"\n\n\n\n\t\t\tADDITION COMPLETE"
	  <<"\n\n\t\t\tPRESS ANY KEY";
  getch();
}
///////////////////////////////////////
void  background(int x,int y)
{
 int gdriver=DETECT,gmode;
 initgraph(&gdriver,&gmode,"c:\\TC\\BGI");
 int cy=y;
 settextstyle(3,0,7);
 int k=0;
 for(int i=0;i<=268;++i)
 {
 if(i<=100)
 {
  outtextxy(x,i,"AUDI");
  cy=i;
 }
 else
 outtextxy(x,cy,"AUDI");
 circle(i,250,50);
 circle(600-i,250,50);
 if(i>50)
 {
 circle(k,250,50) ;
 circle(600-k,250,50);
 ++k;
 }
 delay(20);
 cleardevice();

 }
  closegraph();

 }
 ////////////////////////////////////////
void viewstock()
{

  int no=1;
  char ch='y';
  clrscr();
  car c;
  ifstream bin;
  bin.open("SHRWM.DAT",ios::in|ios::binary);
  int i=1;
  bin.seekg(0,ios::end);
  int end=bin.tellg();
  bin.seekg(0,ios::beg);
  int sz=sizeof(c);
  int pos=bin.tellg();
 if(pos!=end)
{
  do{
  clrscr();
  cout<<"\n	**********************************************************"
	   <<"\n	* PRESS:U - TO MOVE UP"
	   <<":D - TO MOVE DOWN"
	   <<":B - BACK TO MENU *"
	   <<"\n	**********************************************************";

   cout<<"\n\t\t\tCAR DETAILS"
   <<"\n\t*************************";
  i=1;
  bin.seekg(pos,ios::beg);
  while(!bin.eof()&&i<=no)
  {
  ++i;
   bin.read((char*)&c,sizeof(c));
   if(!bin.eof())
   {

	c.putdata();
	cout<<"\n";
	cout<<"\t*************************";
   }

   }
	cout<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
   cin>>ch;

   if((ch=='U'||ch=='u')&&pos!=0)
   pos-=sz;
   else if((ch=='d'||ch=='D')&&((pos+sz*1)!=end))
   pos+=sz;



}while(ch!='b'&&ch!='B');
}
else
{
clrscr();
cout<<"\n\n\n\n   \t\t OUT OF STOCK";
getch();
}
bin.close();
}
//////////////////////////////////



void initialise()
{
int endd;
car c;
fstream in("SHRWM.DAT",ios::in|ios::binary);
in.seekg(0,ios::end);
endd=in.tellg();
in.seekg(0,ios::beg);

if(endd!=in.tellg())
{

while(!in.eof())
in.read((char*)&c,sizeof(c));
cno=c.retcarno();
++cno;
}
}


void purchase()
{ char ch1='Y';
 fstream bin("SHRWM.DAT",ios::in|ios::binary);
  int sedan=0;
  int sports=0;
  int suv=0;
  car c;
  bin.seekg(0,ios::end);
  int end=bin.tellg();
  bin.seekg(0,ios::beg);
  while(end!=bin.tellg())
  {
  bin.read((char*)&c,sizeof(c));
  if(strcmpi(c.retcartype(),"sedan")==0)
  sedan=1;
  else if(strcmpi(c.retcartype(),"suv")==0)
  suv=1;
  else if(strcmpi(c.retcartype(),"sports")==0)
  sports=1;
  }
  int flg=0;
  bin.seekg(0,ios::beg);
  char str[20];
	do{
	clrscr();
	cout<<"\n\n\n\t\t\tPLACE ORDER"
		<<"\n\t\t\t"""""""""""""
		<<"\n\n\tSELECT CAR MODEL"
		<<"\n\n\tPRESS FOR"
		<<"\n\n\t	S  : SEDAN"
		<<"\n\n\t	X  : SUV"
		<<"\n\n\t	T  : SPORT"
		<<"\n\n\t	B  : BACK TO MENU"
		<<"\n\t***********************"
		<<"\n\t***PLACE YOUR ENTRY****"
		<<"\n\t*********: ************"
		<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
	 cin>>ch1;


	 if(ch1=='s'||ch1=='S'||ch1=='x'||ch1=='X'||ch1=='T'||ch1=='t')
	 {

	 if(ch1=='s'||ch1=='S')
	 {
	 strcpy(str,"SEDAN");
	 if(sedan)
	 {
	 flg=1;
	 }
	 }
	 else if(ch1=='x'||ch1=='X')
	 {
	  strcpy(str,"SUV");
	  if(suv)
	 {
	 flg=1;
	 }
	 }
	else if(ch1=='T'||ch1=='t')
	{
	strcpy(str,"SPORTS");
	if(sports)
	 {
	 flg=1;
	}
	}
  int no=1;
  char ch='y';
  clrscr();
  car c;
  int i=1;
  int sz=sizeof(c);
  bin.seekg(0,ios::beg);
  int pos=bin.tellg();
 if(pos!=end&&flg)
{
  do{
  clrscr();
   cout<<"\n\npress:u - to move up"
	   <<":d - to move down"
	   <<":c - to choose car"
	   <<":b - back to menu";


   cout<<"\n\t\t\tCAR DETAILS"
   <<"\n\t*************************";
  i=1;
  bin.seekg(pos,ios::beg);

  while(end!=bin.tellg()&&i<=no)
  {

  ++i;
   bin.read((char*)&c,sizeof(c));
   if(!bin.eof())
   {
   if(!strcmpi(c.retcartype(),str))
   { c.putdata();
	cout<<"\n";
	cout<<"\t*************************";
   }
   }

   }
	cout<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
   cin>>ch;
   getch();
   if((ch=='U'||ch=='u')&&pos!=0)
   pos-=sz;
   else if((ch=='d'||ch=='D')&&((pos+sz*1)!=end))
   pos+=sz;
   else if(ch=='c'||ch=='C')
   {
   clrscr();
   cout<<"\n\n\t\tYOU HAVE CHOSEN "
	   <<"\n\t\t******************";
   c.putdata();
   cout<<"\n\n\t\tENTER CUSTOMER DETAILS"
	   <<"\n\t\t******************";
   c.getcus();
   fstream out("BILL.DAT",ios::app|ios::binary);
   out.write((char*)&c,sizeof(c));
   out.close();
   clrscr();
   cout<<"\n\n\n\n\t\t   PURCHASE COMPLETE";
   getch();
   ch='b';
   }



}while(ch!='b'&&ch!='B');
}
else
{
clrscr();
cout<<"\n\n\t\t OUT OF STOCK";
getch();
}
}
}while(ch1!='b'&&ch1!='B');
bin.close();
}


///////////////////////////
int dele(car ch)
{
car c;
int flag=0;
clrscr();
fstream ou("TEMP.DAT",ios::out|ios::binary);
fstream in("SHRWM.DAT",ios::in|ios::binary);
fstream inn("TEMP.DAT",ios::in|ios::binary);
in.seekg(0,ios::end);
int pos=in.tellg();
in.seekg(ios::beg);
while(pos!=in.tellg())
{
in.read((char*)&c,sizeof(c));
if(strcmpi(c.retmodel(),ch.retmodel())!=0)
{
ou.write((char*)&c,sizeof(c));
}
else
++flag;

}
remove("SHRWM.DAT");
rename("TEMP.DAT","SHRWM.DAT");
inn.close();
in.close();
ou.close();
return flag;


}


///////////////////////////////////////////

void deletelast()
{
  int no=1;
  char ch='y';
  clrscr();
  car c;
  ifstream bin;
  bin.open("SHRWM.DAT",ios::in|ios::binary);
  int i=1;
  bin.seekg(0,ios::end);
  int end=bin.tellg();
  bin.seekg(0,ios::beg);
  int sz=sizeof(c);
  int pos=bin.tellg();
 if(end!=bin.tellg())
{
  do{
  clrscr();
	cout<<"\n	***************************************************************************"
	   <<"\n	* PRESS:U - TO MOVE UP"
	   <<":D - TO MOVE DOWN"
	   <<":C - TO DELETE CAR"
	   <<":B - BACK TO MENU *"
	   <<"	***************************************************************************";



   cout<<"\n\t\t\tCAR DETAILS"
   <<"\n\t*************************";
  i=1;
  bin.seekg(pos,ios::beg);
  while(!bin.eof()&&i<=no)
  {
  ++i;
   bin.read((char*)&c,sizeof(c));
   if(!bin.eof())
   {

	c.putdata();
	cout<<"\n";
	cout<<"\t*************************";
   }

   }
	cout<<"\n\t***********************"
	<<"\n\t***PLACE YOUR ENTRY****"
	<<"\n\t*********: ************"
	<<"\b\b\b\b\b\b\b\b\b\b\b\b\b";
   cin>>ch;
   if((ch=='U'||ch=='u')&&pos!=0)
   pos-=sz;
   else if((ch=='d'||ch=='D')&&((pos+sz*1)!=end))
   pos+=sz;
   else if(ch=='C'||ch=='c')
  {
  if(dele(c))
  {
   clrscr();
  {

   int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "c:\\tc\\bgi\\");
   int midx, midy;
   int s=45 ,e=90 ;
   int radius=50 ;
	midx = getmaxx()/2;
   midy = getmaxy()/2 ;




   for(int i=0;i<=50;s+=20,e+=20,i++)
	{
	  outtextxy(midx-90,midy-20,"A");
	  outtextxy(midx-30,midy-20,"U");
	 outtextxy(midx+30,midy-20,"D");
	 outtextxy(midx+90,midy-20,"I");


	  settextstyle(0,0,2);



	 arc(midx+90, midy-20, s, e, radius);
	  arc(midx+90, midy-20, s, e, radius+1);
	  arc(midx+90, midy-20, s, e, radius+2);


	  arc(midx+90, midy-20, s+120, e+120, radius);
	  arc(midx+90, midy-20, s+120, e+120, radius+1);
	   arc(midx+90, midy-20, s+120, e+120, radius+2);

	  arc(midx+90, midy-20, s+240, e+240, radius);
	   arc(midx+90, midy-20, s+240, e+240, radius+1);
	   arc(midx+90, midy-20, s+240, e+240, radius+2);




	 arc(midx-90, midy-20, s, e, radius);
	  arc(midx-90, midy-20, s, e, radius+1);
	  arc(midx-90, midy-20, s, e, radius+2);

	  arc(midx-90, midy-20, s+120, e+120, radius);
	  arc(midx-90, midy-20, s+120, e+120, radius+1);
	   arc(midx-90, midy-20, s+120, e+120, radius+2);

	  arc(midx-90, midy-20, s+240, e+240, radius);
	   arc(midx-90, midy-20, s+240, e+240, radius+1);
	   arc(midx-90, midy-20, s+240, e+240, radius+2);

	 arc(midx+30, midy-20, s, e, radius);
	  arc(midx+30, midy-20, s, e, radius+1);
	  arc(midx+30, midy-20, s, e, radius+2);

	  arc(midx+30, midy-20, s+120, e+120, radius);
	  arc(midx+30, midy-20, s+120, e+120, radius+1);
	   arc(midx+30, midy-20, s+120, e+120, radius+2);

	  arc(midx+30, midy-20, s+240, e+240, radius);
	   arc(midx+30, midy-20, s+240, e+240, radius+1);
	   arc(midx+30, midy-20, s+240, e+240, radius+2);


	 arc(midx-30, midy-20, s, e, radius);
	  arc(midx-30, midy-20, s, e, radius+1);
	  arc(midx-30, midy-20, s, e, radius+2);

	  arc(midx-30, midy-20, s+120, e+120, radius);
	  arc(midx-30, midy-20, s+120, e+120, radius+1);
	   arc(midx-30, midy-20, s+120, e+120, radius+2);

	  arc(midx-30, midy-20, s+240, e+240, radius);
	   arc(midx-30, midy-20, s+240, e+240, radius+1);
	   arc(midx-30, midy-20, s+240, e+240, radius+2);

	  if(i==50)
	  {
	  cleardevice();


	  outtextxy(220,240,"DELETION  OVER");






	  delay(500);
	  }
	  else
	  {
	  if(i%6==0)
	  outtextxy(220,340,"DELETING....");
	  if(i%6==1)
	  outtextxy(220,340,".DELETING...");
	  if(i%6==2)
	  outtextxy(220,340,"..DELETING..");
	  if(i%6==3)
	  outtextxy(220,340,"...DELETING.");
	  if(i%6==4)
	  outtextxy(220,340,"....DELETING");
	  if(i%6==5)

	  delay(100);

	  delay(150);

	  cleardevice();
	  }
	}


		cout<<"\a";//sound



   closegraph();

}


   break;
  }
  else
  {
  clrscr();
  cout<<"\n\n\n\t\tINVALID ENTRY";
  getch();
  }
  }




}while(ch!='b'&&ch!='B');
}
else
{
clrscr();
cout<<"\n\n\t\t OUT OF STOCK";
getch();
}
bin.close();


}
