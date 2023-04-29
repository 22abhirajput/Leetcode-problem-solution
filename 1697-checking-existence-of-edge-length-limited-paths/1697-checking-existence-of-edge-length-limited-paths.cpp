class Solution {
public:
int find(vector<int> &ds, int i) {
    return ds[i] < 0 ? i : ds[i] = find(ds, ds[i]);
}
vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edges, vector<vector<int>>& qs) {
    multimap<int, array<int, 3>> mm;
    for (auto i = 0; i < qs.size(); ++i)
        mm.insert({qs[i][2], {qs[i][0], qs[i][1], i}});
    sort(begin(edges), end(edges), [](vector<int> &a, vector<int> &b) { return a[2] < b[2]; });
    vector<int> ds(n, -1);
    vector<bool> res(qs.size());
    int ei = 0;
    for (auto &q : mm) {
        while (ei < edges.size() && edges[ei][2] < q.first) {
            int i = find(ds, edges[ei][0]), j = find(ds, edges[ei][1]);
            if (i != j) {
                if (ds[i] > ds[j])
                    swap(i, j);
                ds[i] += ds[j];
                ds[j] = i;
            }
            ++ei;
        }
        res[q.second[2]] = find(ds, q.second[0]) == find(ds, q.second[1]);
    }
    return res;
}
};