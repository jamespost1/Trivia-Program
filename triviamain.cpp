#include "trivia.cpp"
int main (){
  string ans;
  int money = 0;
  trivia quiz[5]; // creating an array of type "Trivia"
  trivia *pointer; 
  pointer = new trivia("What is the name of Eminem's band? ", "D12", 20);
  quiz[0] = *pointer;
  pointer = new trivia("Who starts first in chess? ", "White", 20);
  quiz[1] = *pointer;
  pointer = new trivia("What language has the most words? ", "English", 20);
   quiz[2] = *pointer;
  pointer = new trivia("What is the world's largest ocean? ", "Pacific", 20);
   quiz[3] = *pointer;
  pointer = new trivia("How many hearts does an octopus have? ", "Three", 20);
   quiz[4] = *pointer;
// hardcoding quiz questions
//for loop checks if answer is correct and outputs respective response
   for (int i = 0; i < 5; i++){
     cout <<"\n Question "<<(i +1)<< ": "<<quiz[i].getquestion();
     cin >> ans;
     if(quiz[i].getanswer() == ans){
       cout << "\n Correct! \n";
        money += quiz[i].getprize();
     }
     else {
       cout << "Wrong, the correct answer is: "<< quiz[i].getanswer()<<endl;
     }
   }
     cout << "\n You won! Your prize is: $" << money << endl;
     return 0;
}