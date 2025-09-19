#include <stdio.h>
#include <string.h>

typedef struct
{
    void (*open)(void);
    void (*read)(void);
    void (*write)(const char *data);
    void (*close)(void);
} FileOps;

typedef struct
{
    char buffer[100];
    int pos;
    FileOps *ops;
} MemFile;

void mem_open(void) { printf("MemFile: opened\n"); }
void mem_read(void) { printf("MemFile: read\n"); }
void mem_write(const char *data) { printf("MemFile: wrote '%s'\n", data); }
void mem_close(void) { printf("MemFile: closed\n"); }

FileOps memFileOps = {
    .open = mem_open,
    .read = mem_read,
    .write = mem_write,
    .close = mem_close};

int main()
{
    MemFile f = {.pos = 0, .ops = &memFileOps};
    f.ops->open();
    f.ops->write("Hello");
    f.ops->read();
    f.ops->close();

    return 0;
}