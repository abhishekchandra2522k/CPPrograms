#include<bits/stdc++.h>

class Solution {
public:
   bool checkIfPangram(std::string& str) {
      std::vector<int> alphabets(26);

      for (int i = 0; i < str.length(); i++) {
         alphabets[str[i] - 97]++;
      } //for-loop

      for (int i = 0; i < 26; i++) {
         if (alphabets[i] == 0)
            return false;
      } //for-loop

      return true;
   } //function-checkIfPangram
};
