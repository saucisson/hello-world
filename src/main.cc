#include <fstream>
#include <sstream>
#include <cstdlib>

int
main ()
{
  std::stringstream program;
  std::ifstream input ("/usr/share/hello-world/program.c");
  program << input.rdbuf();
  input.close ();
  std::ofstream output ("hello.c");
  output << program.str ();
  output.close ();
  system ("tcc -run hello.c");
  return EXIT_SUCCESS;
}
