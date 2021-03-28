/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy  = 1;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
  "Iosevka nf:size=12",
  "Noto Color Emoji"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
  /*     fg         bg       */
  [SchemeNorm] = { "#f8f8f2", "#282a36" },
  [SchemeSel] = { "#f8f8f2", "#44475a" },
  [SchemeSelHighlight] = { "#5af78e", "#44475a" },
  [SchemeNormHighlight] = { "#5af78e", "#282a36" },
  [SchemeOut] = { "#6272a4", "#5af78e" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 23;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
