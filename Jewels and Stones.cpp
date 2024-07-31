class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int C=0;
        for(int i=0;i<jewels.length();i++){
            for(int j=0;j<stones.length();j++){
                if(jewels[i]==stones[j])
                C++;
                }
                }
                return C;
                }
};
