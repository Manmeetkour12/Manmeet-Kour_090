class Solution {
public:
    int calculate(string s) {
      int sum=0,num=0,sign=1;
      for(int i=0;i<s.length();i++){
        if(isdigit(s[i]))
           num=num*10+(s[i]-'0');
        if(s[i]=='+'){
            sum+=num*sign;
            num=0;
            sign=1;
        }
        if(s[i]=='-'){
            sum+=num*sign;
            num=0;
            sign=-1;
        }
        
      } 
      sum+=num*sign;
      return sum;

    }
};
