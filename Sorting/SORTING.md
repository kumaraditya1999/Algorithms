
# **SORTING**

## **Selection Sort**
**Pseudo Code :**
<br>
```
    for i = 1 to n-1:
        find minimum element in i to n
        swap minimum element with arr[i]
```
**Time codeplexity :**  O(N<sup>2</sup>)

**Space codeplexity :** O(1)

<hr>

## **Bubble Sort**
**Pseudo Code :**
<br>
```
    for i = 1 to n-1:
        for j = 1 to n-i-1:
            if arr[j] > arr[j+1]:
                swap ( arr[j], arr[j+1])
```
**Time codeplexity :**  O(N<sup>2</sup>)

**Space codeplexity :** O(1)
<hr>

## **Insertion Sort**
**Pseudo Code :**
<br>
```
    for i = 2 to n:
        key = arr[i]
        j = i - 1
        while(j>=1 && arr[j]>key):
            arr[j+1] = arr[j]
            j = j - 1
        arr[j+1] = key
```
**Time codeplexity :**  O(N<sup>2</sup>)

**Space codeplexity :** O(1)
<hr>