import yfinance as yf
import pandas as pd
import matplotlib.pyplot as plot
from datetime import datetime
from tabulate import tabulate
x = input("Enter the stock name:")
stock=yf.Ticker(x)
choice=int(input("Enter your choice [1 for obtaining info][2 for graphs]:"))
if choice == 1:
    want = input("Enter what details you want [Price or Extremes or Total Shares or Majority Holders or Recommendations or Revenue or PE or All]:")
    data = stock.info
    if want == "All":
        for u,v in data.items():
            print(u,"::",v)
    elif want == "Total Shares":
        for u,v in data.items():
            if u == "sharesOutstanding":
                print("Total Shares ::",v)
    elif want == "Majority Holders":
        need = input("Anything in Specific [All or Institutions]:")
        if need == 'Institutions':
            header=["Count","Percentage","Owner"]
            print(tabulate(stock.institutional_holders,header,tablefmt="fancy_grid"))
        elif need == "All":
            header=["Count","Percentage","Owner"]
            print(tabulate(stock.major_holders,header,tablefmt="fancy_grid"))
    elif want == "Recommendations":
        print(stock.recommendations)
    elif choice == "Extremes":
        need = input("High or Low:")
        if need == "High":
            for u,v in data.items():
                if u == "targetHighPrice":
                    print("Highest Price ::",v)
        elif need == "Low":
            for u,v in data.items():
                if u == "targetLowPrice":
                    print("Least Price ::",v)
    elif want == "PE":
        need = input("Forward or Trailing:")
        if need == "Forward":
            for u,v in data.items():
                if u == "forwardPE":
                    print("Forward PE ::",v)   
        elif need == "Trailing":
            for u,v in data.items():
                if u == "trailingPE":
                    print("Trailing PE ::",v)
    elif want == 'Price':
        for u,v in data.items():
                if u == "preMarketPrice":
                    print("Market Price ::",v,"$")   
    elif want == 'Revenue':
        print(stock.revenue_forecasts)

elif choice == 2:
    want = input("For what category do you want the graph for[Dividends,Stocks Splits]:")
    if want == "Dividends":
        start = int(input("Enter the start year:"))
        stop = int(input("Enter the stop year:"))
        df = stock.dividends
        data=df.resample('Y').sum()
        data=data.reset_index()
        data['Year'] = data['Date'].dt.year
        plot.figure
        plot.bar(data['Year'],data["Dividends"])
        plot.xlabel('Year')
        plot.xlim(start,stop)
        plot.show()
    elif want == "Stocks Splits":
        start = int(input("Enter the start year:"))
        stop = int(input("Enter the stop year:"))
        df = stock.splits
        data=df.resample('Y').sum()
        data=data.reset_index()
        data['Year'] = data['Date'].dt.year
        plot.figure
        plot.bar(data['Year'],data["Stock Splits"])
        plot.xlabel('Year')
        plot.xlim(start,stop)
        plot.show()

