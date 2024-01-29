#include <fcntl.h>
#include <stdio.h>
#include "../includes/libft.h"
 int    main()
 {
     int fd;
     char *line;

     fd = open("file.txt", O_RDONLY);
     line = NULL;
      do
      {
          if (line)
          {
              free(line);
              line = NULL;
          }
          line = get_next_line(fd);
          printf("%s", line);
      } while (line);
     close(fd);
 }

// line = "fkjdahsfkadhf";
//  while (line != NULL)
//  {
//     line = get_next_line(fd);
//     printf("%s", line);
//     if (line)
//     {
//         free (line)
//         line = NULL;
//     }
//  }