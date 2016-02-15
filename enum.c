#include <stdio.h>

enum week{ sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main(){
    enum week today;
    today=wednesday;
    printf("%d day",today+1);
    return 0;
   }
/*
// Declaration of enumerated variable
enum boolean{
    false;
    true;
};

// Changing the default value of enum elements
enum boolean check;
enum suit{
    club=0;
    diamonds=10;
    hearts=20;
    spades=3;
};
*/