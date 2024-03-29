/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include "time.h"

#include "sys\stat.h"

#include "stdio.h"

void main()
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

{

    struct stat status;

    FILE *fp;

    fp=fopen("test.txt","r");

    fstat(fileno(fp),&status);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

    clrscr();

    printf("Size of file : %d",status.st_size);

    printf("Drive name   : %c",65+status.st_dev);

    getch();

 
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

}

 

Explanation:

Function int fstat (char *, struct stat *) store the information of open file in form of structure struct stat

 
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

(a)st_dev: It describe file has stored in which 

   drive of your computer  ,it returns a number.

(b)st_mode:  It describes various modes of file 

   like file is read only, write only, folder, 

   character file etc.
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

(c)st_size: It tells the size of file in byte.

(d)st_ctime:It tells last data of modification of 

   the file in date format.

Note: 65 is ASCII value of A .So after adding status.st_dev with 65 it will return appropriate drvie name as in your computer.

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */