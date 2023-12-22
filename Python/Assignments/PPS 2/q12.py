number_of_candidates = int(input(""))
key = ["A", "B", "B", "A", "C"]
rank = [x for x in range(1, number_of_candidates+1)]
marks_list = []
candidates_list = []
for i in range(number_of_candidates):
    marks = 0
    answers = list(input().strip().split(" "))
    candidate = f"C{i+1}"
    for j in range(5):
        if answers[j] == key[j]:
            marks += 2
        elif answers[j].upper() == "X":
            marks += 0
            pass
        else:
            marks -= 0.5
    marks_list.append(marks)
    candidates_list.append(candidate)
for i in marks_list:
    if marks_list.count(i) > 1:
        x = marks_list.index(i)
        z = i
        y = marks_list.remove(marks_list[x])
        b = marks_list.index(i) + 1
        candidates_list[b] = candidates_list[x] + "," + candidates_list[b]
        candidates_list.remove(candidates_list[x])
marks_list1 = sorted(marks_list)
marks_list1.reverse()
print("Rank", "    ", "Candidates", "    ", "Total")
for i in marks_list1:
    print(rank[marks_list1.index(i)], "           ", candidates_list[marks_list.index(i)], "       ","%.2f"%i)	 	  	 	  	  	     	 	 		  	 	
