class Browser
{
    public:
    vector<string>history;
    int position;
    Browser(string &homepage)
    {
        history.push_back(homepage);
          position=0;
    }

    void visit(string &url)
    {
        history.erase(history.begin()+position+1,history.end());
        history.push_back(url);
        position++;
    }

    string back(int steps)
    {
        if ((position-steps) < history.size())
          position = position - steps;
        else 
          position = 0;
          return history[position];
    }

    string forward(int steps)
    {
        if((steps+position) <history.size())
           position=position+steps;
        else
           position=history.size()-1;
        return history[position];   
            }
};
