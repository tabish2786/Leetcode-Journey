class Solution {
public:
    string longestPalindrome(string s) {
        string s1 = "";
        int n = s.size();

        for (int mid = 0; mid < n; mid++) {
            int i = mid - 1;
            int j = mid + 1;

            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > s1.size())
                    s1 = s.substr(i, j - i + 1);

                i--;
                j++;
            }

            // for string in which no. of elements is even          
            if (s1.size() < 1)
                s1 = s.substr(mid, 1);
            i = mid;
            j = mid + 1;

            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > s1.size())
                    s1 = s.substr(i, j - i + 1);
                i--;
                j++;
            }
        }
        return s1;
    }
};