#include<stdio.h> 
int main() { char s1[]="new delhi"; char s2[]="bangalore"; strncpy(s1,s2,3); printf("%s",s1); }