# include "Object.h"


private GameObject *inventory;		/* objects contained */
private int capacity;			/* maximum inventory size */

/*
 * initialize container
 */
static void create(int capacity)
{
    inventory = ({ });
    ::capacity = capacity;
}
