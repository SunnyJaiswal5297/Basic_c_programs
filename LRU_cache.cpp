#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
    private:
    public:
    int maxSize;
    list<pair<int,int>> dq;
    unordered_map<int, list<pair<int,int>> :: iterator> ma; 
    LRUCache(int N)
    {
        maxSize = N;
        dq.clear();
        ma.clear();
    }
    void set(int x, int y) 
    {
        if(ma.find(x) == ma.end())
        {
            if(dq.size() == maxSize)
            {
                int Lx = dq.back().first;
                int Ly = dq.back().second;
                dq.pop_back();
                dq.push_front({x,y});
                ma.erase(Lx);
                ma[x] =dq.begin();
            }
            else
            {
                dq.push_front({x,y});
                ma[x] = dq.begin();
            }
        }
        else
        {
            auto it = ma.find(x);
            dq.erase(it->second);
            dq.push_front({x,y});
            ma[x]=dq.begin();
        }
    }
    int get(int x)
    {
        if(ma.find(x) == ma.end())
        {
            return -1;
        }
        auto it = ma.find(x);
        int d  = (*(it->second)).second;
        dq.erase(it->second);
        dq.push_front({x,d});
        ma[x] = dq.begin();
        return d;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends