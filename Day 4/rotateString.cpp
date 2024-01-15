// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.
// A shift on s consists of moving the leftmost character of s to the rightmost position.
bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        string x = s+s;
        if(x.find(goal)!=string::npos){
            return true;
        }
        return false;
    }