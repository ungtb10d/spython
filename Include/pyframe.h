/* Limited C API of PyFrame API
 *
 * Include "frameobject.h" to get the PyFrameObject structure.
 */

#ifndef Py_PYFRAME_H
#define Py_PYFRAME_H
#ifdef __cplusplus
extern "C" {
#endif

/* Return the line of code the frame is currently executing. */
PyAPI_FUNC(int) PyFrame_GetLineNumber(PyFrameObject *);

PyAPI_FUNC(PyCodeObject *) PyFrame_GetCode(PyFrameObject *frame);

#ifndef Py_LIMITED_API
#  define Py_spython_PYFRAME_H
#  include "spython/pyframe.h"
#  undef Py_spython_PYFRAME_H
#endif

#ifdef __cplusplus
}
#endif
#endif /* !Py_PYFRAME_H */
