class Solution {
public:
    int minInsertions(string s) {
        int reqRight = 0;
        int insertion = 0;

        for (char c : s) {
            if (c == '(') {
                if (reqRight % 2 != 0) {
                    insertion++;
                    reqRight--;
                }
                reqRight += 2; 
            } else {
                reqRight--; 
                if (reqRight < 0) {
                    insertion++;   
                    reqRight += 2; 
                }
            }
        }

        return insertion + reqRight;
    }
};