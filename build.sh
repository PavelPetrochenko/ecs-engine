#!/bin/bash
 
######  ####   ####        ###### #    #  ####  # #    # ###### 
#      #    # #            #      ##   # #    # # ##   # #      
#####  #       ####  ##### #####  # #  # #      # # #  # #####  
#      #           #       #      #  # # #  ### # #  # # #      
#      #    # #    #       #      #   ## #    # # #   ## #      
######  ####   ####        ###### #    #  ####  # #    # ###### 

GREEN='\033[1;92m'
RED='\033[1;31m'
NC='\033[0m'

echo -e \\a${GREEN}[MESON BUILD]${NC}
if (exec meson build .)
then
    cd build
    echo -e \\a${GREEN}[NINJA BUILD]${NC}
    if (exec ninja)
    then
	echo -e \\a${GREEN}[TEST]${NC}
	if (exec ninja test)
	then
	    echo -e \\a${GREEN}[ALL COMPLETE]${NC}
	else
	    echo -e \\a${RED}[TEST ERROR]${NC}
	fi
    else
	echo -e \\a${RED}[NINJA BUILD ERROR]${NC}
    fi
else
    echo -e \\a${RED}[MESON BUILD ERROR]${NC}
fi

