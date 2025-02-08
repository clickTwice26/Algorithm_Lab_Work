#include <stdio.h>

int main() {
    char str_array[100];
    scanf("%s",str_array);
    
    int string_length = 0;
    while (1) {
        if (str_array[string_length]== '\0') {
            break;
        }
        string_length = string_length+ 1;
    }

    int is_first_print=1;

    for(int current_length = 1; current_length <= string_length; current_length++) {
        for (int starting_pos = 0;starting_pos <= string_length - current_length; starting_pos++) {
            if (is_first_print== 1) {
                is_first_print = 0;
            } else{
                printf(",");
            }
            
            for (int char_pos = starting_pos; char_pos< starting_pos + current_length; char_pos++) {
                char current_char = str_array[char_pos];
                printf("%c",current_char);
            }
        }
    }
    return 0;
}