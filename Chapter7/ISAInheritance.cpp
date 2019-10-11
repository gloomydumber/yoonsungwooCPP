#include <iostream>
#include <cstring>
using namespace std;

class Computer
{
private:
  char owner[50];
public:
  Computer(char * name)
  {
    strcpy(owner, name);
  }
  void Calculate()
  {
    cout<<"recieved one calculate."<<endl;
  }
};

class NoteBookComp : public Computer
{
private:
  int Battery;
public:
  NoteBookComp(char *name, int initChag)
    :Computer(name), Battery(initChag)
    {}
    void Charging(){Battery+=5;}
    void UseBattery(){Battery-=1;}
    void MovingCal()
    {
      if(GetBatteryInfo()<1)
      {
        cout<<"need charging."<<endl;
        return;
      }
      cout<<"moving ";
      Calculate();
      UseBattery();
    }
    int GetBatteryInfo(){return Battery;}
};

class TabletNoteBook : public NoteBookComp
{
private:
  char regstPenModel[50];
public:
  TabletNoteBook(char * name, int initChag, char *pen)
    :NoteBookComp(name, initChag)
    {
      strcpy(regstPenModel, pen);
    }
    void Write(char * penInfo)
    {
      if(GetBatteryInfo()<1)
      {
        cout<<"need charging."<<endl;
        return ;
      }
      if(strcmp(regstPenModel, penInfo)!=0)
      {
        cout<<"it's not a registed pen.";
        return;
      }
      cout<<"execute typed script."<<endl;
      UseBattery();
    }
};

int main(void)
{
  NoteBookComp nc("soojonglee",5);
  TabletNoteBook tn("sooyungjung",5,"ISE-241-242");
  nc.MovingCal();
  tn.Write("ISE-241-242");
  return 0;
}
