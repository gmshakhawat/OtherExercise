#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdbool.h>

static size_t deleteLine( char*, size_t, const char* );

int main(int argc, char* argv[])
{
  char file[] = "yourfile.txt";

  if ( --argc )
  {
    struct stat st;
    if ( stat( file, &st ) != -1 )
    {
      // open the file in binary format
      FILE* fp = fopen( file, "rb" );
      if ( fp != NULL )
      {
        // allocate memory to hold file
        char* buffer = malloc( st.st_size );

        // read the file into a buffer
        if ( fread(buffer, 1, st.st_size, fp) == st.st_size)
        {
          fclose(fp);

          size_t newSize = deleteLine( buffer, st.st_size, argv[1] );

          fp = fopen( file, "wb" );
          if ( fp != NULL )
          {
            fwrite(buffer, 1, newSize, fp);
            fclose(fp);
          }
          else
          {
            perror(file);
          }
        }
        free(buffer);
      }
      else
      {
        perror(file);
      }
    }
    else
    {
      printf( "did not find %s", file );
    }
  }
  return 0;
}

static size_t deleteLine( char* buffer, size_t size, const char* playerName )
{
  // file format assumed to be as specified in the question i.e. name{space}somevalue{space}someothervalue\n
  // find playerName
  char* p = buffer;
  bool done = false;
  size_t len = strlen(playerName);
  size_t newSize = 0;
  do
  {
    char* q = strchr( p, *playerName ); // look for first letter in playerName
    if ( q != NULL )
    {
      if ( strncmp( q, playerName, len ) == 0 ) // found name?
      {
        size_t lineSize = 1; // include \n already in line size

        // count number of characters the line has.
        char* Line;
        for ( line = q; *line != '\n'; ++line)
        {
          ++lineSize;
        }

        // calculate length left after line by subtracting offsets
        size_t restSize = (size_t)((buffer + size) - (q + lineSize));

        // move block with next line forward
        memmove( q, q + lineSize, restSize );

        // calculate new size
        newSize = size - lineSize;
        done = true;
      }
      else
      {
        p = q + 1; // continue search
      }
    }
    else
    {
      puts( "no such name" );
      done = true;
    }
  }
  while (!done);

  return newSize;
}
