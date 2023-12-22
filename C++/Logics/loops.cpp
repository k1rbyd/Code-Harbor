/*
Loops
-----

==> for loop

==> while loop  {condition is checked before the iteration starts}

==> do-while loop       {condition is checked after iteration}

For Loop
---------

==> syntax,

for(initialization;condition;increment/decrement)
{
        .
        .
        statements
        .
        .
}

Range-Based For Loop
----------------------

==> syntax,

for (variable_type variable_name : sequence)
{
        .
        .
        statements
        .
        .
}

eg:

int scores[] {100,90,97};
for(int score:scores)
{
        cout<<score<<endl;
}

we can also use "auto" data type

i.e.

int scores[] {100,90,89};
for(auto score:scores)
{
        cout<<score<<endl;
}

--> this is used to loop thro a collection of data items

while loop
-----------

==> syntax,

while (condition)
{
    .
    .
    statements
    .
    .
}

--> we can also use boolen condtions as the base condtion for the while loop,

eg:

bool done{false};

while(!done)
{
    if......
    {
        ..
        .
    }
    else....
    {
        ..
        .
        done=true;      //when this runs, the while loop is terminated as the base constion now fails
    }
}

do-while loop
--------------

==> syntax,

do
{
    .
    .
    statements
    .
    .
}
while (condition);

--> this will always run atleast once



*/