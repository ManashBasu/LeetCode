class Solution {
public:
    string longestPalindrome(string s) {
        
        int start = 0;
        int lenMax = 1;

        for (int i = 0; i < s.length(); i++)
        {
            int right = i;
            int left = i;

            while (left >= 0 && right <= s.length() && s[left] == s[right])
            {
                if (right - left + 1 > lenMax)
                {
                    start = left;
                    lenMax = right - left + 1;
                }
                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while (left >= 0 && right <= s.length() && s[left] == s[right])
            {
                if (right - left + 1 > lenMax)
                {
                    start = left;
                    lenMax = right - left + 1;
                }
                left--;
                right++;
            }
        }

        return s.substr(start, lenMax);
    }
};