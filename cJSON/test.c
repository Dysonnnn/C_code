/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cJSON.h"
int main(int argc, char const *argv[])
{
    int i;
    cJSON *root = cJSON_CreateObject();
    cJSON_AddItemToObject(root, "name", cJSON_CreateString("abc"));
    cJSON_AddItemToObject(root, "age", cJSON_CreateString("20"));
    printf("cJSON : %s\n", cJSON_Print(root));
    return 0;
}