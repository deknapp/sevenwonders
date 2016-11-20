#ifndef ArgProcessor_H
#define ArgProcessor_H

#include <vector>

#include "Card.h"
#include "Player.h"
#include "Wonder.h"

// to give args
// ./ swsim 7 -r 2 -p 2 "MS" -g 

// http://optionparser.sourceforge.net/

 #include "optionparser.h"

 enum  optionIndex { UNKNOWN, HELP, PLUS };
 const option::Descriptor usage[] =
 {
  {UNKNOWN, 0,"" , ""    ,option::Arg::None, "USAGE: example [options]\n\n"
                                             "Options:" },
  {HELP,    0,"" , "help",option::Arg::None, "  --help  \tPrint usage and exit." },
  {PLUS,    0,"p", "plus",option::Arg::None, "  --plus, -p  \tIncrement count." },
  {UNKNOWN, 0,"" ,  ""   ,option::Arg::None, "\nExamples:\n"
                                             "  example --unknown -- --this_is_no_option\n"
                                             "  example -unk --plus -ppp file1 file2\n" },
  {0,0,0,0,0,0}
 };


class ArgProcessor {

 public:

	ArgProcessor(int argc, char* argv[]);
	int getNumGames();
	int getNumPlayers();
	std::vector<Strategy> getStrategies();

 private:

 	std::vector<std::vector<std::string>> strategies;
 	int numPlayers;
 	int numGames;

 	// prevent generated functions --------------------------------------------
	ArgProcessor(const ArgProcessor&);
	ArgProcessor& operator=(const ArgProcessor&);
};

#endif /* ArgProcessor_H */

