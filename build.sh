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

echo -e \\a${GREEN}[GENERATION]${NC}
if ()
then
	echo -e \\a${GREEN}[BUILD]${NC}
    if ()
    then
		echo -e \\a${GREEN}[TEST]${NC}	
		if ()
		then
			echo -e \\a${GREEN}[ALL COMPLETE]${NC}    
		else
			echo -e \\a${RED}[TEST ERROR]${NC}	    
		fi
    else
		echo -e \\a${RED}[BUILD ERROR]${NC}	
    fi
else
	echo -e \\a${RED}[GENERATION ERROR]${NC}
fi