/* See LICENSE file for copyright and license details. */

/* interval between updates (in ms) */
const unsigned int interval = 1000;

/* text to show if no value can be retrieved */
static const char unknown_str[] = "n/a";

/* maximum output string length */
#define MAXLEN 2048

/* See config.def.h for a list of possible options */
static const struct arg args[] = {
	/* function format          argument */
    { battery_state, " BAT %s", "BAT0" },
    { battery_perc, "%s% | ", "BAT0" },
	{ datetime, "%s | ",           "%F %H:%M" },
    { ipv4, "%s ", "wlp108s0" },
};
