#include <iostream>
using namespace std;

class trivia {
private: 
 string question, answer;
 int prize;
public:
trivia()
{} // default constructor, takes no args
trivia(string question, string answer, int prize){
  this ->  question = question;
  this -> answer = answer;
  this -> prize = prize;
} // constructor to define members and args
string getquestion()const
{
  return question;
}
string getanswer()const
{
  return answer;
}
int getprize()const
{
  return prize;
}
void setquestion(string question)
{
  this -> question = question;
}
void setanswer (string answer)
{
  this -> answer = answer;
}
void setprize (int prize){
  this -> prize = prize;
} // setter and getter functions
};