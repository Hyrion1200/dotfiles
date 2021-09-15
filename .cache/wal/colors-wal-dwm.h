static const char norm_fg[] = "#fffff7";
static const char norm_bg[] = "#0c120d";
static const char norm_border[] = "#6cc078";

static const char sel_fg[] = "#fffff7";
static const char sel_bg[] = "#6b8835";
static const char sel_border[] = "#fffff7";

static const char urg_fg[] = "#fffff7";
static const char urg_bg[] = "#6d9b24";
static const char urg_border[] = "#6d9b24";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
