#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string.h>
//#include<dos.h>
#include<stdlib.h>

using namespace std;

class customer
{ int csno;
  char cname[20];
  char email[30];
  long long int phno;
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
  fgets(cname,20,stdin);
  fflush(stdin);
  cout<<"\n\t EMAIL:			   ";
  fgets(email,30,stdin);
  fflush(stdin);
  
  cout<<"\n\t LOCATION:			";
  fflush(stdin);
  fgets(loc,10,stdin);
  cout<<"\n\t PHONE NO:			";
  cin>>phno;
  
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
 long long int price;
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
  fgets(colour,10,stdin);
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
  fgets(model,15,stdin);
 }
///////////////////////////////////
 void gettype()
 {
 cout<<"\n\n\t Car Type:\t";
 fgets(type,10,stdin);
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
int main()
{system("cls|clear");;
 initialise();
 background(245,100);
 main_menu();
 credits();
 return 0;

}

///////////////////////

//FUNCTIONS
//////////////////////////
void credits()
{  cout<<"credits";
  
}
///////////////////////////
void main_menu()
{
 char ch='0';
 cout<<"fred";
 do
  { system("cls|clear");
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
	  case '4': system("cls|clear");
	 }
  }while(ch!='4');


 }




///////////////////////////
void saleshist()
{
  int no=1;
  char ch='y';
  system("cls|clear");
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
  system("cls|clear");
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
system("cls|clear");
cout<<"\n\n\n\n\t\t NO RECORDS EXIST";
std::cin.ignore();
}
bin.close();

}
///////////////////////////


void inventory()
{
  char ch='0';

 do
  { system("cls|clear");;
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
  { system("cls|clear");
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
{system("cls|clear");
 car c;
 fstream out("SHRWM.DAT",ios::binary|ios::app);
 int no;
 cout<<"\n\n\n\n\tENTER NO OF CARS TO BE ADDED:";
 cin>>no;
 system("cls|clear");
 for(int i=0;i<no;++i)
  {
	system("cls|clear");
	c.getdata();
	out.write((char*)&c,sizeof(c));
	++cno;
  }
  out.close();
  system("cls|clear");
  cout<<"\n\n\n\n\t\t\tADDITION COMPLETE"
	  <<"\n\n\t\t\tPRESS ANY KEY";
  std::cin.ignore();
}
///////////////////////////////////////
void  background(int x,int y)
{
	cout << "background";
	

 }
 ////////////////////////////////////////
void viewstock()
{

  int no=1;
  char ch='y';
  system("cls|clear");
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
  system("cls|clear");
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
system("cls|clear");
cout<<"\n\n\n\n   \t\t OUT OF STOCK";
std::cin.ignore();
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
  if(strcmp(c.retcartype(),"sedan")==0)
  sedan=1;
  else if(strcmp(c.retcartype(),"suv")==0)
  suv=1;
  else if(strcmp(c.retcartype(),"sports")==0)
  sports=1;
  }
  int flg=0;
  bin.seekg(0,ios::beg);
  char str[20];
	do{
	system("cls|clear");
	cout<<"\n\n\n\t\t\tPLACE ORDER"
		<<"\n\t\t\t"""""""""""""
		<<"\n\n\tSELECT CAR MODEL"
		<<"\n\n\tPRESS FOR"
		<<"\n\n\t	S  : SEDAN"
		<<"\n\n\t	X  : SUV"
		<<"\n\n\t	T  : SPORTS"
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
	 strcpy(str,"sedan");
	 if(sedan)
	 {
	 flg=1;
	 }
	 }
	 else if(ch1=='x'||ch1=='X')
	 {
	  strcpy(str,"suv");
	  if(suv)
	 {
	 flg=1;
	 }
	 }
	else if(ch1=='T'||ch1=='t')
	{
	strcpy(str,"sports");
	if(sports)
	 {
	 flg=1;
	}
	}
  int no=1;
  char ch='y';
  system("cls|clear");
  car c;
  int i=1;
  int sz=sizeof(c);
  bin.seekg(0,ios::beg);
  int pos=bin.tellg();
 if(pos!=end&&flg)
{
  do{
  system("cls|clear");
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
   if(!strcmp(c.retcartype(),str))
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
   std::cin.ignore();
   if((ch=='U'||ch=='u')&&pos!=0)
   pos-=sz;
   else if((ch=='d'||ch=='D')&&((pos+sz*1)!=end))
   pos+=sz;
   else if(ch=='c'||ch=='C')
   {
   system("cls|clear");
   cout<<"\n\n\t\tYOU HAVE CHOSEN "
	   <<"\n\t\t******************";
   c.putdata();
   cout<<"\n\n\t\tENTER CUSTOMER DETAILS"
	   <<"\n\t\t******************";
   c.getcus();
   fstream out("BILL.DAT",ios::app|ios::binary);
   out.write((char*)&c,sizeof(c));
   out.close();
   system("cls|clear");
   cout<<"\n\n\n\n\t\t   PURCHASE COMPLETE";
   std::cin.ignore();
   ch='b';
   }



}while(ch!='b'&&ch!='B');
}
else
{
system("cls|clear");
cout<<"\n\n\t\t OUT OF STOCK";
std::cin.ignore();
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
system("cls|clear");
fstream ou("TEMP.DAT",ios::out|ios::binary);
fstream in("SHRWM.DAT",ios::in|ios::binary);
fstream inn("TEMP.DAT",ios::in|ios::binary);
in.seekg(0,ios::end);
int pos=in.tellg();
in.seekg(ios::beg);
while(pos!=in.tellg())
{
in.read((char*)&c,sizeof(c));
if(strcmp(c.retmodel(),ch.retmodel())!=0)
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
  system("cls|clear");
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
  system("cls|clear");
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
   system("cls|clear");
  {
cout << "deleting please wait";
}

cout << "credits";
   break;
  }
  else
  {
  system("cls|clear");
  cout<<"\n\n\n\t\tINVALID ENTRY";
  std::cin.ignore();
  }
  }




}while(ch!='b'&&ch!='B');
}
else
{
system("cls|clear");
cout<<"\n\n\t\t OUT OF STOCK";
std::cin.ignore();
}
bin.close();


}