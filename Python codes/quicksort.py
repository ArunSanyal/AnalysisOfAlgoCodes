def quickSort(elements, p, r):
    if p < r:
        q = partition(elements, p, r)
        quickSort(elements, p, q-1)
        quickSort(elements, q+1, r)


def partition(elements, p, r):
    x = elements[r]
    i = p - 1
    for j in range(p, r):
        if elements[j] <= x:
            i += 1
            elements[i], elements[j] = elements[j], elements[i]
    elements[i + 1], elements[r] = elements[r], elements[i + 1]
    return i+1


elements = []
p = 0
n = int(input("Enter the total no of elements: "))
for i in range(0, n):
    d = int(input("Enter elements: "))
    elements.append(d)
r = len(elements) - 1
quickSort(elements, p, r)
print("Sorted list of elements: ", elements)



