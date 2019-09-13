/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include "time.h"

#include "sys\stat.h"

#include "stdio.h"

void main()
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

{

    struct stat status;

    FILE *fp;

    stat("test.txt",&status);

    clrscr();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

    if (status.st_mode & S_IREAD)

         printf("You have read permission.\n");

    if (status.st_mode & S_IWRITE)

         printf("You have write permission.");

    getch();
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 

}

Explanation: 

Function  int stat(char *, struct stat *) store the  information of open file in form of  structure struct stat

 
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

Structure struct stat has been defined in sys\stat.h as 

struct stat {

    short  st_dev,   st_ino;

    short  st_mode,  st_nlink;

    int    st_uid,   st_gid;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

    short  st_rdev;

    long   st_size,  st_atime;

    long   st_mtime, st_ctime;

};

Here 
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

(i)st_dev: It describe file has stored in which drive of your computer.

(j)st_mode:  It describe various mode of file like file is read  only, write only, folder, character file etc.

(k)st_size: It tells the size of file in byte.

(l)St_ctime:It tells last data of modification of the file. 

 
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

There are some macro has been defined in sys\stat.h

 

 Name          Meaning

 S_IFMT       File type mask

 S_IFDIR      Directory
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 S_IFIFO      FIFO special

 S_IFCHR      Character special

 S_IFBLK      Block special

 S_IFREG      Regular file

 S_IREAD      Owner can read
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 S_IWRITE     Owner can write

 S_IEXEC      Owner can execute

 

So masking or bit wise and operation between status.st_mode and S_IREAD return true you have read permission and so on

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */