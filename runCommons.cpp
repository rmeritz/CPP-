#include <fstream> 
#include <time.h>
using namespace std;

int main (int argc, char* argv[])
{

  time_t rawtime;
  struct tm * timeinfo;
  
  time (&rawtime);
  timeinfo = localtime ( &rawtime);
  char buffer [80];
  strftime (buffer, 80,"%x, h:%H",timeinfo);

  fstream filestr;

  filestr.open ("runCommon.txt", fstream::out | fstream::app);

  filestr << argv[1] << ", " << buffer <<"," <<"\n"; 

  filestr.close();

  return 0;

}
