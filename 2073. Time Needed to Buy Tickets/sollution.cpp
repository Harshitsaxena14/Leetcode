class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int contribution = 0;
        for (int i = 0; i < tickets.size(); i++)
        {
            if (i <= k)
            {
                contribution += min(tickets[i], tickets[k]);
            }
            if (i > k)
            {
                contribution += min(tickets[i], tickets[k] - 1);
            }
        }
        return contribution;
    }
};