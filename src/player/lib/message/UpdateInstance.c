# include "Message.h"

inherit GenericMessage;


/*
 * create UpdateInstance
 */
static void create(object obj, int property)
{
    ::create(MSG_UPDATE_INSTANCE, serialize("i", obj->id()) +
				  obj->getInstanceProperty(property));
}
