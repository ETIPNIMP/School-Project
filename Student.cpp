#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<windows.h>
using namespace std;
class school{
char name[20];
char Teacher_name[20];
char Mobile_Number[20];
char Student_Mobile_Number[20];
char Parents_Name[20];
int Class;
int Sclass;
char section[20];
char Subject[20];
int age;
char adhar[20];
int d,m,y; 
int rollno;
int Maths;
int English;
int Science;
int Hindi;
int S_S_T;
float sum;
float total;
int T_rollno;
string pass;
string password="CodeWithSG";
char x='.';
int e;
public:
void Create_Teacher_Record();
void Show_Teacher_Record();
void Student_Record();
void Show_Record();
void Report();
void show_Report();
int get_rollno();
int Teacher_Rollno();
};
void school::Create_Teacher_Record(){
        cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 4");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
 cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Teacher record "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
cout<<endl;
cout<<"Enter a Teacher name "<<endl;
cin.ignore();
cin.getline(Teacher_name,20);
cout<<"Enter a Teacher rollno "<<endl;
cin>>T_rollno;
cout<<"Which date of join ||Date||Month||year||and line by line enter your join date "<<endl;
cin>>d>>m>>y;
cout<<"Enter a mobile number "<<endl;
cin.ignore();
cin.getline(Mobile_Number,20);
cout<<"Enter a Which subject has a teacher "<<endl;
cin.ignore();
cin.getline(Subject,20);
cout<<"Which class teacher "<<endl;
cin>>Class;
cout<<"Enter a teacher age "<<endl;
cin>>age;
cout<<"Enter a your adhar card number "<<endl;
cin.ignore();
cin.getline(adhar,20);
cout<<"**************************************************************"<<endl;
cout<<"**************** Welcome to SG school **********************"<<endl;
cout<<"**************************************************************"<<endl;
    }
}
void school::Show_Teacher_Record(){
        cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{ system("COLOR 1");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Teacher record "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
cout<<" Teacher name "<<Teacher_name<<endl;
cout<<" Teacher Rollno "<<T_rollno<<endl;
cout<<"Which date of join ||Date||Month||year "<<d<<"/"<<m<<"/"<<y<<endl;
cout<<"Teacher mobile number "<<Mobile_Number<<endl;
cout<<"Which subject has a teacher "<<Subject<<endl;
cout<<"Which class teacher "<<Class<<endl;
cout<<"Teacher age "<<age<<endl;
cout<<"Teacher adhar card number "<<adhar<<endl;
    }
}
void school::Student_Record(){
        cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
    cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 5");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Student record "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
cout<<"Enter a Student name "<<endl;
cin.ignore();
cin.getline(name,20);
cout<<"Enter a student Rollno "<<endl;
cin>>rollno;
cout<<"Which date of join ||Date||Month||year||and line by line enter your join date "<<endl;
cin>>d>>m>>y;
cout<<"Enter a mobile number "<<endl;
cin.ignore();
cin.getline(Student_Mobile_Number,20);
cout<<"Enter a student parents name "<<endl;
cin.ignore();
cin.getline(Parents_Name,20);
cout<<"Which class Student "<<endl;
cin>>Sclass; 
cout<<"Enter a Student age "<<endl;
cin>>age;
cout<<"Enter a your adhar card number "<<endl;
cin.ignore();
cin.getline(adhar,20);
    }
}
void school::Show_Record(){
        cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
     cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 7");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Student record "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
cout<<"Student name "<<name<<endl;
cout<<"Student Rollno "<<rollno<<endl;
cout<<"Which date of join ||Date||Month||year "<<d<<"/"<<"/"<<m<<y<<endl;
cout<<"Mobile number "<<Mobile_Number<<endl;
cout<<"Student parents name "<<Parents_Name<<endl;
cout<<"Which class Student "<<Sclass<<endl;
cout<<"Student age "<<age<<endl;
cout<<"Your adhar card number "<<adhar<<endl;
    }
}
void school::Report(){
    cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
      cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
    system("COLOR 6");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
    cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Student Report "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
cout<<"Enter a student class "<<endl;
cin>>Sclass;
cout<<"Enter a rollno "<<endl;
cin>>rollno;
cout<<"Enter a Maths marks "<<endl;
cin>>Maths;
cout<<"Enter a Science marks "<<endl;
cin>>Science;
cout<<"Enter a English marks "<<endl;
cin>>English;
cout<<"Enter a Hindi marks "<<endl;
cin>>Hindi;
cout<<"Enter a S.s.t marks "<<endl;
cin>>S_S_T;
sum=Maths+Science+Hindi+S_S_T+English;
total=sum/500*100;
cout<<"Your total percentage is "<<total<<endl;
    }
}
void school::show_Report(){
        cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
          cout<<"Enter a password "<<endl;
cin>>pass;
if(pass!=password){
cout<<"password is incorrect || Please try again "<<endl;
return;
}else{
     system("COLOR 9");
     cout<<"\n\n\n\n\n\n\n\n";
cout<<"\n\nLoading....";
for(int i=0;i<20;i++){
    Sleep(80);
    cout<<x;
}
cout<<endl;
    cout<<"Password is accepted "<<endl;
    cout<<"Welcome to Student Report  "<<endl;
}
 cout<<"press continue press 1 || return for main press 0 "<<endl;
    cin>>e;
    if(e<1){
    cout<<"Press any key on keyboard "<<endl;
        return;
    }else{
cout<<"Enter a student class "<<Sclass<<endl;
cout<<"Enter a rollno "<<rollno<<endl;
cout<<"Enter a Maths marks "<<Maths<<endl;
cout<<"Enter a Science marks "<<Science<<endl;
cout<<"Enter a English marks "<<English<<endl;
cout<<"Enter a Hindi marks "<<Hindi<<endl;
cout<<"Enter a S.s.t marks "<<S_S_T<<endl;
cout<<"Your total percentage is "<<total<<endl;;
    }
}
int school::get_rollno(){
    return rollno;
}
int school::Teacher_Rollno(){
    return T_rollno;
}
int main(){
    school sc;
int ch;
int n;
int chk;
char name[25];
std::fstream f;
do{
     system("COLOR 9");
     cout<<"\n\n";
    cout<<"====================================="<<endl;
    cout<<"============ SG School ============"<<endl;
    cout<<"====================================="<<endl;
    cout<<"1) Create Teacher Record      "<<endl;
    cout<<"2) Show Teacher Record        "<<endl;
    cout<<"3) Created Student Record     "<<endl;
    cout<<"4) Show student Record        "<<endl;
    cout<<"5) Create Student Report card "<<endl;
    cout<<"6) Show student Report card   "<<endl;
    cout<<"7)          Exit              "<<endl;
    cout<<endl;
    cout<<"   Press key 1 to 7 any one     "<<endl;
    cin>>ch;
    system("CLS");
switch(ch){
    case 1:
cout<<"1) Create Teacher Record "<<endl;
f.open("Teacher.dat",ios::app|ios::in|ios::binary);
sc.Create_Teacher_Record();
f.write((char *)&sc,sizeof(sc));
f.close();
getch();
system("CLS");
break;
case 2:
cout<<"2) Show Teacher Record "<<endl;
f.open("Teacher.dat",ios::in|ios::out|ios::app|ios::binary);
if(f.fail()){
    cout<<"File could not be found "<<endl;
}else{
    chk=0;
    cout<<"Enter a Teacher rollno "<<endl;
    cin>>n;
while(f.read((char *)&sc,sizeof(sc))){
    if(sc.Teacher_Rollno()==n){
    sc.Show_Teacher_Record();
    chk=1;
    break;
    }
    }if(chk==0){
        cout<<"Teacher Record not found || Try again "<<endl;
    }
}
f.close();
getch();
system("CLS");
break;
case 3:
cout<<"3) Created Student Record "<<endl;
f.open("Student.dat",ios::app|ios::in|ios::binary);
sc.Student_Record();
f.write((char *)&sc,sizeof(sc));
f.close();
getch();
system("CLS");
break;
case 4:
cout<<"4) Show student Record "<<endl;
f.open("Student.dat",ios::in|ios::out|ios::app|ios::binary);
if(f.fail()){
    cout<<"File could not be found "<<endl;
}else{
    cout<<"Enter the student ROllno "<<endl;
    cin>>n;
while(f.read((char *)&sc,sizeof(sc))){
    if(sc.get_rollno()==n){
    sc.Show_Record();
    chk=1;
    break;
    }
}
if(chk==0){
        cout<<"Student Record not found || Try again "<<endl;
    }
}
f.close();
getch();
system("CLS");
break;
case 5:
cout<<"5) Create Student Report card "<<endl;
f.open("Report.dat",ios::app|ios::in|ios::binary);
sc.Report();
f.write((char *)&sc,sizeof(sc));
f.close();
getch();
system("CLS");
break;
case 6:
cout<<"6) Show student Report card "<<endl;
f.open("Report.dat",ios::in|ios::out|ios::app|ios::binary);
if(f.fail()){
    cout<<"File could not be found "<<endl;
}else{
    chk=0;
    cout<<"Enter the student ROllno "<<endl;
    cin>>n;
while(f.read((char *)&sc,sizeof(sc))){
    sc.show_Report();
    if(sc.get_rollno()==n){
    sc.show_Report();
    chk=1;
    break;
    }
}
if(chk==0){
        cout<<"Student Record not found || Try again "<<endl;
    }
}
f.close();
getch();
system("CLS");
break;
case 7:
if(ch==7){
    exit(1);
}
   default:
  cout<<"This is not exist try again "<<endl;
  break;
       }
       cin.ignore();
       cin.get();
   }while(ch!=7);

return 0;
}