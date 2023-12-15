#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(int i, string& word) {
 
  if (i >= word.size() / 2) {
    return true;
  }
  
  if (word[i] != word[word.size() - i - 1]) {
    return false;
  }

  return IsPalindrome(i + 1, word);
}

int main() {

    string word;
    cout << "Enter a word: ";
    getline(cin, word);

    bool palindrome = IsPalindrome(0, word);

    if (palindrome == false) {
        cout << "This word is not a palindrome";
    }

    else if (palindrome == true) {
        cout << "This word is a palindrome";
    }

    return 0;
}