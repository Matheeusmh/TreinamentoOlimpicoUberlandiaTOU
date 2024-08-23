int find(int p) {
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q) {
    p = find(p), q = find(q);
    if(p == q) return;
    if(sz[p] > sz[q]) swap(p, q);
    id[p] = q;
    sz[p] += sz[q];
}

