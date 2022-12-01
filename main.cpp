#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  string word;
  char letter;
  vector<string> words_list;
  //read a list of words and store them in a vector
  cin >> word;
  while(word.size() > 1){
    words_list.push_back(word);
    cin >> word;
  }
  //the last word read in is a letter
  letter = word.at(0);
  //if more than 10 words are read in then output "Too many words" and exit
  if(words_list.size() > 10){
    cout << "Too many words" << endl;
    return 0;
  }
  //loop through the list of words
  //output the words that contain the character at least once
  for(unsigned int i = 0; i < words_list.size(); i++){
    if(words_list.at(i).find(letter) != string::npos){
      cout << words_list.at(i) << ",";
    }
  }
  return 0;
}