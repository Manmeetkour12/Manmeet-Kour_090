//first approach

class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int> st;
      int n=s.length();
      st.push(-1);
      int maxlen=0;
      for(int i=0;i<s.length();i++){
          if(s[i]=='('){
                st.push(i);
          }
          else{
             st.pop();
             if(st.empty()){
                    st.push(i);
                }
                else{
                    maxlen = max(maxlen,i - st.top());
                }
      }  
    }
    return maxlen;
    }
};

//second approach

class Solution {
public:
    

int longestValidParentheses(string s){
     
int n=s.length();
int count1=0;
int count2=0;
int max1=0;
int max2=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='('){
        count1++;
    }
    else if(s[i]==')'){
        count2++;
    }
    if(count1==count2){
        max1=max(max1,count1+count2);
    }
    else if(count1 < count2){
        count1=0;
        count2=0;
    }
}
    count1=count2=0;
    for(int i=s.length()-1;i>=0;i--){
    if(s[i]=='('){
        count1++;
    }
    else if(s[i]==')'){
        count2++;
    }
    if(count2==count1){
        max2=max(max2,count2+count1);
    }
    else if(count1 > count2){
        count1=0;
        count2=0;
    }
    }
    int result;
    result = max(max1, max2);
      return result;
    }
};


