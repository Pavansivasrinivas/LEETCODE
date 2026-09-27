class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.length();
        queue<int>r;
        queue<int>d;
        for(int i = 0; i < n; i++) {
            if(senate[i] == 'R') {
                r.push(i);
            } else {
                d.push(i);
            }
        }

        while(!r.empty() && !d.empty()) {
            if(r.front() < d.front()) {
                int x = r.front();
                r.pop();
                d.pop();

                r.push(x + n);
            } else {
                int x = d.front();
                d.pop();
                r.pop();

                d.push(x + n);
            }
        }  
        return (r.empty()) ? ("Dire") : ("Radiant");
    }
};