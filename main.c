#include <stdio.h>
#include <stdlib.h>
#include "webLinks.h"

int main()
{
    WebLinks* my_links = init();

    char* link1 = "https://google.com.br";
    char* link2 = "https://facebook.com.br";
    char* link3 = "https://youtube.com.br";

    char* keyword = "rede social";

    add_start(&my_links,link1,keyword);
    add_start(&my_links,link2,keyword);
    add_start(&my_links,link3,keyword);

    toString(my_links);

    close(my_links);
    return 0;
}
