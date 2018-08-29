//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qopenglfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFunctions is pure virtual: false
// QOpenGLFunctions has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLFunctions_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLFunctions_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLFunctions_t qt_meta_stringdata_MyQOpenGLFunctions = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQOpenGLFunctions"
  },
  "MyQOpenGLFunctions"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLFunctions[] = {
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
class Q_DECL_EXPORT MyQOpenGLFunctions : public QOpenGLFunctions {
public:
  virtual ~MyQOpenGLFunctions() {}
// void QOpenGLFunctions()
MyQOpenGLFunctions() : QOpenGLFunctions() {}
// void QOpenGLFunctions(QOpenGLContext *)
MyQOpenGLFunctions(QOpenGLContext * context) : QOpenGLFunctions(context) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:233
// [-2] void QOpenGLFunctions()
extern "C" Q_DECL_EXPORT
void* C_ZN16QOpenGLFunctionsC2Ev() {
  return  new QOpenGLFunctions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:234
// [-2] void QOpenGLFunctions(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QOpenGLFunctionsC2EP14QOpenGLContext(QOpenGLContext * context) {
  return  new QOpenGLFunctions(context);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:235
// [-2] void ~QOpenGLFunctions()
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctionsD2Ev(void *this_) {
  delete (QOpenGLFunctions*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:259
// [4] QOpenGLFunctions::OpenGLFeatures openGLFeatures()
extern "C" Q_DECL_EXPORT
QOpenGLFunctions::OpenGLFeatures C_ZNK16QOpenGLFunctions14openGLFeaturesEv(void *this_) {
  return (QOpenGLFunctions::OpenGLFeatures)((QOpenGLFunctions*)this_)->openGLFeatures();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:260
// [1] bool hasOpenGLFeature(QOpenGLFunctions::OpenGLFeature)
extern "C" Q_DECL_EXPORT
bool C_ZNK16QOpenGLFunctions16hasOpenGLFeatureENS_13OpenGLFeatureE(void *this_, QOpenGLFunctions::OpenGLFeature feature) {
  return (bool)((QOpenGLFunctions*)this_)->hasOpenGLFeature(feature);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:262
// [-2] void initializeOpenGLFunctions()
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions25initializeOpenGLFunctionsEv(void *this_) {
  ((QOpenGLFunctions*)this_)->initializeOpenGLFunctions();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:269
// [-2] void glBindTexture(GLenum, GLuint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glBindTextureEjj(void *this_, GLenum target, GLuint texture) {
  ((QOpenGLFunctions*)this_)->glBindTexture(target, texture);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:270
// [-2] void glBlendFunc(GLenum, GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glBlendFuncEjj(void *this_, GLenum sfactor, GLenum dfactor) {
  ((QOpenGLFunctions*)this_)->glBlendFunc(sfactor, dfactor);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:271
// [-2] void glClear(GLbitfield)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions7glClearEj(void *this_, GLbitfield mask) {
  ((QOpenGLFunctions*)this_)->glClear(mask);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:272
// [-2] void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glClearColorEffff(void *this_, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
  ((QOpenGLFunctions*)this_)->glClearColor(red, green, blue, alpha);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:273
// [-2] void glClearStencil(GLint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glClearStencilEi(void *this_, GLint s) {
  ((QOpenGLFunctions*)this_)->glClearStencil(s);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:274
// [-2] void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glColorMaskEhhhh(void *this_, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
  ((QOpenGLFunctions*)this_)->glColorMask(red, green, blue, alpha);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:275
// [-2] void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glCopyTexImage2DEjijiiiii(void *this_, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
  ((QOpenGLFunctions*)this_)->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:276
// [-2] void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glCopyTexSubImage2DEjiiiiiii(void *this_, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
  ((QOpenGLFunctions*)this_)->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:277
// [-2] void glCullFace(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions10glCullFaceEj(void *this_, GLenum mode) {
  ((QOpenGLFunctions*)this_)->glCullFace(mode);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:278
// [-2] void glDeleteTextures(GLsizei, const GLuint *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glDeleteTexturesEiPKj(void *this_, GLsizei n, const GLuint * textures) {
  ((QOpenGLFunctions*)this_)->glDeleteTextures(n, textures);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:279
// [-2] void glDepthFunc(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glDepthFuncEj(void *this_, GLenum func_) {
  ((QOpenGLFunctions*)this_)->glDepthFunc(func_);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:280
// [-2] void glDepthMask(GLboolean)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glDepthMaskEh(void *this_, GLboolean flag) {
  ((QOpenGLFunctions*)this_)->glDepthMask(flag);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:281
// [-2] void glDisable(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions9glDisableEj(void *this_, GLenum cap) {
  ((QOpenGLFunctions*)this_)->glDisable(cap);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:282
// [-2] void glDrawArrays(GLenum, GLint, GLsizei)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glDrawArraysEjii(void *this_, GLenum mode, GLint first, GLsizei count) {
  ((QOpenGLFunctions*)this_)->glDrawArrays(mode, first, count);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:283
// [-2] void glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glDrawElementsEjijPKv(void *this_, GLenum mode, GLsizei count, GLenum type_, const GLvoid * indices) {
  ((QOpenGLFunctions*)this_)->glDrawElements(mode, count, type_, indices);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:284
// [-2] void glEnable(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions8glEnableEj(void *this_, GLenum cap) {
  ((QOpenGLFunctions*)this_)->glEnable(cap);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:285
// [-2] void glFinish()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions8glFinishEv(void *this_) {
  ((QOpenGLFunctions*)this_)->glFinish();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:286
// [-2] void glFlush()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions7glFlushEv(void *this_) {
  ((QOpenGLFunctions*)this_)->glFlush();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:287
// [-2] void glFrontFace(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glFrontFaceEj(void *this_, GLenum mode) {
  ((QOpenGLFunctions*)this_)->glFrontFace(mode);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:288
// [-2] void glGenTextures(GLsizei, GLuint *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glGenTexturesEiPj(void *this_, GLsizei n, GLuint * textures) {
  ((QOpenGLFunctions*)this_)->glGenTextures(n, textures);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:289
// [-2] void glGetBooleanv(GLenum, GLboolean *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glGetBooleanvEjPh(void *this_, GLenum pname, GLboolean * params) {
  ((QOpenGLFunctions*)this_)->glGetBooleanv(pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:290
// [4] GLenum glGetError()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
GLenum C_ZN16QOpenGLFunctions10glGetErrorEv(void *this_) {
  return (GLenum)((QOpenGLFunctions*)this_)->glGetError();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:291
// [-2] void glGetFloatv(GLenum, GLfloat *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glGetFloatvEjPf(void *this_, GLenum pname, GLfloat * params) {
  ((QOpenGLFunctions*)this_)->glGetFloatv(pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:292
// [-2] void glGetIntegerv(GLenum, GLint *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glGetIntegervEjPi(void *this_, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetIntegerv(pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:293
// [8] const GLubyte * glGetString(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN16QOpenGLFunctions11glGetStringEj(void *this_, GLenum name) {
  return (void*)((QOpenGLFunctions*)this_)->glGetString(name);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:294
// [-2] void glGetTexParameterfv(GLenum, GLenum, GLfloat *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glGetTexParameterfvEjjPf(void *this_, GLenum target, GLenum pname, GLfloat * params) {
  ((QOpenGLFunctions*)this_)->glGetTexParameterfv(target, pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:295
// [-2] void glGetTexParameteriv(GLenum, GLenum, GLint *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glGetTexParameterivEjjPi(void *this_, GLenum target, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetTexParameteriv(target, pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:296
// [-2] void glHint(GLenum, GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions6glHintEjj(void *this_, GLenum target, GLenum mode) {
  ((QOpenGLFunctions*)this_)->glHint(target, mode);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:297
// [1] GLboolean glIsEnabled(GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions11glIsEnabledEj(void *this_, GLenum cap) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsEnabled(cap);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:298
// [1] GLboolean glIsTexture(GLuint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions11glIsTextureEj(void *this_, GLuint texture) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsTexture(texture);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:299
// [-2] void glLineWidth(GLfloat)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glLineWidthEf(void *this_, GLfloat width) {
  ((QOpenGLFunctions*)this_)->glLineWidth(width);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:300
// [-2] void glPixelStorei(GLenum, GLint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glPixelStoreiEji(void *this_, GLenum pname, GLint param) {
  ((QOpenGLFunctions*)this_)->glPixelStorei(pname, param);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:301
// [-2] void glPolygonOffset(GLfloat, GLfloat)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glPolygonOffsetEff(void *this_, GLfloat factor, GLfloat units) {
  ((QOpenGLFunctions*)this_)->glPolygonOffset(factor, units);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:302
// [-2] void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glReadPixelsEiiiijjPv(void *this_, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type_, GLvoid * pixels) {
  ((QOpenGLFunctions*)this_)->glReadPixels(x, y, width, height, format, type_, pixels);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:303
// [-2] void glScissor(GLint, GLint, GLsizei, GLsizei)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions9glScissorEiiii(void *this_, GLint x, GLint y, GLsizei width, GLsizei height) {
  ((QOpenGLFunctions*)this_)->glScissor(x, y, width, height);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:304
// [-2] void glStencilFunc(GLenum, GLint, GLuint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glStencilFuncEjij(void *this_, GLenum func_, GLint ref, GLuint mask) {
  ((QOpenGLFunctions*)this_)->glStencilFunc(func_, ref, mask);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:305
// [-2] void glStencilMask(GLuint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glStencilMaskEj(void *this_, GLuint mask) {
  ((QOpenGLFunctions*)this_)->glStencilMask(mask);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:306
// [-2] void glStencilOp(GLenum, GLenum, GLenum)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glStencilOpEjjj(void *this_, GLenum fail, GLenum zfail, GLenum zpass) {
  ((QOpenGLFunctions*)this_)->glStencilOp(fail, zfail, zpass);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:307
// [-2] void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glTexImage2DEjiiiiijjPKv(void *this_, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type_, const GLvoid * pixels) {
  ((QOpenGLFunctions*)this_)->glTexImage2D(target, level, internalformat, width, height, border, format, type_, pixels);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:308
// [-2] void glTexParameterf(GLenum, GLenum, GLfloat)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glTexParameterfEjjf(void *this_, GLenum target, GLenum pname, GLfloat param) {
  ((QOpenGLFunctions*)this_)->glTexParameterf(target, pname, param);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:309
// [-2] void glTexParameterfv(GLenum, GLenum, const GLfloat *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glTexParameterfvEjjPKf(void *this_, GLenum target, GLenum pname, const GLfloat * params) {
  ((QOpenGLFunctions*)this_)->glTexParameterfv(target, pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:310
// [-2] void glTexParameteri(GLenum, GLenum, GLint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glTexParameteriEjji(void *this_, GLenum target, GLenum pname, GLint param) {
  ((QOpenGLFunctions*)this_)->glTexParameteri(target, pname, param);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:311
// [-2] void glTexParameteriv(GLenum, GLenum, const GLint *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glTexParameterivEjjPKi(void *this_, GLenum target, GLenum pname, const GLint * params) {
  ((QOpenGLFunctions*)this_)->glTexParameteriv(target, pname, params);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:312
// [-2] void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glTexSubImage2DEjiiiiijjPKv(void *this_, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type_, const GLvoid * pixels) {
  ((QOpenGLFunctions*)this_)->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type_, pixels);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglfunctions.h:313
// [-2] void glViewport(GLint, GLint, GLsizei, GLsizei)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions10glViewportEiiii(void *this_, GLint x, GLint y, GLsizei width, GLsizei height) {
  ((QOpenGLFunctions*)this_)->glViewport(x, y, width, height);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:316
// [-2] void glActiveTexture(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glActiveTextureEj(void *this_, GLenum texture) {
  ((QOpenGLFunctions*)this_)->glActiveTexture(texture);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:317
// [-2] void glAttachShader(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glAttachShaderEjj(void *this_, GLuint program, GLuint shader) {
  ((QOpenGLFunctions*)this_)->glAttachShader(program, shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:318
// [-2] void glBindAttribLocation(GLuint, GLuint, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions20glBindAttribLocationEjjPKc(void *this_, GLuint program, GLuint index, const char * name) {
  ((QOpenGLFunctions*)this_)->glBindAttribLocation(program, index, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:319
// [-2] void glBindBuffer(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glBindBufferEjj(void *this_, GLenum target, GLuint buffer) {
  ((QOpenGLFunctions*)this_)->glBindBuffer(target, buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:320
// [-2] void glBindFramebuffer(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glBindFramebufferEjj(void *this_, GLenum target, GLuint framebuffer) {
  ((QOpenGLFunctions*)this_)->glBindFramebuffer(target, framebuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:321
// [-2] void glBindRenderbuffer(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glBindRenderbufferEjj(void *this_, GLenum target, GLuint renderbuffer) {
  ((QOpenGLFunctions*)this_)->glBindRenderbuffer(target, renderbuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:322
// [-2] void glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glBlendColorEffff(void *this_, GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
  ((QOpenGLFunctions*)this_)->glBlendColor(red, green, blue, alpha);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:323
// [-2] void glBlendEquation(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glBlendEquationEj(void *this_, GLenum mode) {
  ((QOpenGLFunctions*)this_)->glBlendEquation(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:324
// [-2] void glBlendEquationSeparate(GLenum, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions23glBlendEquationSeparateEjj(void *this_, GLenum modeRGB, GLenum modeAlpha) {
  ((QOpenGLFunctions*)this_)->glBlendEquationSeparate(modeRGB, modeAlpha);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:325
// [-2] void glBlendFuncSeparate(GLenum, GLenum, GLenum, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glBlendFuncSeparateEjjjj(void *this_, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
  ((QOpenGLFunctions*)this_)->glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:326
// [-2] void glBufferData(GLenum, qopengl_GLsizeiptr, const void *, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glBufferDataEjlPKvj(void *this_, GLenum target, qopengl_GLsizeiptr size, const void * data, GLenum usage) {
  ((QOpenGLFunctions*)this_)->glBufferData(target, size, data, usage);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:327
// [-2] void glBufferSubData(GLenum, qopengl_GLintptr, qopengl_GLsizeiptr, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glBufferSubDataEjllPKv(void *this_, GLenum target, qopengl_GLintptr offset, qopengl_GLsizeiptr size, const void * data) {
  ((QOpenGLFunctions*)this_)->glBufferSubData(target, offset, size, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:328
// [4] GLenum glCheckFramebufferStatus(GLenum)
extern "C" Q_DECL_EXPORT
GLenum C_ZN16QOpenGLFunctions24glCheckFramebufferStatusEj(void *this_, GLenum target) {
  return (GLenum)((QOpenGLFunctions*)this_)->glCheckFramebufferStatus(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:329
// [-2] void glClearDepthf(GLclampf)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glClearDepthfEf(void *this_, GLclampf depth) {
  ((QOpenGLFunctions*)this_)->glClearDepthf(depth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:330
// [-2] void glCompileShader(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glCompileShaderEj(void *this_, GLuint shader) {
  ((QOpenGLFunctions*)this_)->glCompileShader(shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:331
// [-2] void glCompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions22glCompressedTexImage2DEjijiiiiPKv(void *this_, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void * data) {
  ((QOpenGLFunctions*)this_)->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:332
// [-2] void glCompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions25glCompressedTexSubImage2DEjiiiiijiPKv(void *this_, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void * data) {
  ((QOpenGLFunctions*)this_)->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:333
// [4] GLuint glCreateProgram()
extern "C" Q_DECL_EXPORT
GLuint C_ZN16QOpenGLFunctions15glCreateProgramEv(void *this_) {
  return (GLuint)((QOpenGLFunctions*)this_)->glCreateProgram();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:334
// [4] GLuint glCreateShader(GLenum)
extern "C" Q_DECL_EXPORT
GLuint C_ZN16QOpenGLFunctions14glCreateShaderEj(void *this_, GLenum type_) {
  return (GLuint)((QOpenGLFunctions*)this_)->glCreateShader(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:335
// [-2] void glDeleteBuffers(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glDeleteBuffersEiPKj(void *this_, GLsizei n, const GLuint * buffers) {
  ((QOpenGLFunctions*)this_)->glDeleteBuffers(n, buffers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:336
// [-2] void glDeleteFramebuffers(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions20glDeleteFramebuffersEiPKj(void *this_, GLsizei n, const GLuint * framebuffers) {
  ((QOpenGLFunctions*)this_)->glDeleteFramebuffers(n, framebuffers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:337
// [-2] void glDeleteProgram(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions15glDeleteProgramEj(void *this_, GLuint program) {
  ((QOpenGLFunctions*)this_)->glDeleteProgram(program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:338
// [-2] void glDeleteRenderbuffers(GLsizei, const GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions21glDeleteRenderbuffersEiPKj(void *this_, GLsizei n, const GLuint * renderbuffers) {
  ((QOpenGLFunctions*)this_)->glDeleteRenderbuffers(n, renderbuffers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:339
// [-2] void glDeleteShader(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glDeleteShaderEj(void *this_, GLuint shader) {
  ((QOpenGLFunctions*)this_)->glDeleteShader(shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:340
// [-2] void glDepthRangef(GLclampf, GLclampf)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glDepthRangefEff(void *this_, GLclampf zNear, GLclampf zFar) {
  ((QOpenGLFunctions*)this_)->glDepthRangef(zNear, zFar);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:341
// [-2] void glDetachShader(GLuint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glDetachShaderEjj(void *this_, GLuint program, GLuint shader) {
  ((QOpenGLFunctions*)this_)->glDetachShader(program, shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:342
// [-2] void glDisableVertexAttribArray(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions26glDisableVertexAttribArrayEj(void *this_, GLuint index) {
  ((QOpenGLFunctions*)this_)->glDisableVertexAttribArray(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:343
// [-2] void glEnableVertexAttribArray(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions25glEnableVertexAttribArrayEj(void *this_, GLuint index) {
  ((QOpenGLFunctions*)this_)->glEnableVertexAttribArray(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:344
// [-2] void glFramebufferRenderbuffer(GLenum, GLenum, GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions25glFramebufferRenderbufferEjjjj(void *this_, GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
  ((QOpenGLFunctions*)this_)->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:345
// [-2] void glFramebufferTexture2D(GLenum, GLenum, GLenum, GLuint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions22glFramebufferTexture2DEjjjji(void *this_, GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
  ((QOpenGLFunctions*)this_)->glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:346
// [-2] void glGenBuffers(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glGenBuffersEiPj(void *this_, GLsizei n, GLuint * buffers) {
  ((QOpenGLFunctions*)this_)->glGenBuffers(n, buffers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:347
// [-2] void glGenerateMipmap(GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glGenerateMipmapEj(void *this_, GLenum target) {
  ((QOpenGLFunctions*)this_)->glGenerateMipmap(target);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:348
// [-2] void glGenFramebuffers(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glGenFramebuffersEiPj(void *this_, GLsizei n, GLuint * framebuffers) {
  ((QOpenGLFunctions*)this_)->glGenFramebuffers(n, framebuffers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:349
// [-2] void glGenRenderbuffers(GLsizei, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glGenRenderbuffersEiPj(void *this_, GLsizei n, GLuint * renderbuffers) {
  ((QOpenGLFunctions*)this_)->glGenRenderbuffers(n, renderbuffers);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:350
// [-2] void glGetActiveAttrib(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glGetActiveAttribEjjiPiS0_PjPc(void *this_, GLuint program, GLuint index, GLsizei bufsize, GLsizei * length, GLint * size, GLenum * type_, char * name) {
  ((QOpenGLFunctions*)this_)->glGetActiveAttrib(program, index, bufsize, length, size, type_, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:351
// [-2] void glGetActiveUniform(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glGetActiveUniformEjjiPiS0_PjPc(void *this_, GLuint program, GLuint index, GLsizei bufsize, GLsizei * length, GLint * size, GLenum * type_, char * name) {
  ((QOpenGLFunctions*)this_)->glGetActiveUniform(program, index, bufsize, length, size, type_, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:352
// [-2] void glGetAttachedShaders(GLuint, GLsizei, GLsizei *, GLuint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions20glGetAttachedShadersEjiPiPj(void *this_, GLuint program, GLsizei maxcount, GLsizei * count, GLuint * shaders) {
  ((QOpenGLFunctions*)this_)->glGetAttachedShaders(program, maxcount, count, shaders);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:353
// [4] GLint glGetAttribLocation(GLuint, const char *)
extern "C" Q_DECL_EXPORT
GLint C_ZN16QOpenGLFunctions19glGetAttribLocationEjPKc(void *this_, GLuint program, const char * name) {
  return (GLint)((QOpenGLFunctions*)this_)->glGetAttribLocation(program, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:354
// [-2] void glGetBufferParameteriv(GLenum, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions22glGetBufferParameterivEjjPi(void *this_, GLenum target, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetBufferParameteriv(target, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:355
// [-2] void glGetFramebufferAttachmentParameteriv(GLenum, GLenum, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions37glGetFramebufferAttachmentParameterivEjjjPi(void *this_, GLenum target, GLenum attachment, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:356
// [-2] void glGetProgramiv(GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glGetProgramivEjjPi(void *this_, GLuint program, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetProgramiv(program, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:357
// [-2] void glGetProgramInfoLog(GLuint, GLsizei, GLsizei *, char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glGetProgramInfoLogEjiPiPc(void *this_, GLuint program, GLsizei bufsize, GLsizei * length, char * infolog) {
  ((QOpenGLFunctions*)this_)->glGetProgramInfoLog(program, bufsize, length, infolog);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:358
// [-2] void glGetRenderbufferParameteriv(GLenum, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions28glGetRenderbufferParameterivEjjPi(void *this_, GLenum target, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetRenderbufferParameteriv(target, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:359
// [-2] void glGetShaderiv(GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glGetShaderivEjjPi(void *this_, GLuint shader, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetShaderiv(shader, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:360
// [-2] void glGetShaderInfoLog(GLuint, GLsizei, GLsizei *, char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glGetShaderInfoLogEjiPiPc(void *this_, GLuint shader, GLsizei bufsize, GLsizei * length, char * infolog) {
  ((QOpenGLFunctions*)this_)->glGetShaderInfoLog(shader, bufsize, length, infolog);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:361
// [-2] void glGetShaderPrecisionFormat(GLenum, GLenum, GLint *, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions26glGetShaderPrecisionFormatEjjPiS0_(void *this_, GLenum shadertype, GLenum precisiontype, GLint * range_, GLint * precision) {
  ((QOpenGLFunctions*)this_)->glGetShaderPrecisionFormat(shadertype, precisiontype, range_, precision);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:362
// [-2] void glGetShaderSource(GLuint, GLsizei, GLsizei *, char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glGetShaderSourceEjiPiPc(void *this_, GLuint shader, GLsizei bufsize, GLsizei * length, char * source) {
  ((QOpenGLFunctions*)this_)->glGetShaderSource(shader, bufsize, length, source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:363
// [-2] void glGetUniformfv(GLuint, GLint, GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glGetUniformfvEjiPf(void *this_, GLuint program, GLint location, GLfloat * params) {
  ((QOpenGLFunctions*)this_)->glGetUniformfv(program, location, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:364
// [-2] void glGetUniformiv(GLuint, GLint, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glGetUniformivEjiPi(void *this_, GLuint program, GLint location, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetUniformiv(program, location, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:365
// [4] GLint glGetUniformLocation(GLuint, const char *)
extern "C" Q_DECL_EXPORT
GLint C_ZN16QOpenGLFunctions20glGetUniformLocationEjPKc(void *this_, GLuint program, const char * name) {
  return (GLint)((QOpenGLFunctions*)this_)->glGetUniformLocation(program, name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:366
// [-2] void glGetVertexAttribfv(GLuint, GLenum, GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glGetVertexAttribfvEjjPf(void *this_, GLuint index, GLenum pname, GLfloat * params) {
  ((QOpenGLFunctions*)this_)->glGetVertexAttribfv(index, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:367
// [-2] void glGetVertexAttribiv(GLuint, GLenum, GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glGetVertexAttribivEjjPi(void *this_, GLuint index, GLenum pname, GLint * params) {
  ((QOpenGLFunctions*)this_)->glGetVertexAttribiv(index, pname, params);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:368
// [-2] void glGetVertexAttribPointerv(GLuint, GLenum, void **)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions25glGetVertexAttribPointervEjjPPv(void *this_, GLuint index, GLenum pname, void ** pointer) {
  ((QOpenGLFunctions*)this_)->glGetVertexAttribPointerv(index, pname, pointer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:369
// [1] GLboolean glIsBuffer(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions10glIsBufferEj(void *this_, GLuint buffer) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsBuffer(buffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:370
// [1] GLboolean glIsFramebuffer(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions15glIsFramebufferEj(void *this_, GLuint framebuffer) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsFramebuffer(framebuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:371
// [1] GLboolean glIsProgram(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions11glIsProgramEj(void *this_, GLuint program) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsProgram(program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:372
// [1] GLboolean glIsRenderbuffer(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions16glIsRenderbufferEj(void *this_, GLuint renderbuffer) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsRenderbuffer(renderbuffer);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:373
// [1] GLboolean glIsShader(GLuint)
extern "C" Q_DECL_EXPORT
GLboolean C_ZN16QOpenGLFunctions10glIsShaderEj(void *this_, GLuint shader) {
  return (GLboolean)((QOpenGLFunctions*)this_)->glIsShader(shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:374
// [-2] void glLinkProgram(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions13glLinkProgramEj(void *this_, GLuint program) {
  ((QOpenGLFunctions*)this_)->glLinkProgram(program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:375
// [-2] void glReleaseShaderCompiler()
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions23glReleaseShaderCompilerEv(void *this_) {
  ((QOpenGLFunctions*)this_)->glReleaseShaderCompiler();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:376
// [-2] void glRenderbufferStorage(GLenum, GLenum, GLsizei, GLsizei)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions21glRenderbufferStorageEjjii(void *this_, GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
  ((QOpenGLFunctions*)this_)->glRenderbufferStorage(target, internalformat, width, height);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:377
// [-2] void glSampleCoverage(GLclampf, GLboolean)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glSampleCoverageEfh(void *this_, GLclampf value, GLboolean invert) {
  ((QOpenGLFunctions*)this_)->glSampleCoverage(value, invert);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:378
// [-2] void glShaderBinary(GLint, const GLuint *, GLenum, const void *, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions14glShaderBinaryEiPKjjPKvi(void *this_, GLint n, const GLuint * shaders, GLenum binaryformat, const void * binary, GLint length) {
  ((QOpenGLFunctions*)this_)->glShaderBinary(n, shaders, binaryformat, binary, length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:380
// [-2] void glStencilFuncSeparate(GLenum, GLenum, GLint, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions21glStencilFuncSeparateEjjij(void *this_, GLenum face, GLenum func_, GLint ref, GLuint mask) {
  ((QOpenGLFunctions*)this_)->glStencilFuncSeparate(face, func_, ref, mask);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:381
// [-2] void glStencilMaskSeparate(GLenum, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions21glStencilMaskSeparateEjj(void *this_, GLenum face, GLuint mask) {
  ((QOpenGLFunctions*)this_)->glStencilMaskSeparate(face, mask);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:382
// [-2] void glStencilOpSeparate(GLenum, GLenum, GLenum, GLenum)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions19glStencilOpSeparateEjjjj(void *this_, GLenum face, GLenum fail, GLenum zfail, GLenum zpass) {
  ((QOpenGLFunctions*)this_)->glStencilOpSeparate(face, fail, zfail, zpass);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:383
// [-2] void glUniform1f(GLint, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform1fEif(void *this_, GLint location, GLfloat x) {
  ((QOpenGLFunctions*)this_)->glUniform1f(location, x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:384
// [-2] void glUniform1fv(GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform1fvEiiPKf(void *this_, GLint location, GLsizei count, const GLfloat * v) {
  ((QOpenGLFunctions*)this_)->glUniform1fv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:385
// [-2] void glUniform1i(GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform1iEii(void *this_, GLint location, GLint x) {
  ((QOpenGLFunctions*)this_)->glUniform1i(location, x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:386
// [-2] void glUniform1iv(GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform1ivEiiPKi(void *this_, GLint location, GLsizei count, const GLint * v) {
  ((QOpenGLFunctions*)this_)->glUniform1iv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:387
// [-2] void glUniform2f(GLint, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform2fEiff(void *this_, GLint location, GLfloat x, GLfloat y) {
  ((QOpenGLFunctions*)this_)->glUniform2f(location, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:388
// [-2] void glUniform2fv(GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform2fvEiiPKf(void *this_, GLint location, GLsizei count, const GLfloat * v) {
  ((QOpenGLFunctions*)this_)->glUniform2fv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:389
// [-2] void glUniform2i(GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform2iEiii(void *this_, GLint location, GLint x, GLint y) {
  ((QOpenGLFunctions*)this_)->glUniform2i(location, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:390
// [-2] void glUniform2iv(GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform2ivEiiPKi(void *this_, GLint location, GLsizei count, const GLint * v) {
  ((QOpenGLFunctions*)this_)->glUniform2iv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:391
// [-2] void glUniform3f(GLint, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform3fEifff(void *this_, GLint location, GLfloat x, GLfloat y, GLfloat z) {
  ((QOpenGLFunctions*)this_)->glUniform3f(location, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:392
// [-2] void glUniform3fv(GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform3fvEiiPKf(void *this_, GLint location, GLsizei count, const GLfloat * v) {
  ((QOpenGLFunctions*)this_)->glUniform3fv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:393
// [-2] void glUniform3i(GLint, GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform3iEiiii(void *this_, GLint location, GLint x, GLint y, GLint z) {
  ((QOpenGLFunctions*)this_)->glUniform3i(location, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:394
// [-2] void glUniform3iv(GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform3ivEiiPKi(void *this_, GLint location, GLsizei count, const GLint * v) {
  ((QOpenGLFunctions*)this_)->glUniform3iv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:395
// [-2] void glUniform4f(GLint, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform4fEiffff(void *this_, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  ((QOpenGLFunctions*)this_)->glUniform4f(location, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:396
// [-2] void glUniform4fv(GLint, GLsizei, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform4fvEiiPKf(void *this_, GLint location, GLsizei count, const GLfloat * v) {
  ((QOpenGLFunctions*)this_)->glUniform4fv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:397
// [-2] void glUniform4i(GLint, GLint, GLint, GLint, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions11glUniform4iEiiiii(void *this_, GLint location, GLint x, GLint y, GLint z, GLint w) {
  ((QOpenGLFunctions*)this_)->glUniform4i(location, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:398
// [-2] void glUniform4iv(GLint, GLsizei, const GLint *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUniform4ivEiiPKi(void *this_, GLint location, GLsizei count, const GLint * v) {
  ((QOpenGLFunctions*)this_)->glUniform4iv(location, count, v);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:399
// [-2] void glUniformMatrix2fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glUniformMatrix2fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLFunctions*)this_)->glUniformMatrix2fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:400
// [-2] void glUniformMatrix3fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glUniformMatrix3fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLFunctions*)this_)->glUniformMatrix3fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:401
// [-2] void glUniformMatrix4fv(GLint, GLsizei, GLboolean, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions18glUniformMatrix4fvEiihPKf(void *this_, GLint location, GLsizei count, GLboolean transpose, const GLfloat * value) {
  ((QOpenGLFunctions*)this_)->glUniformMatrix4fv(location, count, transpose, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:402
// [-2] void glUseProgram(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions12glUseProgramEj(void *this_, GLuint program) {
  ((QOpenGLFunctions*)this_)->glUseProgram(program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:403
// [-2] void glValidateProgram(GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glValidateProgramEj(void *this_, GLuint program) {
  ((QOpenGLFunctions*)this_)->glValidateProgram(program);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:404
// [-2] void glVertexAttrib1f(GLuint, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glVertexAttrib1fEjf(void *this_, GLuint indx, GLfloat x) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib1f(indx, x);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:405
// [-2] void glVertexAttrib1fv(GLuint, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glVertexAttrib1fvEjPKf(void *this_, GLuint indx, const GLfloat * values) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib1fv(indx, values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:406
// [-2] void glVertexAttrib2f(GLuint, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glVertexAttrib2fEjff(void *this_, GLuint indx, GLfloat x, GLfloat y) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib2f(indx, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:407
// [-2] void glVertexAttrib2fv(GLuint, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glVertexAttrib2fvEjPKf(void *this_, GLuint indx, const GLfloat * values) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib2fv(indx, values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:408
// [-2] void glVertexAttrib3f(GLuint, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glVertexAttrib3fEjfff(void *this_, GLuint indx, GLfloat x, GLfloat y, GLfloat z) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib3f(indx, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:409
// [-2] void glVertexAttrib3fv(GLuint, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glVertexAttrib3fvEjPKf(void *this_, GLuint indx, const GLfloat * values) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib3fv(indx, values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:410
// [-2] void glVertexAttrib4f(GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions16glVertexAttrib4fEjffff(void *this_, GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib4f(indx, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:411
// [-2] void glVertexAttrib4fv(GLuint, const GLfloat *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions17glVertexAttrib4fvEjPKf(void *this_, GLuint indx, const GLfloat * values) {
  ((QOpenGLFunctions*)this_)->glVertexAttrib4fv(indx, values);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:412
// [-2] void glVertexAttribPointer(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *)
extern "C" Q_DECL_EXPORT
void C_ZN16QOpenGLFunctions21glVertexAttribPointerEjijhiPKv(void *this_, GLuint indx, GLint size, GLenum type_, GLboolean normalized, GLsizei stride, const void * ptr) {
  ((QOpenGLFunctions*)this_)->glVertexAttribPointer(indx, size, type_, normalized, stride, ptr);
}

//  main block end
