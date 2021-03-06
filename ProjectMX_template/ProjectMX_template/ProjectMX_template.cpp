/*
 * Project MX - template
 * 
 * notes:
 * -
 * 
 * todo:
 * -
 *
 * history:
 * - WG28DEC17: create template
 * 
 */

#include "stdafx.h"

#include <stdio.h>
#include <string.h>
#include "XPLMDisplay.h"
#include "XPLMGraphics.h"

/*
 * XPluginStart
 *
 */
PLUGIN_API int XPluginStart(char *outName, char *outSig, char *outDesc) {

	strcpy_s(outName, 40, "Project MX");
	strcpy_s(outSig, 60, "xplanesdk.projectmx.template");
	strcpy_s(outDesc, 200, "A plugin called Project MX for Mission Planner and XPlane integration.");

	return 1;
}

/*
 * XPluginStop
 *
 */
PLUGIN_API void	XPluginStop(void) {

}

/*
 * XPluginDisable
 *
 */
PLUGIN_API void XPluginDisable(void) {

}

/*
 * XPluginEnable.
 *
 */
PLUGIN_API int XPluginEnable(void) {

	return 1;
}

/*
 * XPluginReceiveMessage
 *
 */
PLUGIN_API void XPluginReceiveMessage(XPLMPluginID	inFromWho, int inMessage, void *inParam) {

}