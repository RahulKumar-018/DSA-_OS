class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length()-1, j =num2.length()-1;
        string result = "";
        int carry =0;

         while(i>=0 || j>=0 || carry>0){
            int digit1 = (i >= 0) ? num1[i] - '0' : 0;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;
            int  total = digit1+ digit2+ carry;
            carry = total/10;
            int current_digit = total%10;

            result.push_back(current_digit + '0');
            i = i-1;
            j= j-1;

        }
        reverse(result.begin() , result.end());
        return result;
     
    }
};