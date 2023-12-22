def binarySearch(alist,item):
    first = 0
    last = len(alist) - 1
    found = False
    while first <= last and not found:
        midpoint = (first+last)//2
        print(alist[midpoint])
        if alist[midpoint] == item:
            found = True
        else:
            if item < alist[midpoint]:
                last = midpoint - 1
                print(alist[last])
            else:
                first = midpoint + 1
                print(alist[first])
    return found

testcase = [ '''what you want the list to be''' ]
print(binarySearch(testcase,'''obj'''))
