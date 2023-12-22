import random

def lessFifty(marks):
    perf=[28, 496]
    print(random.choice(perf))

def moreFifty(marks):
    psquare=[529, 576, 625, 676, 729, 784, 841, 900, 961]
    rooms=[i for i in psquare if (500+marks)<=i<=1000]
    print(rooms[0])

score=int(input())
if(score<50):
    lessFifty(score)
elif(score>=50):
    moreFifty(score)