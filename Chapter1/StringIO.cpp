#include <iostream>

int main(void)
{
  char name[100];
  char lang[200];

  std::cout<<"wuts ur name? ";
  std::cin>>name;

  std::cout<<"wuts your favorite programming language? ";
  std::cin>>lang;

  std::cout<<"my name is "<<name<<".\n";
  std::cout<<"my favorite language is "<<lang<<"."<<std::endl;
  return 0;
}
