#include <iostream> 
using namespace std;            
int main()
{
	cout<<"GYM MANAGEMENT SYSTEM"<<endl;
	cout<<"Presented by:-"<<endl;
	cout<<"\t\t o)_ Maham Haseeb (153)\n\t\t o)_ Ali Abdulghaffar (135) \n\t\t o)_ Amir RazzaQ (140) \n\t\t o)_ Syeda Ghazal Zahra (462) \n\t\t o)_ Muhammad HASEEB (523)"<<endl;
	cout<<"Presented to:-"<<endl;
	cout<<"\t\t o)_ MISS Farwa Javed"<<endl;
	line3: 
	cout<<"***** Welcome to our GYM *****"<<endl;
	cout<<" ____________________________________________________ "<<endl;
	cout<<"|        Select an option from following menu        |"<<endl;
	cout<<"|____________________________________________________|"<<endl;
	cout<<"| 1)_ |     Admission portal for clients             |"<<endl;
	cout<<"|_____|______________________________________________|"<<endl;
	cout<<"| 2)_ |     Admission portal for staff               |"<<endl;
	cout<<"|_____|______________________________________________|"<<endl;
	cout<<"| 3)_ |     Attendance for clients                   |"<<endl;
	cout<<"|_____|______________________________________________|"<<endl;
	cout<<"| 4)_ |     Attendance for staff                     |"<<endl;
	cout<<"|_____|______________________________________________|"<<endl;  
int choice;
	cout<<"enter your choice"<<endl;
	cin>>choice;
char name1[20];
char name2[20];
int date;
int time;
string month;
int year;	
char number[11];
char address[25];
int choice1;
switch(choice)
{
	case 1: //client admission
		{   
		    line4:	//line #61
			cout<<"enter your first name : "<<endl;
			cin>>name1;
			cout<<"enter your last name : "<<endl;
			cin>>name2;
			cout<<"enter date"<<endl;
			cin>>date;
			cout<<"enter month"<<endl;
			cin>>month;
			cout<<"enter year"<<endl;
			cin>>year;
			cout<<"enter time"<<endl;
			cin>>time;
			cout<<"enter your contact number"<<endl;
			cin>>number;
			cout<<"enter your address"<<endl;
			cin>>address;
			cout<<"if you want to continue press 1 otherwise, 0? "<<endl;
			cin>>choice1;
			if(choice1==1)
			{
                 goto line4;//line#40
			
			}
			else if(choice1==0)
			{
			    goto line1; // line#176
			}
		    
			break;
		}
	case 2:	//trainer admission
     	{
     		line5:
     		cout<<"enter your first name : "<<endl;
     		cin>>name1;
     		cout<<"enter your second name : "<<endl;
     		cin>>name2;
     		cout<<"enter date"<<endl;
     		cin>>date;
     		cout<<"enter month"<<endl;
     		cin>>month;
     		cout<<"enter year"<<endl;
     		cin>>year;
     		cout<<"enter time"<<endl;
     		cin>>time;
     		cout<<"enter your contact number"<<endl;
     		cin>>number;
     		cout<<"enter your address"<<endl;
     		cin>>address;
     		cout<<"if you want to continue press 1 otherwise,0? "<<endl;
     		cin>>choice1;
     		if(choice1==1)
			{
			goto line5;
			}
			else if(choice1==0)
			{
			    goto line2;
			}
     		break;
	    }
    case 3: //clients attendance
	    {
	    	line7:
	    	int passcode;
	    	cout<<"please enter your passcode : "<<endl;
	    	cin>>passcode;
	    	if(passcode==2021)
	    	{
	    		cout<<"\t*****welcome Back!*****\n"<<endl;
	    		goto line6;
			}
			else
			{
				cout<<"sorry you entered an incorrect passcode"<<endl;
				goto line7;
			}
			line6:
	    	cout<<"enter your first name : "<<endl;
	    	cin>>name1;
	    	cout<<"enter your second name : "<<endl;
     		cin>>name2;
	    	cout<<"enter attendance date :"<<endl;
	    	cin>>date;
	    	cout<<"enter month :"<<endl;
	    	cin>>month;
	    	cout<<"enter year :"<<endl;
	    	cin>>year;
	    	cout<<"enter attendance time :"<<endl;
	    	cin>>time;
	    	cout<<"successfully marked "<< name1 <<"'s attendance of "<< date <<"-"<< month <<"-"<< year <<" at "<< time <<endl;
	    	cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
	    	goto line3;
	    	break;
		}   
	case 4: //trainers attendance
       	{
       		line8:
	    	int passcode;
	    	cout<<"please enter your passcode : "<<endl;
	    	cin>>passcode;
	    	if(passcode==2021)
	    	{
	    		cout<<"\t******welcome Back!*****\n"<<endl;
	    		goto line9;
			}
			else
			{
				cout<<"sorry you entered an incorrect passcode"<<endl;
				goto line8;
			}
			line9:
	     	cout<<"enter your first name : "<<endl;
	 	    cin>>name1;
	 	    cout<<"enter your second name : "<<endl;
     		cin>>name2;
	    	cout<<"enter attendance date :"<<endl;
		    cin>>date;
	    	cout<<"enter month :"<<endl;
	    	cin>>month;
	    	cout<<"enter year :"<<endl;
	    	cin>>year;
	    	cout<<"enter attendance time :"<<endl;
	    	cin>>time;
	    	cout<<"successfully marked "<< name1 <<"'s attendance of "<< date <<"-"<< month <<"-"<< year <<" at "<< time <<endl;
	    	cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
	    	goto line3; 
	    	break;
	   }	
}

line1://first label // line#60
{
	int choice2;
	             cout<<"We offer following courses "<<endl;
                 cout<<" _________________________________________________ "<<endl;
                 cout<<"|sr no.|            Courses Offerred              |"<<endl;
                 cout<<"|______|__________________________________________|"<<endl;
                 cout<<"| 1)_  |                CrossFits                 |"<<endl;
                 cout<<"|______|__________________________________________|"<<endl;
                 cout<<"| 2)_  |                Fat Lose                  |"<<endl;
                 cout<<"|______|__________________________________________|"<<endl;
                 cout<<"| 3)_  |                Athletics                 |"<<endl;
                 cout<<"|______|__________________________________________|"<<endl;
                 cout<<"| 4)_  |             Weight Lifting               |"<<endl;
                 cout<<"|______|__________________________________________|"<<endl;
                 cout<<"| 5)_  |          Self Defence Training           |"<<endl;
                 cout<<"|______|__________________________________________|"<<endl;
                 cout<<"enter your choice"<<endl;
cin>>choice2;

switch (choice2)
{
	case 1://crossfits
		{
			int select;
			int fees1=3000;
			int fees2=5000;
			int fees3=9000;
			int duration1=2;
			int duration2=5;
			int duration3=8;
			cout<<"you have selected Cross Fits"<<endl;
			cout<<" _________________________________________________________ "<<endl;
			cout<<"|sr no.|            Duration           |      fees        |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 1)_  |            2 months           |      3000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 2)_  |            5 months           |      5000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 3)_  |            8 months           |      9000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"select your desired course : "<<endl;
			cin>>select;
			if(select==1)
			{
			    cout<<"you have selected " <<duration1<<" months course worth "<<fees1<<"/-\n"<<endl;	
			}
			else if(select==2)
			{
				cout<<"you have selected " <<duration2<<" months course worth "<<fees2<<"/-\n"<<endl;
			}
			else
			{
			   cout<<"you have selected  " <<duration3<<" months course worth "<<fees3<<"/-\n"<<endl;	
			}
			int weight;
			float height;
			float height1;
			int choose;
			cout<<"we have following instructors for this course in our gym"<<endl;
			cout<<" ___________________________________________________ "<<endl;
			cout<<"|sr no.|             Instructor Name                |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 1)_  |                   Ali                      |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 2)_  |                   HASEEB                   |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 3)_  |           Maham (for girls only)           |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"enter your height in ft"<<endl;
			cin>>height;
			cout<<"enter your weight in kg's'"<<endl;
			cin>>weight;
			cout<<"enter your height in cm's'"<<endl;
			cin>>height1;
			cout<<"press 1 if u r a boy otherwise, press 0"<<endl;
			cin>>choose;
			if(choose==1)
			{
				cout<<"You will be taught by:-\n\t\t o)_ MR.ALI \n\t\t\t&\n\t\t o)_ MR.HASEEB"<<endl;
			}
			else if(choose==0)
			{
				cout<<"You will be taught by :-\n\t\t o)_ Miss Maham "<<endl;
			}
			cout<<"\t\t\tYou have succesfully registered in our GYM\n"<<endl;
            cout<<"\t\t\tThis is your admission form\n"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<"                    Name => "<<name1<<" "<<name2<<endl;
            cout<<"            Joining date => "<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"         Time you joined => "<<time<<endl;
            cout<<"          Contact Number => "<<number<<endl;
            cout<<"                 Address => "<<address<<endl;	
            cout<<"         Selected course => "<<select<<endl; 
            cout<<"                  Height => "<<height<<"ft"<<endl;
            cout<<"          Height in cm's => "<<height1<<"cm's"<<endl;
            cout<<"                  Weight => "<<weight<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
            goto line3;
			break;
		}
	case 2://fat lose
    	{
		    int fees1=3500;
			int fees2=7200;
			int fees3=10000;
			int duration1=2;
			int duration2=4;
			int duration3=6;
			int select2;
				cout<<"you have selected Fat Lose"<<endl;
			cout<<" _________________________________________________________ "<<endl;
			cout<<"|sr no.|            Duration           |      fees        |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 1)_  |            2 months           |      3500/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 2)_  |            4 months           |      7200/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 3)_  |            6 months           |      10000/-     |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"select your desired course : "<<endl;
			cin>>select2;
			if(select2==1)
			{
				 cout<<"you have selected " <<duration1<<" months course worth "<<fees1<<"/-\n"<<endl;
			}
			else if(select2==2)
			{
				 cout<<"you have selected " <<duration2<<" months course worth "<<fees2<<"/-\n"<<endl;
			}
			else
			{
				 cout<<"you have selected " <<duration3<<" months course worth "<<fees3<<"/-\n"<<endl;
			}
			int weight;
			float height;
			float height1;
			cout<<"we have following instructors for this course in our gym"<<endl;
			cout<<" ___________________________________________________ "<<endl;
			cout<<"|sr no.|             Instructor Name                |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 1)_  |                   Ali                      |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 2)_  |                   Amir                     |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 3)_  |           Sayeda (for girls only)          |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"enter your height in ft"<<endl;
			cin>>height;
			cout<<"enter your weight in kg's'"<<endl;
			cin>>weight;
			cout<<"enter your height in cm's'"<<endl;
			cin>>height1;
			cout<<"press 1 if u r a boy otherwise, press 0"<<endl;
			int choose;
			cin>>choose;
			if(choose==1)
			{
				cout<<"You will be taught by:-\n\t\t o)_ MR.ALI \n\t\t\t&\n\t\t o)_ MR.AMIR"<<endl;
			}
			else
			{
				cout<<"You will be taught by :-\n\t\t o)_ Miss SAYEDA "<<endl;
			}
			cout<<"\t\t\tYou have succesfully registered in our GYM\n"<<endl;
            cout<<"\t\t\tThis is your admission form\n"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<"                    Name => "<<name1<<" "<<name2<<endl;
            cout<<"            Joining date => "<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"         Time you joined => "<<time<<endl;
            cout<<"          Contact Number => "<<number<<endl;
            cout<<"                 Address => "<<address<<endl;	
            cout<<"         Selected course => "<<select2<<endl; 
            cout<<"                  Height => "<<height<<" ft"<<endl;
            cout<<"          Height in cm's => "<<height1<<" cm's'"<<endl;
            cout<<"                  Weight => "<<weight<<" kg"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
            goto line3;
			break;
	    }
	case 3://athletics
	    {
    		int select3;
			int fees1=4000;
			int fees2=6000;
			int fees3=10000;
			int duration1=2;
			int duration2=4;
			int duration3=6;
			cout<<"you have selected Athletics"<<endl;
			cout<<" _________________________________________________________ "<<endl;
			cout<<"|sr no.|            Duration           |      fees        |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 1)_  |            2 months           |      2000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 2)_  |            4 months           |      6000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 3)_  |            6 months           |     10000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"select your desired course : "<<endl;
			cin>>select3;
			if(select3==1)
			{
			    cout<<"you have selected " <<duration1<<" months course worth "<<fees1<<"/-\n"<<endl;	
			}
			else if(select3==2)
			{
				cout<<"you have selected " <<duration2<<" months course worth "<<fees2<<"/-\n"<<endl;
			}
			else
			{
			   cout<<"you have selected  " <<duration3<<" months course worth "<<fees3<<"/-\n"<<endl;	
			}
			int weight;
			float height;
			float height1;
			cout<<"we have following instructors for this course in our gym"<<endl;
			cout<<" ___________________________________________________ "<<endl;
			cout<<"|sr no.|             Instructor Name                |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 1)_  |                   Ali                      |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 2)_  |                   Amir                     |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 3)_  |           Sayeda (for girls only)          |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"enter your height in ft"<<endl;
			cin>>height;
			cout<<"enter your weight in kg's'"<<endl;
			cin>>weight;
			cout<<"enter your height in cm's'"<<endl;
			cin>>height1;
			cout<<"press 1 if u r a boy otherwise, press 0"<<endl;
			int choose;
			cin>>choose;
			if(choose==1)
			{
				cout<<"You will be taught by:-\n\t\t o)_ MR.ALI \n\t\t\t&\n\t\t o)_ MR.AMIR"<<endl;
			}
			else
			{
				cout<<"You will be taught by :-\n\t\t o)_ Miss SAYEDA "<<endl;
			}
			cout<<"\t\t\tYou have succesfully registered in our GYM\n"<<endl;
            cout<<"\t\t\tThis is your admission form\n"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<"                    Name => "<<name1<<" "<<name2<<endl;
            cout<<"            Joining date => "<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"         Time you joined => "<<time<<endl;
            cout<<"          Contact Number => "<<number<<endl;
            cout<<"                 Address => "<<address<<endl;	
            cout<<"         Selected course => "<<select3<<endl; 
            cout<<"                  Height => "<<height<<" ft"<<endl;
            cout<<"          Height in cm's => "<<height1<< " cm's'"<<endl;
            cout<<"                  Weight => "<<weight<<" kg"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
            goto line3;
			break;
    	}		
    case 4://weight lifting
	    {
	    	int select4;
			int fees1=4000;
			int fees2=6000;
			int fees3=10000;
			int duration1=2;
			int duration2=4;
			int duration3=6;
			cout<<"you have selected Weight Lifting"<<endl;
			cout<<" _________________________________________________________ "<<endl;
			cout<<"|sr no.|            Duration           |      fees        |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 1)_  |            3 months           |      2000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 2)_  |            4 months           |      6000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 3)_  |            6 months           |     10000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"select your desired course : "<<endl;
			cin>>select4;
			if(select4==1)
			{
			    cout<<"you have selected " <<duration1<<" months course worth "<<fees1<<"/-\n"<<endl;	
			}
			else if(select4==2)
			{
				cout<<"you have selected " <<duration2<<" months course worth "<<fees2<<"/-\n"<<endl;
			}
			else
			{
			   cout<<"you have selected  " <<duration3<<" months course worth "<<fees3<<"/-\n"<<endl;	
			}
			int weight;
			float height;
			float height1;
			cout<<"we have following instructors for this course in our gym"<<endl;
			cout<<" ___________________________________________________ "<<endl;
			cout<<"|sr no.|             Instructor Name                |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 1)_  |                   Ali                      |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 2)_  |                   Amir                     |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 3)_  |           Maham (for girls only)           |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"enter your height in ft"<<endl;
			cin>>height;
			cout<<"enter your weight in cm's'"<<endl;
			cin>>weight;
			cout<<"enter your height"<<endl;
			cin>>height1;
			cout<<"press 1 if u r a boy otherwise, press 0"<<endl;
			int choose;
			cin>>choose;
			if(choose==1)
			{
				cout<<"You will be taught by:-\n\t\t o)_ MR.ALI \n\t\t\t&\n\t\t o)_ MR.AMIR"<<endl;
			}
			else
			{
				cout<<"You will be taught by :-\n\t\t o)_ Miss Maham "<<endl;
			}
			cout<<"\t\t\tYou have succesfully registered in our GYM\n"<<endl;
            cout<<"\t\t\tThis is your admission form\n"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<"                   Name => "<<name1<<" "<<name2<<endl;
            cout<<"           Joining date => "<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"        Time you joined => "<<time<<endl;
            cout<<"         Contact Number => "<<number<<endl;
            cout<<"                Address => "<<address<<endl;	
            cout<<"        Selected course => "<<select4<<endl; 
            cout<<"                 Height => "<<height<<" ft"<<endl;
            cout<<"         Height in cm's => "<<height1<<" cm's'"<<endl;
            cout<<"                 Weight => "<<weight<<" kg's'"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
            goto line3;
			break;
		}
	case 5://self defence training
	{
	    	int select5;
			int fees1=3000;
			int fees2=5000;
			int fees3=9000;
			int duration1=2;
			int duration2=5;
			int duration3=8;
			cout<<"you have selected Self Defence Training"<<endl;
			cout<<" _________________________________________________________ "<<endl;
			cout<<"|sr no.|            Duration           |      fees        |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 1)_  |            2 months           |      3000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 2)_  |            5 months           |      5000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"| 3)_  |            8 months           |      9000/-      |"<<endl;
			cout<<"|______|_______________________________|__________________|"<<endl;
			cout<<"select your desired course : "<<endl;
			cin>>select5;
			if(select5==1)
			{
			    cout<<"you have selected " <<duration1<<" months course worth "<<fees1<<"/-\n"<<endl;	
			}
			else if(select5==2)
			{
				cout<<"you have selected " <<duration2<<" months course worth "<<fees2<<"/-\n"<<endl;
			}
			else
			{
			   cout<<"you have selected  " <<duration3<<" months course worth "<<fees3<<"/-\n"<<endl;	
			}
			int weight;
			float height;
			float height1;
			cout<<"we have following instructors for this course in our gym"<<endl;
			cout<<" ___________________________________________________ "<<endl;
			cout<<"|sr no.|             Instructor Name                |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 1)_  |                  HASEEB                    |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 2)_  |                   Amir                     |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"| 3)_  |           Maham (for girls only)           |"<<endl;
			cout<<"|______|____________________________________________|"<<endl;
			cout<<"enter your height in ft"<<endl;
			cin>>height;
			cout<<"enter your weight in kg's'"<<endl;
			cin>>weight;
			cout<<"enter your height in cm's'"<<endl;
			cin>>height1;
			cout<<"press 1 if u r a boy otherwise, press 0"<<endl;
			int choose;
			cin>>choose;
			if(choose==1)
			{
				cout<<"You will be taught by:-\n\t\t o)_ MR.HASEEB \n\t\t\t&\n\t\t o)_ MR.AMIR"<<endl;
			}
			else
			{
				cout<<"You will be taught by :-\n\t\t o)_ Miss Maham "<<endl;
			}
            cout<<"\t\t\tYou have succesfully registered in our GYM\n"<<endl;
            cout<<"\t\t\tThis is your admission form\n"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<"                   Name => "<<name1<<" "<<name2<<endl;
            cout<<"           Joining date => "<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"        Time you joined => "<<time<<endl;
            cout<<"         Contact Number => "<<number<<endl;
            cout<<"                Address => "<<address<<endl;	
            cout<<"        Selected course => "<<select5<<endl;
            cout<<"                 Height => "<<height<<" ft"<<endl;
            cout<<"         Height in cm's => "<<height1<<" cm's'"<<endl;
            cout<<"                 Weight => "<<weight<<" kg's'"<<endl;
			cout<<" ________________________________________________"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;   
			goto line3;
			break;
	}	
} 
line2: // lin#92
      {
      	    int choice3;
      	    int select6;
      	    int salary=15000;
      	    int experience;
      	    int weight;
			float height;
		    float height1;
         cout<<"We offer following courses "<<endl;
         cout<<" _________________________________________________ "<<endl;
         cout<<"|sr no.|            Courses Offerred              |"<<endl;
         cout<<"|______|__________________________________________|"<<endl;
         cout<<"| 1)_  |                CrossFits                 |"<<endl;
         cout<<"|______|__________________________________________|"<<endl;
         cout<<"| 2)_  |                Fat Lose                  |"<<endl;
         cout<<"|______|__________________________________________|"<<endl;
         cout<<"| 3)_  |                Athletics                 |"<<endl;
         cout<<"|______|__________________________________________|"<<endl;
         cout<<"| 4)_  |             Weight Lifting               |"<<endl;
         cout<<"|______|__________________________________________|"<<endl;
         cout<<"| 5)_  |          Self Defence Training           |"<<endl;
         cout<<"|______|__________________________________________|"<<endl;
         cout<<"enter your choice"<<endl;
         cin>>choice3;
         cout<<"enter your height in ft"<<endl;
		 cin>>height;
		 cout<<"enter your weight in kg's'"<<endl;
		 cin>>weight;
		 cout<<"enter your height in cm's"<<endl;
		 cin>>height1;
         cout<<"enter your experience : "<<endl;
         cin>>experience;
         if(experience>=2)
         {
           cout<<"congratulations Sir/Ma'am "<<name1<<" You are Selected for the course "<<choice3 <<" and you Salary is : " <<salary<<endl;	
		 }
		 else
		 {
		 	cout<<"Sorry! you are not eligible"<<endl;
		 	goto line2;
		 }
		 cout<<"\t\t\tYou have succesfully registered in our GYM\n"<<endl;
            cout<<"\t\t\tThis is your admission form\n"<<endl;
            cout<<" ________________________________________________"<<endl;
            cout<<"                   Name => "<<name1<<" "<<name2<<endl;
            cout<<"           Joining date => "<<date<<"-"<<month<<"-"<<year<<endl;
            cout<<"        Time you joined => "<<time<<endl;
            cout<<"         Contact Number => "<<number<<endl;
            cout<<"                Address => "<<address<<endl;	
            cout<<"        Selected course => "<<choice3<<endl;
            cout<<"                 Height => "<<height<<"ft"<<endl;
            cout<<"         Height in cm's => "<<height1<<endl;
            cout<<"                 Weight => "<<weight<<"kg"<<endl;
			cout<<" ________________________________________________"<<endl;
			cout<<endl;
			cout<<endl;
			cout<<"\t\t ***** JAZAKALLAH ***** "<<endl;
      }	  
    }

 
}



