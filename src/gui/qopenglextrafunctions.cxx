//  header block begin

// since 0x050600
// /usr/include/qt/QtGui/qopenglextrafunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglextrafunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLExtraFunctions is pure virtual: false
// QOpenGLExtraFunctions has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQOpenGLExtraFunctions_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLExtraFunctions_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLExtraFunctions_t qt_meta_stringdata_MyQOpenGLExtraFunctions = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQOpenGLExtraFunctions"
  },
  "MyQOpenGLExtraFunctions"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLExtraFunctions[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQOpenGLExtraFunctions : public QOpenGLExtraFunctions {
public:
  virtual ~MyQOpenGLExtraFunctions() {}
// void QOpenGLExtraFunctions()
MyQOpenGLExtraFunctions() : QOpenGLExtraFunctions() {}
// void QOpenGLExtraFunctions(QOpenGLContext *)
MyQOpenGLExtraFunctions(QOpenGLContext * context) : QOpenGLExtraFunctions(context) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:238
// [-2] void QOpenGLExtraFunctions()
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLExtraFunctionsC2Ev() {
  return  new QOpenGLExtraFunctions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:239
// [-2] void QOpenGLExtraFunctions(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLExtraFunctionsC2EP14QOpenGLContext(QOpenGLContext * context) {
  return  new QOpenGLExtraFunctions(context);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:240
// [-2] void ~QOpenGLExtraFunctions()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctionsD2Ev(void *this_) {
  delete (QOpenGLExtraFunctions*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:243
// [-2] void glReadBuffer(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glReadBufferEj(void *this_, GLenum mode) {
  ((QOpenGLExtraFunctions*)this_)->glReadBuffer(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:244
// [-2] void glDrawRangeElements(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glDrawRangeElementsEjjjijPKv(void *this_, GLenum mode, GLuint start, GLuint end_, GLsizei count, GLenum type_, const void * indices) {
  ((QOpenGLExtraFunctions*)this_)->glDrawRangeElements(mode, start, end_, count, type_, indices);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:245
// [-2] void glTexImage3D(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glTexImage3DEjiiiiiijjPKv(void *this_, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type_, const void * pixels) {
  ((QOpenGLExtraFunctions*)this_)->glTexImage3D(target, level, internalformat, width, height, depth, border, format, type_, pixels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:246
// [-2] void glTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glTexSubImage3DEjiiiiiiijjPKv(void *this_, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type_, const void * pixels) {
  ((QOpenGLExtraFunctions*)this_)->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type_, pixels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:247
// [-2] void glCopyTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glCopyTexSubImage3DEjiiiiiiii(void *this_, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
  ((QOpenGLExtraFunctions*)this_)->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:248
// [-2] void glCompressedTexImage3D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glCompressedTexImage3DEjijiiiiiPKv(void *this_, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void * data) {
  ((QOpenGLExtraFunctions*)this_)->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:249
// [-2] void glCompressedTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glCompressedTexSubImage3DEjiiiiiiijiPKv(void *this_, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void * data) {
  ((QOpenGLExtraFunctions*)this_)->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:250
// [-2] void glGenQueries(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glGenQueriesEiPj(void *this_, GLsizei n, GLuint * ids) {
  ((QOpenGLExtraFunctions*)this_)->glGenQueries(n, ids);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:251
// [-2] void glDeleteQueries(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glDeleteQueriesEiPKj(void *this_, GLsizei n, const GLuint * ids) {
  ((QOpenGLExtraFunctions*)this_)->glDeleteQueries(n, ids);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:252
// [1] GLboolean glIsQuery(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions9glIsQueryEj(void *this_, GLuint id) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glIsQuery(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:253
// [-2] void glBeginQuery(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glBeginQueryEjj(void *this_, GLenum target, GLuint id) {
  ((QOpenGLExtraFunctions*)this_)->glBeginQuery(target, id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:254
// [-2] void glEndQuery(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions10glEndQueryEj(void *this_, GLenum target) {
  ((QOpenGLExtraFunctions*)this_)->glEndQuery(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:255
// [-2] void glGetQueryiv(GLenum, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glGetQueryivEjjPi(void *this_, GLenum target, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetQueryiv(target, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:256
// [-2] void glGetQueryObjectuiv(GLuint, GLenum, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glGetQueryObjectuivEjjPj(void *this_, GLuint id, GLenum pname, GLuint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetQueryObjectuiv(id, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:257
// [1] GLboolean glUnmapBuffer(GLenum)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions13glUnmapBufferEj(void *this_, GLenum target) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glUnmapBuffer(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:258
// [-2] void glGetBufferPointerv(GLenum, GLenum, void **)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glGetBufferPointervEjjPPv(void *this_, GLenum target, GLenum pname, void ** params) {
  ((QOpenGLExtraFunctions*)this_)->glGetBufferPointerv(target, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:259
// [-2] void glDrawBuffers(GLsizei, const GLenum *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glDrawBuffersEiPKj(void *this_, GLsizei n, const GLenum * bufs) {
  ((QOpenGLExtraFunctions*)this_)->glDrawBuffers(n, bufs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:260
// [-2] void glUniformMatrix2x3fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glUniformMatrix2x3fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniformMatrix2x3fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:261
// [-2] void glUniformMatrix3x2fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glUniformMatrix3x2fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniformMatrix3x2fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:262
// [-2] void glUniformMatrix2x4fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glUniformMatrix2x4fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniformMatrix2x4fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:263
// [-2] void glUniformMatrix4x2fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glUniformMatrix4x2fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniformMatrix4x2fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:264
// [-2] void glUniformMatrix3x4fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glUniformMatrix3x4fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniformMatrix3x4fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:265
// [-2] void glUniformMatrix4x3fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glUniformMatrix4x3fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniformMatrix4x3fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:266
// [-2] void glBlitFramebuffer(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glBlitFramebufferEiiiiiiiijj(void *this_, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
  ((QOpenGLExtraFunctions*)this_)->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:267
// [-2] void glRenderbufferStorageMultisample(GLenum, GLsizei, GLenum, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions32glRenderbufferStorageMultisampleEjijii(void *this_, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
  ((QOpenGLExtraFunctions*)this_)->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:268
// [-2] void glFramebufferTextureLayer(GLenum, GLenum, GLuint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glFramebufferTextureLayerEjjjii(void *this_, GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
  ((QOpenGLExtraFunctions*)this_)->glFramebufferTextureLayer(target, attachment, texture, level, layer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:269
// [8] void * glMapBufferRange(GLenum, GLintptr, GLsizeiptr, GLbitfield)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLExtraFunctions16glMapBufferRangeEjllj(void *this_, GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
  return (void*)((QOpenGLExtraFunctions*)this_)->glMapBufferRange(target, offset, length, access);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:270
// [-2] void glFlushMappedBufferRange(GLenum, GLintptr, GLsizeiptr)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glFlushMappedBufferRangeEjll(void *this_, GLenum target, GLintptr offset, GLsizeiptr length) {
  ((QOpenGLExtraFunctions*)this_)->glFlushMappedBufferRange(target, offset, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:271
// [-2] void glBindVertexArray(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glBindVertexArrayEj(void *this_, GLuint array) {
  ((QOpenGLExtraFunctions*)this_)->glBindVertexArray(array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:272
// [-2] void glDeleteVertexArrays(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glDeleteVertexArraysEiPKj(void *this_, GLsizei n, const GLuint * arrays) {
  ((QOpenGLExtraFunctions*)this_)->glDeleteVertexArrays(n, arrays);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:273
// [-2] void glGenVertexArrays(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glGenVertexArraysEiPj(void *this_, GLsizei n, GLuint * arrays) {
  ((QOpenGLExtraFunctions*)this_)->glGenVertexArrays(n, arrays);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:274
// [1] GLboolean glIsVertexArray(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions15glIsVertexArrayEj(void *this_, GLuint array) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glIsVertexArray(array);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:275
// [-2] void glGetIntegeri_v(GLenum, GLuint, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glGetIntegeri_vEjjPi(void *this_, GLenum target, GLuint index, GLint * data) {
  ((QOpenGLExtraFunctions*)this_)->glGetIntegeri_v(target, index, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:276
// [-2] void glBeginTransformFeedback(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glBeginTransformFeedbackEj(void *this_, GLenum primitiveMode) {
  ((QOpenGLExtraFunctions*)this_)->glBeginTransformFeedback(primitiveMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:277
// [-2] void glEndTransformFeedback()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glEndTransformFeedbackEv(void *this_) {
  ((QOpenGLExtraFunctions*)this_)->glEndTransformFeedback();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:278
// [-2] void glBindBufferRange(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glBindBufferRangeEjjjll(void *this_, GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
  ((QOpenGLExtraFunctions*)this_)->glBindBufferRange(target, index, buffer, offset, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:279
// [-2] void glBindBufferBase(GLenum, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions16glBindBufferBaseEjjj(void *this_, GLenum target, GLuint index, GLuint buffer) {
  ((QOpenGLExtraFunctions*)this_)->glBindBufferBase(target, index, buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:280
// [-2] void glTransformFeedbackVaryings(GLuint, GLsizei, const GLchar *const *, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glTransformFeedbackVaryingsEjiPKPKcj(void *this_, GLuint program, GLsizei count, const GLchar *const * varyings, GLenum bufferMode) {
  ((QOpenGLExtraFunctions*)this_)->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:281
// [-2] void glGetTransformFeedbackVarying(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions29glGetTransformFeedbackVaryingEjjiPiS0_PjPc(void *this_, GLuint program, GLuint index, GLsizei bufSize, GLsizei * length, GLsizei * size, GLenum * type_, GLchar * name) {
  ((QOpenGLExtraFunctions*)this_)->glGetTransformFeedbackVarying(program, index, bufSize, length, size, type_, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:282
// [-2] void glVertexAttribIPointer(GLuint, GLint, GLenum, GLsizei, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glVertexAttribIPointerEjijiPKv(void *this_, GLuint index, GLint size, GLenum type_, GLsizei stride, const void * pointer) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribIPointer(index, size, type_, stride, pointer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:283
// [-2] void glGetVertexAttribIiv(GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glGetVertexAttribIivEjjPi(void *this_, GLuint index, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetVertexAttribIiv(index, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:284
// [-2] void glGetVertexAttribIuiv(GLuint, GLenum, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glGetVertexAttribIuivEjjPj(void *this_, GLuint index, GLenum pname, GLuint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetVertexAttribIuiv(index, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:285
// [-2] void glVertexAttribI4i(GLuint, GLint, GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glVertexAttribI4iEjiiii(void *this_, GLuint index, GLint x, GLint y, GLint z, GLint w) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4i(index, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:286
// [-2] void glVertexAttribI4ui(GLuint, GLuint, GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glVertexAttribI4uiEjjjjj(void *this_, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4ui(index, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:287
// [-2] void glVertexAttribI4iv(GLuint, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glVertexAttribI4ivEjPKi(void *this_, GLuint index, const GLint * v) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4iv(index, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:288
// [-2] void glVertexAttribI4uiv(GLuint, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glVertexAttribI4uivEjPKj(void *this_, GLuint index, const GLuint * v) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4uiv(index, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:289
// [-2] void glGetUniformuiv(GLuint, GLint, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glGetUniformuivEjiPj(void *this_, GLuint program, GLint location, GLuint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetUniformuiv(program, location, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:290
// [4] GLint glGetFragDataLocation(GLuint, const GLchar *)
extern "C" Q_DECL_EXPORT
GLint C_ZN21QOpenGLExtraFunctions21glGetFragDataLocationEjPKc(void *this_, GLuint program, const GLchar * name) {
  return (GLint)((QOpenGLExtraFunctions*)this_)->glGetFragDataLocation(program, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:291
// [-2] void glUniform1ui(GLint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glUniform1uiEij(void *this_, GLint location, GLuint v0) {
  ((QOpenGLExtraFunctions*)this_)->glUniform1ui(location, v0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:292
// [-2] void glUniform2ui(GLint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glUniform2uiEijj(void *this_, GLint location, GLuint v0, GLuint v1) {
  ((QOpenGLExtraFunctions*)this_)->glUniform2ui(location, v0, v1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:293
// [-2] void glUniform3ui(GLint, GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glUniform3uiEijjj(void *this_, GLint location, GLuint v0, GLuint v1, GLuint v2) {
  ((QOpenGLExtraFunctions*)this_)->glUniform3ui(location, v0, v1, v2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:294
// [-2] void glUniform4ui(GLint, GLuint, GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glUniform4uiEijjjj(void *this_, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
  ((QOpenGLExtraFunctions*)this_)->glUniform4ui(location, v0, v1, v2, v3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:295
// [-2] void glUniform1uiv(GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glUniform1uivEiiPKj(void *this_, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniform1uiv(location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:296
// [-2] void glUniform2uiv(GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glUniform2uivEiiPKj(void *this_, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniform2uiv(location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:297
// [-2] void glUniform3uiv(GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glUniform3uivEiiPKj(void *this_, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniform3uiv(location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:298
// [-2] void glUniform4uiv(GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glUniform4uivEiiPKj(void *this_, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glUniform4uiv(location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:299
// [-2] void glClearBufferiv(GLenum, GLint, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glClearBufferivEjiPKi(void *this_, GLenum buffer, GLint drawbuffer, const GLint * value) {
  ((QOpenGLExtraFunctions*)this_)->glClearBufferiv(buffer, drawbuffer, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:300
// [-2] void glClearBufferuiv(GLenum, GLint, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions16glClearBufferuivEjiPKj(void *this_, GLenum buffer, GLint drawbuffer, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glClearBufferuiv(buffer, drawbuffer, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:301
// [-2] void glClearBufferfv(GLenum, GLint, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glClearBufferfvEjiPKf(void *this_, GLenum buffer, GLint drawbuffer, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glClearBufferfv(buffer, drawbuffer, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:302
// [-2] void glClearBufferfi(GLenum, GLint, GLfloat, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glClearBufferfiEjifi(void *this_, GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
  ((QOpenGLExtraFunctions*)this_)->glClearBufferfi(buffer, drawbuffer, depth, stencil);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:303
// [8] const GLubyte * glGetStringi(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLExtraFunctions12glGetStringiEjj(void *this_, GLenum name, GLuint index) {
  return (void*)((QOpenGLExtraFunctions*)this_)->glGetStringi(name, index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:304
// [-2] void glCopyBufferSubData(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glCopyBufferSubDataEjjlll(void *this_, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
  ((QOpenGLExtraFunctions*)this_)->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:305
// [-2] void glGetUniformIndices(GLuint, GLsizei, const GLchar *const *, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glGetUniformIndicesEjiPKPKcPj(void *this_, GLuint program, GLsizei uniformCount, const GLchar *const * uniformNames, GLuint * uniformIndices) {
  ((QOpenGLExtraFunctions*)this_)->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:306
// [-2] void glGetActiveUniformsiv(GLuint, GLsizei, const GLuint *, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glGetActiveUniformsivEjiPKjjPi(void *this_, GLuint program, GLsizei uniformCount, const GLuint * uniformIndices, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:307
// [4] GLuint glGetUniformBlockIndex(GLuint, const GLchar *)
extern "C" Q_DECL_EXPORT
GLuint C_ZN21QOpenGLExtraFunctions22glGetUniformBlockIndexEjPKc(void *this_, GLuint program, const GLchar * uniformBlockName) {
  return (GLuint)((QOpenGLExtraFunctions*)this_)->glGetUniformBlockIndex(program, uniformBlockName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:308
// [-2] void glGetActiveUniformBlockiv(GLuint, GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glGetActiveUniformBlockivEjjjPi(void *this_, GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:309
// [-2] void glGetActiveUniformBlockName(GLuint, GLuint, GLsizei, GLsizei *, GLchar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glGetActiveUniformBlockNameEjjiPiPc(void *this_, GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei * length, GLchar * uniformBlockName) {
  ((QOpenGLExtraFunctions*)this_)->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:310
// [-2] void glUniformBlockBinding(GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glUniformBlockBindingEjjj(void *this_, GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
  ((QOpenGLExtraFunctions*)this_)->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:311
// [-2] void glDrawArraysInstanced(GLenum, GLint, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glDrawArraysInstancedEjiii(void *this_, GLenum mode, GLint first, GLsizei count, GLsizei instancecount) {
  ((QOpenGLExtraFunctions*)this_)->glDrawArraysInstanced(mode, first, count, instancecount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:312
// [-2] void glDrawElementsInstanced(GLenum, GLsizei, GLenum, const void *, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glDrawElementsInstancedEjijPKvi(void *this_, GLenum mode, GLsizei count, GLenum type_, const void * indices, GLsizei instancecount) {
  ((QOpenGLExtraFunctions*)this_)->glDrawElementsInstanced(mode, count, type_, indices, instancecount);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:313
// [8] GLsync glFenceSync(GLenum, GLbitfield)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions11glFenceSyncEjj(void *this_, GLenum condition, GLbitfield flags) {
  auto rv = ((QOpenGLExtraFunctions*)this_)->glFenceSync(condition, flags);
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:314
// [1] GLboolean glIsSync(GLsync)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions8glIsSyncEP8__GLsync(void *this_, GLsync sync) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glIsSync(sync);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:315
// [-2] void glDeleteSync(GLsync)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions12glDeleteSyncEP8__GLsync(void *this_, GLsync sync) {
  ((QOpenGLExtraFunctions*)this_)->glDeleteSync(sync);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:316
// [4] GLenum glClientWaitSync(GLsync, GLbitfield, GLuint64)
extern "C" Q_DECL_EXPORT
GLenum C_ZN21QOpenGLExtraFunctions16glClientWaitSyncEP8__GLsyncjm(void *this_, GLsync sync, GLbitfield flags, GLuint64 timeout) {
  return (GLenum)((QOpenGLExtraFunctions*)this_)->glClientWaitSync(sync, flags, timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:317
// [-2] void glWaitSync(GLsync, GLbitfield, GLuint64)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions10glWaitSyncEP8__GLsyncjm(void *this_, GLsync sync, GLbitfield flags, GLuint64 timeout) {
  ((QOpenGLExtraFunctions*)this_)->glWaitSync(sync, flags, timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:318
// [-2] void glGetInteger64v(GLenum, GLint64 *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glGetInteger64vEjPl(void *this_, GLenum pname, GLint64 * data) {
  ((QOpenGLExtraFunctions*)this_)->glGetInteger64v(pname, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:319
// [-2] void glGetSynciv(GLsync, GLenum, GLsizei, GLsizei *, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions11glGetSyncivEP8__GLsyncjiPiS2_(void *this_, GLsync sync, GLenum pname, GLsizei bufSize, GLsizei * length, GLint * values) {
  ((QOpenGLExtraFunctions*)this_)->glGetSynciv(sync, pname, bufSize, length, values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:320
// [-2] void glGetInteger64i_v(GLenum, GLuint, GLint64 *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glGetInteger64i_vEjjPl(void *this_, GLenum target, GLuint index, GLint64 * data) {
  ((QOpenGLExtraFunctions*)this_)->glGetInteger64i_v(target, index, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:321
// [-2] void glGetBufferParameteri64v(GLenum, GLenum, GLint64 *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glGetBufferParameteri64vEjjPl(void *this_, GLenum target, GLenum pname, GLint64 * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetBufferParameteri64v(target, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:322
// [-2] void glGenSamplers(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glGenSamplersEiPj(void *this_, GLsizei count, GLuint * samplers) {
  ((QOpenGLExtraFunctions*)this_)->glGenSamplers(count, samplers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:323
// [-2] void glDeleteSamplers(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions16glDeleteSamplersEiPKj(void *this_, GLsizei count, const GLuint * samplers) {
  ((QOpenGLExtraFunctions*)this_)->glDeleteSamplers(count, samplers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:324
// [1] GLboolean glIsSampler(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions11glIsSamplerEj(void *this_, GLuint sampler) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glIsSampler(sampler);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:325
// [-2] void glBindSampler(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glBindSamplerEjj(void *this_, GLuint unit, GLuint sampler) {
  ((QOpenGLExtraFunctions*)this_)->glBindSampler(unit, sampler);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:326
// [-2] void glSamplerParameteri(GLuint, GLenum, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glSamplerParameteriEjji(void *this_, GLuint sampler, GLenum pname, GLint param) {
  ((QOpenGLExtraFunctions*)this_)->glSamplerParameteri(sampler, pname, param);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:327
// [-2] void glSamplerParameteriv(GLuint, GLenum, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glSamplerParameterivEjjPKi(void *this_, GLuint sampler, GLenum pname, const GLint * param) {
  ((QOpenGLExtraFunctions*)this_)->glSamplerParameteriv(sampler, pname, param);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:328
// [-2] void glSamplerParameterf(GLuint, GLenum, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glSamplerParameterfEjjf(void *this_, GLuint sampler, GLenum pname, GLfloat param) {
  ((QOpenGLExtraFunctions*)this_)->glSamplerParameterf(sampler, pname, param);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:329
// [-2] void glSamplerParameterfv(GLuint, GLenum, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glSamplerParameterfvEjjPKf(void *this_, GLuint sampler, GLenum pname, const GLfloat * param) {
  ((QOpenGLExtraFunctions*)this_)->glSamplerParameterfv(sampler, pname, param);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:330
// [-2] void glGetSamplerParameteriv(GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glGetSamplerParameterivEjjPi(void *this_, GLuint sampler, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetSamplerParameteriv(sampler, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:331
// [-2] void glGetSamplerParameterfv(GLuint, GLenum, GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glGetSamplerParameterfvEjjPf(void *this_, GLuint sampler, GLenum pname, GLfloat * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetSamplerParameterfv(sampler, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:332
// [-2] void glVertexAttribDivisor(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glVertexAttribDivisorEjj(void *this_, GLuint index, GLuint divisor) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribDivisor(index, divisor);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:333
// [-2] void glBindTransformFeedback(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glBindTransformFeedbackEjj(void *this_, GLenum target, GLuint id) {
  ((QOpenGLExtraFunctions*)this_)->glBindTransformFeedback(target, id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:334
// [-2] void glDeleteTransformFeedbacks(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions26glDeleteTransformFeedbacksEiPKj(void *this_, GLsizei n, const GLuint * ids) {
  ((QOpenGLExtraFunctions*)this_)->glDeleteTransformFeedbacks(n, ids);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:335
// [-2] void glGenTransformFeedbacks(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glGenTransformFeedbacksEiPj(void *this_, GLsizei n, GLuint * ids) {
  ((QOpenGLExtraFunctions*)this_)->glGenTransformFeedbacks(n, ids);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:336
// [1] GLboolean glIsTransformFeedback(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions21glIsTransformFeedbackEj(void *this_, GLuint id) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glIsTransformFeedback(id);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:337
// [-2] void glPauseTransformFeedback()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glPauseTransformFeedbackEv(void *this_) {
  ((QOpenGLExtraFunctions*)this_)->glPauseTransformFeedback();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:338
// [-2] void glResumeTransformFeedback()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glResumeTransformFeedbackEv(void *this_) {
  ((QOpenGLExtraFunctions*)this_)->glResumeTransformFeedback();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:339
// [-2] void glGetProgramBinary(GLuint, GLsizei, GLsizei *, GLenum *, void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glGetProgramBinaryEjiPiPjPv(void *this_, GLuint program, GLsizei bufSize, GLsizei * length, GLenum * binaryFormat, void * binary) {
  ((QOpenGLExtraFunctions*)this_)->glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:340
// [-2] void glProgramBinary(GLuint, GLenum, const void *, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glProgramBinaryEjjPKvi(void *this_, GLuint program, GLenum binaryFormat, const void * binary, GLsizei length) {
  ((QOpenGLExtraFunctions*)this_)->glProgramBinary(program, binaryFormat, binary, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:341
// [-2] void glProgramParameteri(GLuint, GLenum, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramParameteriEjji(void *this_, GLuint program, GLenum pname, GLint value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramParameteri(program, pname, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:342
// [-2] void glInvalidateFramebuffer(GLenum, GLsizei, const GLenum *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glInvalidateFramebufferEjiPKj(void *this_, GLenum target, GLsizei numAttachments, const GLenum * attachments) {
  ((QOpenGLExtraFunctions*)this_)->glInvalidateFramebuffer(target, numAttachments, attachments);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:343
// [-2] void glInvalidateSubFramebuffer(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions26glInvalidateSubFramebufferEjiPKjiiii(void *this_, GLenum target, GLsizei numAttachments, const GLenum * attachments, GLint x, GLint y, GLsizei width, GLsizei height) {
  ((QOpenGLExtraFunctions*)this_)->glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:344
// [-2] void glTexStorage2D(GLenum, GLsizei, GLenum, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions14glTexStorage2DEjijii(void *this_, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height) {
  ((QOpenGLExtraFunctions*)this_)->glTexStorage2D(target, levels, internalformat, width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:345
// [-2] void glTexStorage3D(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions14glTexStorage3DEjijiii(void *this_, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth) {
  ((QOpenGLExtraFunctions*)this_)->glTexStorage3D(target, levels, internalformat, width, height, depth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:346
// [-2] void glGetInternalformativ(GLenum, GLenum, GLenum, GLsizei, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glGetInternalformativEjjjiPi(void *this_, GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:349
// [-2] void glDispatchCompute(GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions17glDispatchComputeEjjj(void *this_, GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z) {
  ((QOpenGLExtraFunctions*)this_)->glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:350
// [-2] void glDispatchComputeIndirect(GLintptr)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glDispatchComputeIndirectEl(void *this_, GLintptr indirect) {
  ((QOpenGLExtraFunctions*)this_)->glDispatchComputeIndirect(indirect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:351
// [-2] void glDrawArraysIndirect(GLenum, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glDrawArraysIndirectEjPKv(void *this_, GLenum mode, const void * indirect) {
  ((QOpenGLExtraFunctions*)this_)->glDrawArraysIndirect(mode, indirect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:352
// [-2] void glDrawElementsIndirect(GLenum, GLenum, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glDrawElementsIndirectEjjPKv(void *this_, GLenum mode, GLenum type_, const void * indirect) {
  ((QOpenGLExtraFunctions*)this_)->glDrawElementsIndirect(mode, type_, indirect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:353
// [-2] void glFramebufferParameteri(GLenum, GLenum, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glFramebufferParameteriEjji(void *this_, GLenum target, GLenum pname, GLint param) {
  ((QOpenGLExtraFunctions*)this_)->glFramebufferParameteri(target, pname, param);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:354
// [-2] void glGetFramebufferParameteriv(GLenum, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glGetFramebufferParameterivEjjPi(void *this_, GLenum target, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetFramebufferParameteriv(target, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:355
// [-2] void glGetProgramInterfaceiv(GLuint, GLenum, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glGetProgramInterfaceivEjjjPi(void *this_, GLuint program, GLenum programInterface, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetProgramInterfaceiv(program, programInterface, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:356
// [4] GLuint glGetProgramResourceIndex(GLuint, GLenum, const GLchar *)
extern "C" Q_DECL_EXPORT
GLuint C_ZN21QOpenGLExtraFunctions25glGetProgramResourceIndexEjjPKc(void *this_, GLuint program, GLenum programInterface, const GLchar * name) {
  return (GLuint)((QOpenGLExtraFunctions*)this_)->glGetProgramResourceIndex(program, programInterface, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:357
// [-2] void glGetProgramResourceName(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glGetProgramResourceNameEjjjiPiPc(void *this_, GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei * length, GLchar * name) {
  ((QOpenGLExtraFunctions*)this_)->glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:358
// [-2] void glGetProgramResourceiv(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glGetProgramResourceivEjjjiPKjiPiS2_(void *this_, GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum * props, GLsizei bufSize, GLsizei * length, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:359
// [4] GLint glGetProgramResourceLocation(GLuint, GLenum, const GLchar *)
extern "C" Q_DECL_EXPORT
GLint C_ZN21QOpenGLExtraFunctions28glGetProgramResourceLocationEjjPKc(void *this_, GLuint program, GLenum programInterface, const GLchar * name) {
  return (GLint)((QOpenGLExtraFunctions*)this_)->glGetProgramResourceLocation(program, programInterface, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:360
// [-2] void glUseProgramStages(GLuint, GLbitfield, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glUseProgramStagesEjjj(void *this_, GLuint pipeline, GLbitfield stages, GLuint program) {
  ((QOpenGLExtraFunctions*)this_)->glUseProgramStages(pipeline, stages, program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:361
// [-2] void glActiveShaderProgram(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glActiveShaderProgramEjj(void *this_, GLuint pipeline, GLuint program) {
  ((QOpenGLExtraFunctions*)this_)->glActiveShaderProgram(pipeline, program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:362
// [4] GLuint glCreateShaderProgramv(GLenum, GLsizei, const GLchar *const *)
extern "C" Q_DECL_EXPORT
GLuint C_ZN21QOpenGLExtraFunctions22glCreateShaderProgramvEjiPKPKc(void *this_, GLenum type_, GLsizei count, const GLchar *const * strings) {
  return (GLuint)((QOpenGLExtraFunctions*)this_)->glCreateShaderProgramv(type_, count, strings);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:363
// [-2] void glBindProgramPipeline(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glBindProgramPipelineEj(void *this_, GLuint pipeline) {
  ((QOpenGLExtraFunctions*)this_)->glBindProgramPipeline(pipeline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:364
// [-2] void glDeleteProgramPipelines(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glDeleteProgramPipelinesEiPKj(void *this_, GLsizei n, const GLuint * pipelines) {
  ((QOpenGLExtraFunctions*)this_)->glDeleteProgramPipelines(n, pipelines);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:365
// [-2] void glGenProgramPipelines(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glGenProgramPipelinesEiPj(void *this_, GLsizei n, GLuint * pipelines) {
  ((QOpenGLExtraFunctions*)this_)->glGenProgramPipelines(n, pipelines);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:366
// [1] GLboolean glIsProgramPipeline(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN21QOpenGLExtraFunctions19glIsProgramPipelineEj(void *this_, GLuint pipeline) {
  return (GLboolean)((QOpenGLExtraFunctions*)this_)->glIsProgramPipeline(pipeline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:367
// [-2] void glGetProgramPipelineiv(GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glGetProgramPipelineivEjjPi(void *this_, GLuint pipeline, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetProgramPipelineiv(pipeline, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:368
// [-2] void glProgramUniform1i(GLuint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform1iEjii(void *this_, GLuint program, GLint location, GLint v0) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform1i(program, location, v0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:369
// [-2] void glProgramUniform2i(GLuint, GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform2iEjiii(void *this_, GLuint program, GLint location, GLint v0, GLint v1) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform2i(program, location, v0, v1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:370
// [-2] void glProgramUniform3i(GLuint, GLint, GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform3iEjiiii(void *this_, GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform3i(program, location, v0, v1, v2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:371
// [-2] void glProgramUniform4i(GLuint, GLint, GLint, GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform4iEjiiiii(void *this_, GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform4i(program, location, v0, v1, v2, v3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:372
// [-2] void glProgramUniform1ui(GLuint, GLint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform1uiEjij(void *this_, GLuint program, GLint location, GLuint v0) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform1ui(program, location, v0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:373
// [-2] void glProgramUniform2ui(GLuint, GLint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform2uiEjijj(void *this_, GLuint program, GLint location, GLuint v0, GLuint v1) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform2ui(program, location, v0, v1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:374
// [-2] void glProgramUniform3ui(GLuint, GLint, GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform3uiEjijjj(void *this_, GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform3ui(program, location, v0, v1, v2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:375
// [-2] void glProgramUniform4ui(GLuint, GLint, GLuint, GLuint, GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform4uiEjijjjj(void *this_, GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform4ui(program, location, v0, v1, v2, v3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:376
// [-2] void glProgramUniform1f(GLuint, GLint, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform1fEjif(void *this_, GLuint program, GLint location, GLfloat v0) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform1f(program, location, v0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:377
// [-2] void glProgramUniform2f(GLuint, GLint, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform2fEjiff(void *this_, GLuint program, GLint location, GLfloat v0, GLfloat v1) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform2f(program, location, v0, v1);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:378
// [-2] void glProgramUniform3f(GLuint, GLint, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform3fEjifff(void *this_, GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform3f(program, location, v0, v1, v2);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:379
// [-2] void glProgramUniform4f(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glProgramUniform4fEjiffff(void *this_, GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform4f(program, location, v0, v1, v2, v3);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:380
// [-2] void glProgramUniform1iv(GLuint, GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform1ivEjiiPKi(void *this_, GLuint program, GLint location, GLsizei count, const GLint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform1iv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:381
// [-2] void glProgramUniform2iv(GLuint, GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform2ivEjiiPKi(void *this_, GLuint program, GLint location, GLsizei count, const GLint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform2iv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:382
// [-2] void glProgramUniform3iv(GLuint, GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform3ivEjiiPKi(void *this_, GLuint program, GLint location, GLsizei count, const GLint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform3iv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:383
// [-2] void glProgramUniform4iv(GLuint, GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform4ivEjiiPKi(void *this_, GLuint program, GLint location, GLsizei count, const GLint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform4iv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:384
// [-2] void glProgramUniform1uiv(GLuint, GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glProgramUniform1uivEjiiPKj(void *this_, GLuint program, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform1uiv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:385
// [-2] void glProgramUniform2uiv(GLuint, GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glProgramUniform2uivEjiiPKj(void *this_, GLuint program, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform2uiv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:386
// [-2] void glProgramUniform3uiv(GLuint, GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glProgramUniform3uivEjiiPKj(void *this_, GLuint program, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform3uiv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:387
// [-2] void glProgramUniform4uiv(GLuint, GLint, GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glProgramUniform4uivEjiiPKj(void *this_, GLuint program, GLint location, GLsizei count, const GLuint * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform4uiv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:388
// [-2] void glProgramUniform1fv(GLuint, GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform1fvEjiiPKf(void *this_, GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform1fv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:389
// [-2] void glProgramUniform2fv(GLuint, GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform2fvEjiiPKf(void *this_, GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform2fv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:390
// [-2] void glProgramUniform3fv(GLuint, GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform3fvEjiiPKf(void *this_, GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform3fv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:391
// [-2] void glProgramUniform4fv(GLuint, GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions19glProgramUniform4fvEjiiPKf(void *this_, GLuint program, GLint location, GLsizei count, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniform4fv(program, location, count, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:392
// [-2] void glProgramUniformMatrix2fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glProgramUniformMatrix2fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix2fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:393
// [-2] void glProgramUniformMatrix3fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glProgramUniformMatrix3fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix3fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:394
// [-2] void glProgramUniformMatrix4fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glProgramUniformMatrix4fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix4fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:395
// [-2] void glProgramUniformMatrix2x3fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix2x3fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:396
// [-2] void glProgramUniformMatrix3x2fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix3x2fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:397
// [-2] void glProgramUniformMatrix2x4fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix2x4fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:398
// [-2] void glProgramUniformMatrix4x2fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix4x2fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:399
// [-2] void glProgramUniformMatrix3x4fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix3x4fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:400
// [-2] void glProgramUniformMatrix4x3fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix4x3fvEjiihPKf(void *this_, GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:401
// [-2] void glValidateProgramPipeline(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glValidateProgramPipelineEj(void *this_, GLuint pipeline) {
  ((QOpenGLExtraFunctions*)this_)->glValidateProgramPipeline(pipeline);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:402
// [-2] void glGetProgramPipelineInfoLog(GLuint, GLsizei, GLsizei *, GLchar *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions27glGetProgramPipelineInfoLogEjiPiPc(void *this_, GLuint pipeline, GLsizei bufSize, GLsizei * length, GLchar * infoLog) {
  ((QOpenGLExtraFunctions*)this_)->glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:403
// [-2] void glBindImageTexture(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glBindImageTextureEjjihijj(void *this_, GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format) {
  ((QOpenGLExtraFunctions*)this_)->glBindImageTexture(unit, texture, level, layered, layer, access, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:404
// [-2] void glGetBooleani_v(GLenum, GLuint, GLboolean *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glGetBooleani_vEjjPh(void *this_, GLenum target, GLuint index, GLboolean * data) {
  ((QOpenGLExtraFunctions*)this_)->glGetBooleani_v(target, index, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:405
// [-2] void glMemoryBarrier(GLbitfield)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions15glMemoryBarrierEj(void *this_, GLbitfield barriers) {
  ((QOpenGLExtraFunctions*)this_)->glMemoryBarrier(barriers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:406
// [-2] void glMemoryBarrierByRegion(GLbitfield)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions23glMemoryBarrierByRegionEj(void *this_, GLbitfield barriers) {
  ((QOpenGLExtraFunctions*)this_)->glMemoryBarrierByRegion(barriers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:407
// [-2] void glTexStorage2DMultisample(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions25glTexStorage2DMultisampleEjijiih(void *this_, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
  ((QOpenGLExtraFunctions*)this_)->glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:408
// [-2] void glGetMultisamplefv(GLenum, GLuint, GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glGetMultisamplefvEjjPf(void *this_, GLenum pname, GLuint index, GLfloat * val) {
  ((QOpenGLExtraFunctions*)this_)->glGetMultisamplefv(pname, index, val);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:409
// [-2] void glSampleMaski(GLuint, GLbitfield)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions13glSampleMaskiEjj(void *this_, GLuint maskNumber, GLbitfield mask) {
  ((QOpenGLExtraFunctions*)this_)->glSampleMaski(maskNumber, mask);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:410
// [-2] void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glGetTexLevelParameterivEjijPi(void *this_, GLenum target, GLint level, GLenum pname, GLint * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetTexLevelParameteriv(target, level, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:411
// [-2] void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions24glGetTexLevelParameterfvEjijPf(void *this_, GLenum target, GLint level, GLenum pname, GLfloat * params) {
  ((QOpenGLExtraFunctions*)this_)->glGetTexLevelParameterfv(target, level, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:412
// [-2] void glBindVertexBuffer(GLuint, GLuint, GLintptr, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions18glBindVertexBufferEjjli(void *this_, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride) {
  ((QOpenGLExtraFunctions*)this_)->glBindVertexBuffer(bindingindex, buffer, offset, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:413
// [-2] void glVertexAttribFormat(GLuint, GLint, GLenum, GLboolean, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions20glVertexAttribFormatEjijhj(void *this_, GLuint attribindex, GLint size, GLenum type_, GLboolean normalized, GLuint relativeoffset) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribFormat(attribindex, size, type_, normalized, relativeoffset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:414
// [-2] void glVertexAttribIFormat(GLuint, GLint, GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glVertexAttribIFormatEjijj(void *this_, GLuint attribindex, GLint size, GLenum type_, GLuint relativeoffset) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribIFormat(attribindex, size, type_, relativeoffset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:415
// [-2] void glVertexAttribBinding(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions21glVertexAttribBindingEjj(void *this_, GLuint attribindex, GLuint bindingindex) {
  ((QOpenGLExtraFunctions*)this_)->glVertexAttribBinding(attribindex, bindingindex);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:416
// [-2] void glVertexBindingDivisor(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLExtraFunctions22glVertexBindingDivisorEjj(void *this_, GLuint bindingindex, GLuint divisor) {
  ((QOpenGLExtraFunctions*)this_)->glVertexBindingDivisor(bindingindex, divisor);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
