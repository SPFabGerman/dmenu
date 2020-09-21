/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 0;                    /* minimum width when centered */
static int animated = 1;
static int framecount = 8;
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] = {
	"MesloLGS NF:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#005577" },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
	[SchemeBorder] = { "#000000" /* ignored */, "#005577" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
/* Size of the window border in Center / Line Mode.
 * Is only taken into account if border_width is 0. */
static unsigned int border_width_center = 2;

