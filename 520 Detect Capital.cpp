/*Author: JerryYan
  data:312

  comment: water
*/

class Solution {
public:
    bool detectCapitalUse(string word) {
        int ll=word.length(),count=0;
        if(ll<=1)
			return true;
        bool big;
        for (int i = 1; i < ll; i++){
			if(word[i]>='a'&&word[i]<='z')
				count+=1;
			else
				count+=2;
		}
       if(count==ll-1)
			return true;
		else if(count==2*(ll-1))
			return word[0]>='A'&&word[0]<='Z';
		else
			return false;
    }
};
