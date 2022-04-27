#include<iostream>
#include<stdio.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
void readdef(string d);
void search(string s, string h) ;
int j=1;
int main()
{
	string ch,sh,dh;
	int choice;
		
		
		cout<<"ENTER DATA FILE NAME:";
         cin>>ch;
	   cout<<"ENTER DEFINATION FILE NAME:";
	   cin>>sh;
	   
	    ch=ch+".txt";
	   sh=sh+".txt";
	   readdef(sh);
	 
	 cout<<" FOR EXIT";
	 cout<<"\n\nENTER YOUR CHOICE:";
	 cin>>choice;
	 	
	 	if(choice==j)
		 {
		 //	exit(0);
		 }
	 
	 else	
	 {
          	
	   	cout<<"\nENTER VALUE TO SEARCH IN THAT COLUMN: ";
	   	cin>>dh;
      search(ch,dh);	 
}



	//ob.close();
	return 0;
}

void readdef( string gh)
{
	
	int i;
	char ch;
	string data;
	
	
	ifstream outfile(gh.c_str());
	char a;
	  while(!outfile.eof())
 //  while(outfile-1)
    {
 

          getline(outfile,data);
   cout<<j<<".";
         for(int i=0;i<data.length();i++)
		//for(int i=0;i!=' ';i++)
       // {
            
            {
			
		   ch=data[i];
		   	cout<<ch;
			if(ch==' ')
			{
			
				break;
				
			}
		    
//	cout<<"\n";
	}
		//}

//cout<<j+1;
cout<<"\n";
//cout<<j;
j++;

}

	outfile.close();
}




 void search(string g, string substr)
 {
 	string str;
 	int temp;
   ifstream outfile(g.c_str());
   {
   	
   	   while(!outfile.eof())
   {
 

          getline(outfile,str);
   
          for(int i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
            temp=i+1;
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }
 
            if(substr[j]=='\0')
            {
            	cout<<str;
              
                exit(0);
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
}}

     if(temp==0)
        cout<<"Record not FOUND";
 
			
		    
}
   
}
   
   
