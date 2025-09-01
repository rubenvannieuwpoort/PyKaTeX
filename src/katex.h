#ifndef KATEX_H
#define KATEX_H

#include <stdbool.h>

typedef enum {
  CKATEX_OUTPUT_TYPE_HTML = 0,
  CKATEX_OUTPUT_TYPE_MATHML,
  KATEX_OUTPUT_TYPE_HTML_AND_MATHML,
} KatexOutputType;

typedef enum {
  CKATEX_STRICT_TYPE_IGNORE = 0,
  KATEX_STRICT_TYPE_WARN,
  CKATEX_STRICT_TYPE_ERROR,
} KatexStrictType;

typedef struct {
  bool *display_mode;
  KatexOutputType *output;
  bool *leqno;
  bool *fleqn;
  bool *throw_on_error;
  const char *error_color;
  // TODO: macros
  const double *min_rule_thickness;
  bool *color_is_text_color;
  const double *max_size;
  double *max_expand;
  KatexStrictType *strict;
  bool *trust;
  bool *global_group;
} KatexOptions;

typedef struct {
	const char *name;
	const char *message;
} JSException;

void katex_initialize(void);
const char *katex_renderToString(const char *input, KatexOptions *options);
JSException *katex_get_last_error(void);
void katex_finalize(void);

void hello(void);  // TODO(Ruben): remove

#endif
