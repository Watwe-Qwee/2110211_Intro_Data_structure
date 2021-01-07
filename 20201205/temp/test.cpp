at min_hash_estimate(vector<size_t> as, vector<size_t> bs) {
 map<size_t,int> m;
 for (auto &x : as) m[x]++;

 int count = 0;
 for (auto &x : bs)
 if (m.find(x) != m.end()) count += m[x];

 return (count+0.0)/as.size();