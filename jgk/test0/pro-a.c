#include<stdio.h>
#include<unistd.h>

int main(){
    sleep(5);

    const char * str = "hello world\n";
    printf(str);

    FILE *output_file = fopen("output.txt", "w");
    fputs(str, output_file);
    fclose(output_file);

    return 0;
}