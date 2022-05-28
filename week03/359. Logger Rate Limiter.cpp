//359 - Logger Rate Limiter
//
class Logger {
public:
    unordered_map<long long, int> mp;
    long long  base = 257;
    Logger() {}
    long long getHash(const string &str)
    {
        int n = str.size();
        long long res = 0;
        for (int i = 0; i < n; ++i)
        {
            res = res * base + (int)str[i];
        }
        return res;
    }

    bool shouldPrintMessage(int timestamp, string message)
    {
        long long key = getHash(message);
        if (mp.count(key) && timestamp - mp[key] < 10)
        {
            return false;
        }
        mp[key] = timestamp;
        return true;
    }
};
