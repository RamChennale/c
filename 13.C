/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include "time.h"

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include "sys\stat.h"

#include "stdio.h"

void main()

{

    struct stat status;

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    FILE *fp;

    fp=fopen("test.txt","r");

    fstat(fileno(fp),&status);

    clrscr();

    printf("Last date of modification : %s",ctime(&status.st_ctime));

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    getch();

 

}

Explanation: 

Function int fstat(char *, struct stat *) store the  information of open file in form of  structure struct stat

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 

Structure struct stat has been defined in sys\stat.h as 

struct stat {

    short  st_dev,   st_ino;

    short  st_mode,  st_nlink;

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    int    st_uid,   st_gid;

    short  st_rdev;

    long   st_size,  st_atime;

    long   st_mtime, st_ctime;

};

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
Here 

(e)st_dev: It describe file has stored in which drive of your computer.

(f)st_mode:  It describes various modes of file like file is read only, write only, folder, character file etc.

(g)st_size: It tells the size of file in byte.

(h)st_ctime:It tells last data of modification of the file in date format.

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
Function ctime convert date type in string format 



/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */