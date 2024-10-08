class Twitter {
public:
    
    vector<pair<int,int>> tweet;
    unordered_map<int,unordered_map<int,int>> follower;
    
    Twitter() {
    }
    
    void postTweet(int userId, int tweetId) {
        tweet.push_back({userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        int cnt=0;
        for(int i=tweet.size()-1;cnt<10 && i>=0;i--){
            if(tweet[i].first==userId || follower[userId][tweet[i].first]==1)
                res.push_back(tweet[i].second),cnt++;
        }
        return res;
    }
    
    void follow(int followerId, int followeeId) {
        follower[followerId][followeeId]=1;
    }
    
    void unfollow(int followerId, int followeeId) {
        follower[followerId][followeeId]=0;
    }
};
