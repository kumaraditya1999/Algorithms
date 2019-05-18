
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

## **Merge Sort :**
**Pseudo Code :**
<br>


  Merge Sort(arr[], l,  r)
  
If (r>l)

     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
             
   **Time codeplexity :** O(N*logN)
   
   **Space codeplexity :** O(1)
 <hr>  
