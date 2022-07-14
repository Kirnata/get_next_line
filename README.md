# GNL 🤖
 [![Intro](https://img.shields.io/badge/Cursus-GNL-success?style=for-the-badge&logo=42)](https://github.com/Kirnata/get_next_line.git)<br>
 
## "Reading a line from a fd is way too tedious"

## Cloning <br>
```
git clone https://github.com/Kirnata/get_next_line.git
```
## Function Prototype
```c
int	get_next_line(int fd, char **line);
```
## Compilation

**GNL Mandatory Part**

Your program must compile with the flag -D **BUFFER_SIZE=xx** 
(the buffer size for the read calls in your get_next_line)

**GNL with files**
```bash
gcc tests/main.c -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

./a.out tests/files/part1_test01_with_lines
```

**GNL with standard input (stdin)**
```bash
gcc tests/main_stdin.c -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c

./a.out
```

**GNL Bonus Part**

Bonus get_next_line() can manage multiple file descriptors at the same time.<br>
We can read from a different fd per call without losing the reading thread of each file descriptor or returning a line from another fd.<br>
```bash
gcc tests/main_bonus.c -g -Wall -Wextra -Werror -D BUFFER_SIZE=1 get_next_line_bonus.c get_next_line_utils_bonus.c

./a.out
```
