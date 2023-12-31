def sum_of_subsets(w, s):
    n = len(w)
    sol = [0] * n
    tot_pl = sum(w)

    def promising(l, wsf, tpl):
        return wsf + w[l] <= s and wsf + tpl >= s

    def backtrack(l, wsf, tpl):
        if wsf == s:
            print(sol)
        elif promising(l, wsf, tpl):
            sol[l] = 1
            backtrack(l + 1, wsf + w[l], tpl - w[l])
            sol[l] = 0
            backtrack(l + 1, wsf, tpl - w[l])

    backtrack(0, 0, tot_pl)

w = [int(input(f"Enter the weight of item {i}: ")) for i in range(1, int(input("Enter the number of distinct items: ")) + 1)]
s = int(input("Enter the maximum allowed weight: "))
sum_of_subsets(w, s)