#include <stdio.h>

typedef char userName[25];

struct usertype1{
    char name[25];
    char password[25];
    int uid;
};


typedef struct{
    char name[25];
    char password[25];
    int uid;
} usertype2;


int main () {
    userName u1 = "wowow";

    struct usertype1 u2 = {"derek", "NotAGreatpa$$word", 1};

    struct usertype1 u3 = {"derek2", "N0tAGrætp@$$w079", 2};
    struct usertype1 u4 = {"derek3", "n0tAGræt6@$$w079", 3};
    struct usertype1 u5 = {"derek4", "Nillætp@$$w079", 2};

    printf("%s\n", u1);
    printf("%s, %s\n", u2.name, u2.password);
    printf("%s, %s\n", u3.name, u3.password);



    struct usertype1 users[] = {u3,u4,u5};


    printf("%s, %s\n", users[0].name, users[0].password);

    return 0;
}