class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;

        for (string op : operations)
        {
            if (op != "C" && op != "D" && op != "+")
            {
                record.push_back(stoi(op));
            }
            else if (op == "C")
            {
                record.pop_back();
            }
            else if (op == "D")
            {
                record.push_back(2 * record.back());
            }
            else
            {
                int n = record.size();

                record.push_back(record[n - 1] + record[n - 2]);
            }

        }

        int sum = 0;
        for (int score : record)
        {
            sum += score;
        }

        return sum;
    }
};