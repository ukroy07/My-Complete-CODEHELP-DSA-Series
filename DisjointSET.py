
class DisjoinSET:

    def __init__(self, n: int):
        self.parent: list[int] = list(range(n+1))
        self.rank : list[int] = [0] * (n+1)
        self.size : list[int] = [1] * (n+1)

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
    
    def findUnionBySize(self, p: int, q: int):
        ult_p = self.findUltimateParent(p)
        ult_q = self.findUltimateParent(q)

        # if both are not equal, we need to attach the both's ultimate parent
        if ult_p != ult_q:
            if self.size[ult_p] < self.size[ult_q]:
                self.parent[ult_p] = ult_q
                self.size[ult_q] += self.size[ult_p]
            elif self.size[ult_p] > self.size[ult_q]:
                self.parent[ult_q] = ult_p
                self.size[ult_p] += self.size[ult_q]
            else:
                # attach with anyone
                self.parent[ult_q] = ult_p
                self.size[ult_p] += self.size[ult_q]

            return True
        
        return False

# ----------------- UNION BY RANK --------------- 

ds1 = DisjoinSET(n=7)

print(f" TASK 1 : {ds1}")

ds1.FindUnionByRank(1, 2)
ds1.FindUnionByRank(2, 3)
ds1.FindUnionByRank(4, 5)
ds1.FindUnionByRank(6, 7)
ds1.FindUnionByRank(5, 6)

print(f"Parent of 3 is {ds1.findUltimateParent(3)} and parent of 7 is {ds1.findUltimateParent(7)}")

ds1.FindUnionByRank(3, 7)

print(f"Parent of 3 is {ds1.findUltimateParent(3)} and parent of 7 is {ds1.findUltimateParent(7)}")

# ---------------- UNION BY SIZE -----------------

ds2 = DisjoinSET(n=7)

print(f" TASK 2 : {ds2}")

ds2.findUnionBySize(1, 2)
ds2.findUnionBySize(2, 3)
ds2.findUnionBySize(4, 5)
ds2.findUnionBySize(6, 7)
ds2.findUnionBySize(5, 6)

print(f"Parent of 3 is {ds2.findUltimateParent(3)} and parent of 7 is {ds2.findUltimateParent(7)}")

ds2.findUnionBySize(3, 7)

print(f"Parent of 3 is {ds2.findUltimateParent(3)} and parent of 7 is {ds2.findUltimateParent(7)}")