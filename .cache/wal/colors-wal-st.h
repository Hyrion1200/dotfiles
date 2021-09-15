const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0c120d", /* black   */
  [1] = "#6d9b24", /* red     */
  [2] = "#6b8835", /* green   */
  [3] = "#5a81b0", /* yellow  */
  [4] = "#ce9735", /* blue    */
  [5] = "#bd46a4", /* magenta */
  [6] = "#c6e975", /* cyan    */
  [7] = "#ddddd0", /* white   */

  /* 8 bright colors */
  [8]  = "#6cc078",  /* black   */
  [9]  = "#b2b881",  /* red     */
  [10] = "#8ebd38", /* green   */
  [11] = "#ccce7a", /* yellow  */
  [12] = "#89be81", /* blue    */
  [13] = "#b4d49d", /* magenta */
  [14] = "#e0f4b0", /* cyan    */
  [15] = "#fffff7", /* white   */

  /* special colors */
  [256] = "#0c120d", /* background */
  [257] = "#fffff7", /* foreground */
  [258] = "#fffff7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
