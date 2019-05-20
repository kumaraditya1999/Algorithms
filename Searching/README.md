# **SEARCHING**

## **BinarySearch**
**Pseudo Code :**
```
for binarySearch(a,left, right, value)
    while right >= left
    (mid = (right-left)/2)+left
    if a[mid] = value
        return mid
    if value < a[mid]
        return binarySearch(a, value, left, mid-1)
    else
        return binarySearch(a, value, mid+1, right)
      )else
    return not found
```
  **Time codeplexity :** O(logn)
