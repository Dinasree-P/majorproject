#include <iostream>
#include <string>
using namespace std;
class Student
 {   private:
     int roll, mechanics, civil, programming, DCN, DCS;
     char name[30];
    public:
     void Studentdetails()
     {
         cout<<"\nEnter your roll.:";
         cin>> roll;
         cout<<"\nEnter your name:";
         cin>> name;
         cout<<"\nEnter marks for mechanics:";
         cin>> mechanics;
         cout<<"\nEnter marks for civil:";
         cin>> civil;
         cout<<"\nEnter marks for programming:";
         cin>> programming;
         cout<<"\nEnter marks for DCN:";
         cin>> DCN;
         cout<<"\nEnter marks for DCS:";
         cin>> DCS;
      }
     void Display()
     {
         cout<<"/n/n/t/tMarks"<<endl;
         cout<<"\nRollno."<< roll;
         cout<<"\nName"<< name;
         cout<<"\n\nMarks in mechanics:"<< mechanics;
         cout<<"\nMarks in civil:"<< civil;
         cout<<"\nMarks in programming:"<< programming;
         cout<<"\nMarks in DCN:"<< DCN;
         cout<<"\nMarks in DCS:"<< DCS;
       }
     void Insert()
      {
          cout<<"\nEnter marks for DCS";
          cin>> DCS;
          cout<<"1)mechanics:"<<mechanics<<"\n";
          cout<<"2)civil:"<<civil<<"\n";
          cout<<"3)programming:"<<programming<<"\n";
          cout<<"4)DCN:"<<DCN<<"\n";
          cout<<"5)Computer:"<<DCS<<"\n";
      }
      void Delete()
      {
          int deletechoice;
          cout<<"\nEnter the subject to be deleted\n";
          cout<<"1)mechanics:" <<mechanics<<"\n";
          cout<<"2)civil:"<<civil<<"\n";
          cout<<"3)programming:"<<programming<<"\n";
          cout<<"4)DCN:" <<DCN<<"\n";
          cout<<"5)DCS:"<<DCS<<"\n";
          cout<<"Enter your choice:";
          cin >> deletechoice;
          switch (deletechoice)
          {
             case 1:
              
              cout<<"1)civil:"<<civil<<"\n";
              cout<<"2)programming:"<<programming<<"\n";
              cout<<"3)DCN:"<<DCN<<"\n";
              cout<<"4)DCS:"<<DCS<<"\n";
              break;
              
              case 2:
             cout<<"1)mechanics:"<<mechanics<<"\n";
              cout<<"2)programming:"<<programming<<"\n";
              cout<<"3)DCN:"<<DCN<<"\n";
              cout<<"4)DCS:"<<DCS<<"\n";
              break;
              
              case 3:
              cout<<"1)mechanics:"<<mechanics<<"\n";
              cout<<"2)civil:"<<civil<<"\n";
              cout<<"3)DCN:"<<DCN<<"\n";
              cout<<"4)DCS:"<<DCS<<"\n";
              break;
              
              case 4:
              cout<<"1)mechanics:"<<mechanics<<"\n";
              cout<<"2)civil:"<<civil<<"\n";
              cout<<"3)programming:"<<programming<<"\n";
              cout<<"4)DCS:"<<DCS<<"\n";
              break;
              
              case 5:
              cout<<"1)mechanics:"<<mechanics<<"\n";
              cout<<"2)civil:"<<civil<<"\n";
              cout<<"2)programming:"<<programming<<"\n";
              cout<<"4)DCN:"<<DCN<<"\n";
              break;
              default:
              cout<<"wrong choice";
      }
      }
      };
       int main()
       {
           Student student1;
           student1.Studentdetails();
           int choice;
              cout<<"Enter your choice\n";
              cout<<"1.insert marks\n 2.display marks\n 3.delete marks\n";
              cin >> choice;
              switch(choice)
              {
                  case 1:
                  cout<<"insert mark option selected";
                  student1.Insert();
                  break;
                  
                  case 2:
                  cout<<"Display mark option selected";
                  student1.Display();
                  break;
                  
                  case 3:
                  cout<<"Delete mark option selected";
                  student1.Delete();
                  break;
                  
                  default:
                  cout<<"wrong choice";
                  break;
              }
              return 0;
       }
