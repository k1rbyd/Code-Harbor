// An example program to demonstrate working
// of enum in C
#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

int main()
{
	enum week day;
	day = Wed;
	printf("%d",day);
	return 0;
}

// Another example program to demonstrate working
// of enum in C
#include<stdio.h>

enum year{Jan, Feb, Mar, Apr, May, Jun, Jul,
		Aug, Sep, Oct, Nov, Dec};

int main()
{
int i;
for (i=Jan; i<=Dec; i++)	
	printf("%d ", i);
	
return 0;
}

#include <stdio.h>
enum State {Working = 1, Failed = 0, Freezed = 0};

int main()
{
printf("%d, %d, %d", Working, Failed, Freezed);
return 0;
}


#include <stdio.h>
enum day {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main()
{
	enum day d = thursday;
	printf("The day number stored in d is %d", d);
	return 0;
}


#include <stdio.h>
enum day {sunday = 1, monday, tuesday = 5,
		wednesday, thursday = 10, friday, saturday};

int main()
{
	printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
			wednesday, thursday, friday, saturday);
	return 0;
}


#include <stdio.h>
enum day {sunday = 1, tuesday, wednesday, thursday, friday, saturday};

int main()
{
	enum day d = thursday;
	printf("The day number stored in d is %d", d);
	return 0;
}

#include <stdio.h>
enum State {WORKING = 0, FAILED, FREEZED};
enum State currState = 2;

enum State FindState() {
	return currState;
}

int main() {
(FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");
return 0;
}

