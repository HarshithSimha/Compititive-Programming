class Solution {
public:
    string intToRoman(int num) {
        vector<string> romanStr {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        vector<int> numVals {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};    
        string roman;    
        while (num != 0)
        {
            for (int i = numVals.size() - 1; i >= 0; i--)
            {
                if (num - numVals.at(i) < 0) continue;
                num -= numVals.at(i);
                roman += romanStr.at(i);
                break;
            }
        }    
        return roman;
    }
};
