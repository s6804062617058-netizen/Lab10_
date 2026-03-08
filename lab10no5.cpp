#include <stdio.h>
#include <string.h>

typedef struct {
    char loginname[64];
    char password[64];
} account;

typedef struct {
    char stdID[16];
    char nameSurname[25];
    account stdACC; 
} hoststd;

int main() {
    hoststd cs[5] = {
        {"66-040626-2686-9", "MR.A", {"user1", "passwd1"}},
        {"66-040626-0001-1", "MR.B", {"user2", "passwd2"}},
        {"66-040626-0002-2", "MR.C", {"user3", "passwd3"}},
        {"66-040626-0003-3", "MR.D", {"user4", "passwd4"}},
        {"66-040626-0004-4", "MR.E", {"user5", "passwd5"}}
    };

    char input_user[64];
    char input_pass[64];
    int found = 0;

    printf("Username: ");
    scanf("%s", input_user);
    printf("Password: ");
    scanf("%s", input_pass);
    
    int i;
    for (i = 0; i < 5; i++) {
        if (strcmp(cs[i].stdACC.loginname, input_user) == 0 && 
            strcmp(cs[i].stdACC.password, input_pass) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }

    return 0;
}
