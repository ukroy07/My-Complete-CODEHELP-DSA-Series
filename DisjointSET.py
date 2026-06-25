
class DisjoinSET:

    def __init__(self, n: int):
        self.parent: list[int] = list(range(n+1))
        self.rank : list[int] = [0] * (n+1)

    def findUltimateParent(self, node: int):
        if node == self.parent[node]:
            return node
        
        self.parent[node] = self.findUltimateParent(self.parent[node])  # path compression
        return self.parent[node]
    
    def FindUnionByRank(self, p: int, q: int):
        ult_p = self.findUltimateParent(p)
        ult_q = self.findUltimateParent(q)

        # if both are not equal, we need to attach the both's ultimate parent
        if ult_p != ult_q:
            if self.rank[ult_p] < self.rank[ult_q]:
                self.parent[ult_p] = ult_q
            elif self.rank[ult_p] > self.rank[ult_q]:
                self.parent[ult_q] = ult_p
            else:
                # attach with anyone
                self.parent[ult_q] = ult_p
                self.rank[ult_p] += 1

            return True

        return False

ds = DisjoinSET(n=7)

ds.FindUnionByRank(1, 2)
ds.FindUnionByRank(2, 3)
ds.FindUnionByRank(4, 5)
ds.FindUnionByRank(6, 7)
ds.FindUnionByRank(5, 6)

print(f"Parent of 3 is {ds.findUltimateParent(3)} and parent of 7 is {ds.findUltimateParent(7)}")

ds.FindUnionByRank(3, 7)

print(f"Parent of 3 is {ds.findUltimateParent(3)} and parent of 7 is {ds.findUltimateParent(7)}")