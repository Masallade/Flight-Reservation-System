#include<iostream>
#include<fstream>
#include<ctime>
#include<conio.h>
#include<stdio.h>
using namespace std;
fstream record;
fstream Inbusflight;
fstream ecoflight;
fstream co;
fstream eco;
struct node{
node *next;
//booking
string name,email,country,city,classs,time,flights,day,Month, year,flight,flightdes,fclass;
int date;
long long pID,cnic,number,fid;
};
class booking{
private:
node *head,*curr,*air;//(zain)
public:
booking(){
head=NULL;
curr=NULL;
}
  void addbook(){
		ofstream eco("International.txt",ios::out | ios::app);
		ofstream co("Domestic.txt",ios::out | ios::app);
		    
	        node *tmp=new node;
	        
			cout<<"Enter Name : ";
			cin.ignore();
			getline(cin,tmp->name);
			
			n:
			long long nnn;
			cout<<"Enter CNIC : ";
	        while(!(cin>>nnn)){
	        cout<<"    Error "<<endl;
		    cin.clear();
		    cin.ignore(123,'\n'); 
			system("pause");
			system("cls");
			goto n;}  
			tmp->cnic=nnn;
			
	        nn:
			cout<<"Enter Number : ";
			long long nnnn;
	        while(!(cin>>nnnn)){
	        cout<<"    Error "<<endl;
		    cin.clear();
		    cin.ignore(123,'\n'); 
			system("pause");
			system("cls");
			goto nn;}  
			tmp->number=nnnn;
			mail:		
			cout<<"Enter Email : ";
			char s[80];
			cin.ignore();
			cin.getline(s, 80);
            char ss[20]="@gmail.com";
            int l = 0; 
            for(l = 0; ss[l] != '\0'; l++);
            int i, j;
            for(i = 0, j = 0; s[i] != '\0' && ss[j] != '\0'; i++)
            {
            if(s[i] == ss[j])
            {
            j++;
            }
            else
            {
            j = 0;
            }
            }
            if(j == l){
            tmp->email=ss;	
            i - j + 1;	
			}
           
            else{
			
            cout<<"Invalid"<<endl;
            system("pause");
            system("cls");
            goto mail;
	      	}
			wwe:
			cout<<"Enter 1 for International flight or 2 for domestic flight"<<endl;
		    int nn;
	        while(!(cin>>nn)){
	        cout<<"    Error "<<endl;
		    cout<<" Enter only the number "<<endl;
		    cin.clear();
		    cin.ignore(123,'\n'); 
			system("pause");
			system("cls");}  
		        switch(nn){
		        case 1:{
		        tmp->flights="International";	
					break;
				}
				case 2:{
				tmp->flights="Domestic";	
					break;
				}	
		        default:{
		        cout<<"Invalid number"<<endl;
		        system("cls");
				goto wwe;	
				}
				}
				if(tmp->flights=="International"){
		
	    char str;
		ifstream Isbusflight;
	    Isbusflight.open("business_flight_schedual.txt");
		while(Isbusflight){
		Isbusflight.get(str);
		cout<<str;
		
		}	
		cout<<"Enter the flight ID"<<endl;
		     long long qnn;
		     while(!(cin>>qnn)){
	        cout<<"    Error "<<endl;
		    cout<<" Enter only the number "<<endl;
		    cin.clear();
		    cin.ignore(123,'\n'); 
			system("pause");
			             }
			tmp->fid=qnn; 
			awww:
				cout<<"Enter 1 for Econmy Class or 2 for Business"<<endl;	
		        int nnnnn;
	            while(!(cin>>nnnnn)){
	            cout<<"    Error "<<endl;
		        cout<<" Enter only the number "<<endl;
		        cin.clear();
		        cin.ignore(123,'\n');
				system("pause");
				system("cls");
				goto awww;
				} 
		        switch(nnnnn){
		        case 1:{
		        tmp->classs="Business";	
					break;
				}
				case 2:{
				tmp->classs="econmy";	
					break;
				}	
		        default:{
		        cout<<"Invalid number"<<endl;
		        system("cls");
				goto awww;	
				}
		     	}
		       
           
            
            
			time_t now = time(0);
   
            char* dt = ctime(&now);
            tm *gmtm = gmtime(&now);
            dt = asctime(gmtm);
        
            tmp->time=dt;
            
			eco<<"================================================================================================================================================================"<<endl;
           
            eco<<" Name"<<"       "<<"CNIC"<<"          "<<"Phone Num"<<"         "<<"Email"<<"          "<<"Flight"<<"          "<<"flight ID""    "<<"Class"<<"     "<<" Booked time "<<endl;
		    eco<<tmp->name<<"    "<<tmp->cnic<<"       "<<tmp->number<<"        "<<tmp->email<<"     "<<tmp->flights<<"         "<<tmp->fid<<"    "<<tmp->classs<<"   "<<tmp->time<<endl;
		    tmp->next=NULL;
		    tmp->next=NULL;
		    if(head!=NULL){
		curr=head;
		while(curr->next!=NULL){
		curr=curr->next;
		}
		curr->next=air;		
		}
		else{
		head=tmp;
		}		
		cout<<"SAVED"<<endl;
		ecoflight.close();
		system("pause");
		system("cls");
		oppp();}	
		else{
		char str;
		ifstream ecoflight;
		ecoflight.open("Econmy_flight_schedual.txt");
		while(ecoflight){
		ecoflight.get(str);
		cout<<str;	
		}
			cout<<"Enter the flight ID"<<endl;
		     long long qnn;
		     while(!(cin>>qnn)){
	        cout<<"    Error "<<endl;
		    cout<<" Enter only the number "<<endl;
		    cin.clear();
		    cin.ignore(123,'\n'); 
			system("pause");
			             }
			tmp->fid=qnn; 
			aawww:
				cout<<"Enter 1 for Econmy Class or 2 for Business"<<endl;	
		        int nnnnn;
	            while(!(cin>>nnnnn)){
	            cout<<"    Error "<<endl;
		        cout<<" Enter only the number "<<endl;
		        cin.clear();
		        cin.ignore(123,'\n');
				system("pause");
				system("cls");
				goto aawww;
				} 
		        switch(nnnnn){
		        case 1:{
		        tmp->classs="Business";	
					break;
				}
				case 2:{
				tmp->classs="econmy";	
					break;
				}	
		        default:{
		        cout<<"Invalid number"<<endl;
		        system("cls");
				goto aawww;	
				}
		     	}
			time_t now = time(0);
   
            char* dt = ctime(&now);
            tm *gmtm = gmtime(&now);
            dt = asctime(gmtm);
        
            tmp->time=dt;
            
			co<<"================================================================================================================================================================"<<endl;
           
            co<<" Name"<<"       "<<"CNIC"<<"          "<<"Phone Num"<<"         "<<"Email"<<"          "<<"Flight"<<"          "<<"flight ID""    "<<"Class"<<"     "<<" Booked time "<<endl;
		    co<<tmp->name<<"    "<<tmp->cnic<<"       "<<tmp->number<<"        "<<tmp->email<<"      "<<tmp->flights<<"         "<<tmp->fid<<"    "<<tmp->classs<<"   "<<tmp->time<<endl;
		    tmp->next=NULL;
		    if(head!=NULL){
		curr=head;
		while(curr->next!=NULL){
		curr=curr->next;
		}
		curr->next=air;		
		}
		else{
		head=tmp;
		}		
		cout<<"SAVED"<<endl;
		ecoflight.close();
		system("pause");
		system("cls");
		oppp();}
		
		}
			
		
	
		
		void Airplane(){
		node *air=new node;
	    ofstream Inbusflight("business_flight_schedual.txt",ios::app);
		ofstream ecoflight("Econmy_flight_schedual.txt", ios::app);
	    labell:
		cout<<"==========================================="<<endl;
	    cout<<"=================**Flight**==================="<<endl;
		cout<<"flight_ID :";
		int  nq;
	    while(!(cin>>nq)){
	    cout<<"    Error "<<endl;
		cout<<" Enter the number Again"<<endl;
		cin.clear();
		cin.ignore('\n');
		system("pause");
		system("cls");
		system("cls");
		goto labell;}
		cin.ignore();
		air->pID=nq;
		system("cls");
		label:
		cout<<"==========================================="<<endl;
	    cout<<"=================**Day**==================="<<endl;
        string mon="Monday";
		string tues="Tuesday";
		string wed="Wedesday";
		string thu="Thursday";
		string fri="Friday";
		string sat="Saturday";
		string sunn="Sunday";
		cout<<"\n\n 1.For Add Flight at Monday";
	    cout<<"\n\n 2.For Add Flight at Tuesday";
	    cout<<"\n\n 3.For Add Flight at Wednesday";
	    cout<<"\n\n 4.For Add flight at Thursday" ;
	    cout<<"\n\n 5.For Add flight at Friday";
	    cout<<"\n\n 6.For Add flght at Saturday";
	    cout<<"\n\n 7.For Add Flight At Sunday";
	    cout<<"\n\n Enter Your Choice :";
	    string s;
	    int n;
	    while(!(cin>>n)){
	    cout<<"    Error "<<endl;
		cout<<" Enter the number Again"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
		system("pause");
		system("cls");
		goto label;	
		}
		switch(n){
		case 1:
		s=mon;
		air->day=s;
		break;
		case 2:	
		s=tues;
		air->day=s;
		break;
		case 3:
		s=wed;
		air->day=s;
		break;
		case 4:
		s=thu;
		air->day=s;
		break;
		case 5:
		s=fri;
		air->day=s;
		break;
		case 6:
		s=sat;
		air->day=s;
		break;
		case 7:
		s=sunn;
		air->day=s;
		break;
		default:{
		cout<<"Invalid number"<<endl;
		system("pause");
		system("cls");
	    goto label;}
        }
        gg:	
		system("cls");
		cout<<"==========================================="<<endl;
	    cout<<"=================**Date**=================="<<endl;
	     
			time_t now = time(0);
   
        char* dt = ctime(&now);
        tm *gmtm = gmtime(&now);
        dt = asctime(gmtm);
        cout<<"Currect Time : ";
        cout<<dt;
	    cout<<"Enter the date"<<endl;
	    int a;
		while(!(cin>>a)){
		cout<<"Error Invalid"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
		system("pause");
		system("cls");
		}
	  
		if(a>19 && a<29){
	    air->date=a;
		}
		else if(a<20)
		{
		cout<<"This Date has been gone"<<endl;
		system("pause");
		system("cls");
	    goto gg;
		}
		else if(a>28){
		cout<<"Feb Does not contains this date"<<endl;
		system("pause");
		system("cls");
	    goto gg;
		}
	    air->Month="Feb";
		air->year="2022";
		air->time=dt;
		label11 :
		cout<<"1.============International============="<<endl;
		cout<<"                ***Or***"<<endl;
	    cout<<"2.==============Domestic================"<<endl;
		
		
		int w;
		while(!(cin>>w)){
		cout<<"Error Invalid"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
		system("pause");
		system("cls");
		goto label11;
		}
	  
		

		switch(w){
		case 1:{
		air->flight="International";
		break;	
		}
		case 2:{
		air->flight="Domestic";	
		break;
		}
		default :{
		cout<<"You Enter the wroing number please try again "<<endl;
		system("cls");
		system("pause");
		goto label11;
		}	
		}
		if(air->flight=="International"){
	
		label2:
		cout<<"1.Qatar Doha"<<endl;
		cout<<"2.Turkey Istanbol"<<endl;
		cout<<"3.Dubai AbuDabi"<<endl;
		cout<<"4.Australia Sydney"<<endl;
		cout<<"5.England London"<<endl;
		cout<<"6.Dubai sharjah"<<endl;
		cout<<"7.China beijing"<<endl;
		cout<<"8.Sadia Arabia Riyadh"<<endl;
		cout<<"9.Japan Tokyo"<<endl;
		cout<<"10.Turkey Antalya"<<endl;
		cout<<"11.America Washigton D.C "<<endl;
		cout<<"12.Australia Melbourne"<<endl;
		cout<<"13.France Paris"<<endl;
		cout<<"14.Russia Moscow"<<endl;
		cout<<"15.Sadia Arabia Riyadh"<<endl;
		cout<<"16.France Paris"<<endl;
		cout<<"17.Japan Tokyo"<<endl;
		cout<<"18.Qatar Doha"<<endl;
		cout<<"19.Azerbaijan Baku"<<endl;
		cout<<"20.sweden Stockholm"<<endl;
		cout<<"21.Nepal Kathmandu"<<endl;
		int n;
		while(!(cin>>n)){
		cout<<"Please Enter the Valid Number"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
		system("pause");
		system("cls");
		goto label2;
		}
		switch(n){
		case 1:{
		air->flightdes="Qatar Doha";	
		break;
		}
		case 2:{
		air->flightdes="Turkey Istanbol";	
		break;
		}
		case 3:{
		air->flightdes="Dubai AbuDabi";	
		break;
		}
		case 4:{
		air->flightdes="Australia Sydney";	
		break;
		}
		case 5:{
		air->flightdes="England London";	
		break;
		}
		case 6:{
		air->flightdes="Dubai sharjah";	
		break;
		}
		case 7:{
		air->flightdes="China beijing";	
		break;
		}

		case 8:{
		air->flightdes="Sadia Arabia Riyadh";	
		break;
		}
		case 9:{
		air->flightdes="Japan Tokyo";	
		break;
		}
		case 10:{
		air->flightdes="Turkey Antalya";	
		break;
		}
		case 11:{
		air->flightdes="America Washigton D.C";	
		break;
		}
		case 12:{
		air->flightdes="Australia Melbourne";	
		break;
		}
		case 13:{
		air->flightdes="France Paris";	
		break;
		}
		case 14:{
		air->flightdes="Russia Moscow";	
		break;
		}
		case 15:{
		air->flightdes="Sadia Arabia Riyadh";	
		break;
		}
		case 16:{
		air->flightdes="France Paris";	
		break;
		}
		case 17:{
		air->flightdes="Japan Tokyo";	
		break;
		}
		case 18:{
		air->flightdes="Qatar Doha";	
		break;
		}
		case 19:{
		air->flightdes="Azerbaijan Baku";	
		break;
		}
		case 20:{
		air->flightdes="Sweden Stockholm";	
		break;
		}
		case 21:{
		air->flightdes="Nepal Kathmandu";	
		break;
		}
		default :{
		cout<<"You enter the wrong number"<<endl;
		system("pause");
		system("cls");
		goto label2;
		}	
		}
		}
		else{
		dos:
		cout<<"1.Karachi"<<endl;
		cout<<"2.Islamabad"<<endl;
		cout<<"3.Quetta"<<endl;
		cout<<"4.Peshawar"<<endl;
		cout<<"5.Skardu"<<endl;
		cout<<"6.chitral"<<endl;
		air->time=dt;
        air->year="2022";
		int n;
		while(!(cin>>n)){
		cout<<"Please Enter the Valid Number"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
		system("pause");
		system("cls");
		goto dos;
		}
		switch(n){
		case 1:{
		air->flightdes="Karachi";	
		break;
		}
		case 2:{
		air->flightdes="Islamabad";	
		break;
		}
		case 3:{
		air->flightdes="Quetta";	
		break;
		}
		case 4:{
		air->flightdes="Peshawar";	
		break;
		}
		case 5:{
		air->flightdes="Skardu";	
		break;
		}
		case 6:{
		air->flightdes="chitral";	
		break;
		}
		default:{
			cout<<"Invalid Data"<<endl;
			cout<<"Try Again"<<endl;
			system("pause");
	     	system("cls");
			goto dos;
		
		}
		
		}
		
		}
		wwww:
		cout<<"1.===============Business==============="<<endl;
		cout<<"                 ***Or***"<<endl;
	    cout<<"2.===============Econimy================"<<endl;
		int nnnn;
		while(!(cin>>nnnn)){
		cout<<"Error: Invalid input"<<endl;
		cin.clear();
		cin.ignore(123,'\n');
		system("pause");
		system("cls");
		goto wwww;
		}
		switch(nnnn){
		case 1:{
		air->fclass="Business";
			break;
		}
		case 2:{
		air->fclass="Econimy";
			break;
		}
		default:{
		system("cls");
		goto wwww;
		}
		}
		if(air->flight=="International"){
		air->time=dt;
		cout<<air->day<<"    "<<air->date<<"       "<<air->Month<<"       "<<air->year<<"     "<<air->flightdes<<"      "<<air->time<<endl;
		Inbusflight<<"======================================================================================="<<endl;
        Inbusflight<<"                             Flight ID : "<<air->pID<<endl;
        Inbusflight<<" DAY"<<"       "<<"Date"<<"    "<<"Month"<<"       "<<"year"<<"        "<<"Destination"<<"         "<<"Flight is at"<<endl;
		Inbusflight<<air->day<<"    "<<air->date<<"       "<<air->Month<<"       "<<air->year<<"     "<<air->flightdes<<"      "<<air->time<<endl;
		air->next=NULL;
		if(head!=NULL){
		curr=head;
		while(curr->next!=NULL){
		curr=curr->next;
		}
		curr->next=air;		
		}
		else{
		head=air;
		}		
		cout<<"SAVED"<<endl;
		Inbusflight.close();
		system("pause");
		system("cls");
		opp();}	
		

		else{
		ecoflight<<"====================================================================================="<<endl;
        ecoflight<<"                                 Flight : "<<air->pID<<endl;
        ecoflight<<" DAY"<<"       "<<"Date"<<"    "<<"Month"<<"      "<<"year"<<"        "<<"Destination"<<"         "<<"Flight is at"<<endl;
		ecoflight<<air->day<<"    "<<air->date<<"       "<<air->Month<<"       "<<air->year<<"     "<<air->flightdes<<"      "<<air->time<<endl;
		air->next=NULL;
		if(head!=NULL){
		curr=head;
		while(curr->next!=NULL){
		curr=curr->next;
		}
		curr->next=air;		
		}
		else{
		head=air;
		}		
		cout<<"SAVED"<<endl;
		ecoflight.close();
		system("pause");
		system("cls");
		opp();}	
		}
       /* void search(){//zain
     	fstream Inbusflight;
     	Inbusflight.open("business_flight_schedual.txt");
	    int s;
	    cout<<"Enter the name you want to search : ";
	    cin>>s;
	    bool found=false;

	    while(	    Inbusflight>>air->pID>>air->day>>air->date>>air->Month>>air->year>>air->flightdes>>air->time){
		if(s==air->pID){
			cout<<s<<"  Orignal"<<air->pID;
		 found=true;
			}
		
		}
	Inbusflight.close();
	if(found==false){
		cout<<"not found"<<endl;
	}

	}*/


	
		
		
		void admin(){
	
	    system("cls");
	
	    int c=1;
	do{ 
	    cout<<"============******************============"<<endl;
	    cout<<"============******Admin*******============"<<endl;
	    cout<<"============******************============"<<endl;
		string user;
		string password;
		cout<<"Enter Username:";
		cin>>user;
		cout<<"Enter Password:";
		cin>>password;
		if(user=="dawood"&&password=="26496")
		{
			c++;
			
	
		system("cls");
		cout<<"welcome"<<endl;
		opp();
			
		}
		
		else{
			cout<<"Invalid Credentials"<<endl;
			system("cls");
	   	}
		
	}while(c<2);}
	  
    
        void opp(){
        	men:
        	system("cls");
        
     cout<<"==========================================="<<endl;
	 cout<<"===================Menu===================="<<endl;
	 cout<<"==========================================="<<endl;
	 cout<<"\n\n 1.Insert new flight schedual";
	 cout<<"\n\n 2.Delete flight";
	 cout<<"\n\n 3.Search booking";
	 cout<<"\n\n 4.Search flight";
	 cout<<"\n\n 5.Show All flight schedual";
	 cout<<"\n\n 6.Delete flight";
	 cout<<"\n\n 7.Show All flight booking";
	 cout<<"\n\n 8.Exit";
	 cout<<"\n\n Enter Your Choice :";
	    int n;
		while(!(cin>>n)){
		cout<<"Error Invalid"<<endl;
		cin.clear();
		system("pause");
		system("cls");
		cin.ignore(123,'\n');
		goto men;
		}
	
		if(n==1 || n==5 || n==8 || n==7 ||n==4){//(zain)
		
		switch(n){
		case 1:
		system("cls");
	 cout<<"==========================================="<<endl;
	 cout<<"===================Welcome================="<<endl;
	 cout<<"==========To add New Flight Schedual======="<<endl;	
		Airplane();
		break;
		case 4:{
	//	search();
			break;
		}
      
	    case 5:{
	    c5:
	    cout<<"==========================================="<<endl;
	    cout<<"  1.for International And 2.for Domestic   "<<endl;
	    cout<<"==========================================="<<endl;
	    int aa;
	    while(!(cin>>aa)){
	    cout<<"Please Enter the valid number"<<endl;
	    cin.clear();
	    cin.ignore(123,'\n');
	    goto c5;
		}
	    if(aa==1){
		
	    char str;
		ifstream Isbusflight;
	    Isbusflight.open("business_flight_schedual.txt");
		while(Isbusflight){
		Isbusflight.get(str);
		cout<<str;	
		}
		
		int a;
		cout<<"Enter the 1 for retuen to menu"<<endl;
		cout<<"else enter anything to exit "<<endl;
		cin>>a;
		if(a==1){
		opp();
		}
		else{
		exit(0);
		}
     	}
     	else{
		char str;
		ifstream ecoflight;
		ecoflight.open("Econmy_flight_schedual.txt");
		while(ecoflight){
		ecoflight.get(str);
		cout<<str;	
		}
		
		int a;
		cout<<"Enter the 1 for retuen to menu"<<endl;
		cout<<"else enter anything to exit "<<endl;
		cin>>a;
		if(a==1){
		opp();
		}
		else{
		exit(0);
		}	
		
	}
		break;	
	}
	case 7:{
		 cc:
	    cout<<"==========================================="<<endl;
	    cout<<"  1.for International And 2.for Domestic   "<<endl;
	    cout<<"==========================================="<<endl;
	    int aac;
	    while(!(cin>>aac)){
	    cout<<"Please Enter the valid number"<<endl;
	    cin.clear();
	    cin.ignore(123,'\n');
	    goto cc;
		}
		if(aac==1){
		char ster;
		ifstream eco;
		eco.open("International.txt");
		while(eco)
		{
		eco.get(ster);
		cout<<ster;	
		}
	    int i;
		cout<<"Enter the 1 for retuen to menu"<<endl;
		cout<<"else enter anything to exit "<<endl;
		cin>>i;
		if(i==1){
		opp();
		}else{
		exit(0);
		}}	
		
		else{
			
		
	    char str;
		ifstream co;
		co.open("Domestic.txt");
		while(co)
		{
		co.get(str);
		cout<<str;	
		}
	    int i;
		cout<<"Enter the 1 for retuen to menu"<<endl;
		cout<<"else enter anything to exit "<<endl;
		cin>>i;
		if(i==1){
		opp();
		}
		else{
		exit(0);
		}	
	}}
		case 8:
		exit(0);
		}}
		else{
		cout<<"This will not gonna perform"<<endl;
		system("pause");
		system("cls");
		opp();
		}
 	    
		}
		void oppp(){
	    n:
		cout<<"==========================================="<<endl;
	    cout<<"===================Menu===================="<<endl;
	    cout<<"==========================================="<<endl;
	    cout<<"\n\n 1.booked a flight";
	    cout<<"\n\n 2.To go back";
	    cout<<"\n\n 3.Exit";
	    cout<<"\n\n Enter Your Choice :";
	    int n;
        while(!(cin>>n)){
	    cout<<"    Error "<<endl;
		cin.clear();
		cin.ignore(123,'\n'); 
		system("pause");
		system("cls");
		goto n;}  
		if(n==1 || n==2 || n==3){
		
		switch(n){
		case 1:
	 cout<<"==========================================="<<endl;
	 cout<<"===================Welcome================="<<endl;
	 cout<<"=============to Flight booking============="<<endl;	
		addbook();
		break;

		case 3:
		cout<<"Thanks for visit"<<endl;
		exit(0);
		break;
		case 2:
		cout<<"Thanks for visit"<<endl;
		system("pause");
		system("cls");
		version();
		break;	
    }}
	else{
	cout<<"Invalid"<<endl;
	system("pause");
	system("cls");
	oppp();	
	}
	
	
	}
		
		
	

  
		void version(){
        ver:
		cout<<"******************************************"<<endl;
        cout<<"****************version******************"<<endl;
        cout<<"*****************************************"<<endl;
        cout<<"1 for admin              2 for passengers"<<endl;
        cout<<"3 for exit"<<endl;
       int n;
       while(!(cin>>n)){
       	cout<<"Invalid data enter try again"<<endl;
       	cin.clear();
       	cin.ignore(123,'\n');
       	system("pause");
		system("cls");
	    goto ver;    
	   }
	   switch(n){
	   
       case 1:
		{
		system("cls");
        admin();
        break;
        }
       case 2:{
       	system("cls");
        oppp();
		break;	
		}
		case 3:{
        exit(0);
		break;	
		}
		default:{
		cout<<"Invalid command"<<endl;
 	    system("pause");
        system("cls");
        version();
			
		}
        }
        }

};
int main(){
	system("COLOR 8F");
	cout<<"                ************************"<<endl;
	cout<<"          *************************************"<<endl;
	cout<<"      ***********Airport Management System**********"<<endl;
    cout<<"   ******************************************************"<<endl;
    cout<<"*************************************************************"<<endl;
	cout<<endl;
  
	booking bb;
	bb.version();
	
	
	}

