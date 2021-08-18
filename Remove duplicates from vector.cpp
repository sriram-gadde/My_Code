sort(x.begin(), x.end());
vector<int>::iterator end_unique = unique(x.begin(), x.end());
x.erase(end_unique, x.end());
