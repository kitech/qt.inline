//  header block begin

// /usr/include/qt/QtGui/qopenglextrafunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglextrafunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLExtraFunctions is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglextrafunctions(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:287
// [-2] void QOpenGLExtraFunctions() 
// (12)qm1484959473 (30)_ZN21QOpenGLExtraFunctionsC2Ev
/*void* qm1484959473()*/{
  ;
  this_ =  new QOpenGLExtraFunctions();
  this_ =  new MyQOpenGLExtraFunctions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:288
// [-2] void QOpenGLExtraFunctions(QOpenGLContext *) 
// (12)qm3582079952 (46)_ZN21QOpenGLExtraFunctionsC2EP14QOpenGLContext
/*void* qm3582079952(QOpenGLContext * context)*/{
  QOpenGLContext * context = *(QOpenGLContext **)this_;
  this_ =  new QOpenGLExtraFunctions(context);
  this_ =  new MyQOpenGLExtraFunctions(context);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:289
// [-2] void ~QOpenGLExtraFunctions() 
// (12)qm3310720584 (30)_ZN21QOpenGLExtraFunctionsD2Ev
/*void qm3310720584 (void *this_)*/ {
  delete (QOpenGLExtraFunctions*)(this_);
}
// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:292
// [-2] void glReadBuffer(GLenum) 
// (12)qm2124593227 (42)_ZN21QOpenGLExtraFunctions12glReadBufferEj
//static
/*void qm2124593227(unsigned int mode)*/ {
  unsigned int mode = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glReadBuffer(mode);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glReadBuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:293
// [-2] void glDrawRangeElements(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *) 
// (12)qm3073394433 (56)_ZN21QOpenGLExtraFunctions19glDrawRangeElementsEjjjijPKv
//static
/*void qm3073394433(unsigned int mode, unsigned int start, unsigned int end_, int count, unsigned int type_, const void * indices)*/ {
  unsigned int mode = *(unsigned int*)this_; unsigned int start = *(unsigned int*)this_; unsigned int end_ = *(unsigned int*)this_; int count = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indices = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawRangeElements(mode, start, end_, count, type_, indices);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, unsigned int, void const*) ) &QOpenGLExtraFunctions::glDrawRangeElements;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:294
// [-2] void glTexImage3D(GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *) 
// (12)qm2557547037 (53)_ZN21QOpenGLExtraFunctions12glTexImage3DEjiiiiiijjPKv
//static
/*void qm2557547037(unsigned int target, int level, int internalformat, int width, int height, int depth, int border, unsigned int format, unsigned int type_, const void * pixels)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int internalformat = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; int depth = *(int*)this_; int border = *(int*)this_; unsigned int format = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * pixels = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexImage3D(target, level, internalformat, width, height, depth, border, format, type_, pixels);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int, int, int, unsigned int, unsigned int, void const*) ) &QOpenGLExtraFunctions::glTexImage3D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:295
// [-2] void glTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *) 
// (11)qm186331812 (57)_ZN21QOpenGLExtraFunctions15glTexSubImage3DEjiiiiiiijjPKv
//static
/*void qm186331812(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, unsigned int type_, const void * pixels)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int xoffset = *(int*)this_; int yoffset = *(int*)this_; int zoffset = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; int depth = *(int*)this_; unsigned int format = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * pixels = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type_, pixels);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int, int, int, int, unsigned int, unsigned int, void const*) ) &QOpenGLExtraFunctions::glTexSubImage3D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:296
// [-2] void glCopyTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) 
// (12)qm3582550010 (57)_ZN21QOpenGLExtraFunctions19glCopyTexSubImage3DEjiiiiiiii
//static
/*void qm3582550010(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int x, int y, int width, int height)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int xoffset = *(int*)this_; int yoffset = *(int*)this_; int zoffset = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int, int, int, int, int) ) &QOpenGLExtraFunctions::glCopyTexSubImage3D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:297
// [-2] void glCompressedTexImage3D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void *) 
// (12)qm2705440736 (62)_ZN21QOpenGLExtraFunctions22glCompressedTexImage3DEjijiiiiiPKv
//static
/*void qm2705440736(unsigned int target, int level, unsigned int internalformat, int width, int height, int depth, int border, int imageSize, const void * data)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_; int depth = *(int*)this_; int border = *(int*)this_; int imageSize = *(int*)this_; const void * data = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, int, int, int, int, void const*) ) &QOpenGLExtraFunctions::glCompressedTexImage3D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:298
// [-2] void glCompressedTexSubImage3D(GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *) 
// (12)qm2503551094 (67)_ZN21QOpenGLExtraFunctions25glCompressedTexSubImage3DEjiiiiiiijiPKv
//static
/*void qm2503551094(unsigned int target, int level, int xoffset, int yoffset, int zoffset, int width, int height, int depth, unsigned int format, int imageSize, const void * data)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int xoffset = *(int*)this_; int yoffset = *(int*)this_; int zoffset = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; int depth = *(int*)this_; unsigned int format = *(unsigned int*)this_; int imageSize = *(int*)this_; const void * data = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int, int, int, int, unsigned int, int, void const*) ) &QOpenGLExtraFunctions::glCompressedTexSubImage3D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:299
// [-2] void glGenQueries(GLsizei, GLuint *) 
// (12)qm1593458160 (44)_ZN21QOpenGLExtraFunctions12glGenQueriesEiPj
//static
/*void qm1593458160(int n, unsigned int * ids)*/ {
  int n = *(int*)this_; unsigned int * ids = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGenQueries(n, ids);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int*) ) &QOpenGLExtraFunctions::glGenQueries;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:300
// [-2] void glDeleteQueries(GLsizei, const GLuint *) 
// (12)qm3583279351 (48)_ZN21QOpenGLExtraFunctions15glDeleteQueriesEiPKj
//static
/*void qm3583279351(int n, const unsigned int * ids)*/ {
  int n = *(int*)this_; const unsigned int * ids = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDeleteQueries(n, ids);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int const*) ) &QOpenGLExtraFunctions::glDeleteQueries;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:301
// [1] GLboolean glIsQuery(GLuint) 
// (12)qm2282190156 (38)_ZN21QOpenGLExtraFunctions9glIsQueryEj
//static
/*void qm2282190156(unsigned int id)*/ {
  unsigned int id = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsQuery(id);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glIsQuery;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:302
// [-2] void glBeginQuery(GLenum, GLuint) 
// (12)qm4223901495 (43)_ZN21QOpenGLExtraFunctions12glBeginQueryEjj
//static
/*void qm4223901495(unsigned int target, unsigned int id)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int id = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBeginQuery(target, id);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBeginQuery;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:303
// [-2] void glEndQuery(GLenum) 
// (12)qm1866161730 (40)_ZN21QOpenGLExtraFunctions10glEndQueryEj
//static
/*void qm1866161730(unsigned int target)*/ {
  unsigned int target = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glEndQuery(target);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glEndQuery;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:304
// [-2] void glGetQueryiv(GLenum, GLenum, GLint *) 
// (11)qm551626129 (45)_ZN21QOpenGLExtraFunctions12glGetQueryivEjjPi
//static
/*void qm551626129(unsigned int target, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetQueryiv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetQueryiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:305
// [-2] void glGetQueryObjectuiv(GLuint, GLenum, GLuint *) 
// (12)qm3402268154 (52)_ZN21QOpenGLExtraFunctions19glGetQueryObjectuivEjjPj
//static
/*void qm3402268154(unsigned int id, unsigned int pname, unsigned int * params)*/ {
  unsigned int id = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; unsigned int * params = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetQueryObjectuiv(id, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int*) ) &QOpenGLExtraFunctions::glGetQueryObjectuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:306
// [1] GLboolean glUnmapBuffer(GLenum) 
// (12)qm2952846786 (43)_ZN21QOpenGLExtraFunctions13glUnmapBufferEj
//static
/*void qm2952846786(unsigned int target)*/ {
  unsigned int target = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUnmapBuffer(target);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glUnmapBuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:307
// [-2] void glGetBufferPointerv(GLenum, GLenum, void **) 
// (12)qm3077297078 (53)_ZN21QOpenGLExtraFunctions19glGetBufferPointervEjjPPv
//static
/*void qm3077297078(unsigned int target, unsigned int pname, void ** params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; void ** params = *(void ***)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetBufferPointerv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, void**) ) &QOpenGLExtraFunctions::glGetBufferPointerv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:308
// [-2] void glDrawBuffers(GLsizei, const GLenum *) 
// (12)qm1017148527 (46)_ZN21QOpenGLExtraFunctions13glDrawBuffersEiPKj
//static
/*void qm1017148527(int n, const unsigned int * bufs)*/ {
  int n = *(int*)this_; const unsigned int * bufs = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawBuffers(n, bufs);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int const*) ) &QOpenGLExtraFunctions::glDrawBuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:309
// [-2] void glUniformMatrix2x3fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm1743865060 (55)_ZN21QOpenGLExtraFunctions20glUniformMatrix2x3fvEiihPKf
//static
/*void qm1743865060(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformMatrix2x3fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glUniformMatrix2x3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:310
// [-2] void glUniformMatrix3x2fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm328623029 (55)_ZN21QOpenGLExtraFunctions20glUniformMatrix3x2fvEiihPKf
//static
/*void qm328623029(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformMatrix3x2fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glUniformMatrix3x2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:311
// [-2] void glUniformMatrix2x4fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm2234343325 (55)_ZN21QOpenGLExtraFunctions20glUniformMatrix2x4fvEiihPKf
//static
/*void qm2234343325(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformMatrix2x4fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glUniformMatrix2x4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:312
// [-2] void glUniformMatrix4x2fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm1729006138 (55)_ZN21QOpenGLExtraFunctions20glUniformMatrix4x2fvEiihPKf
//static
/*void qm1729006138(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformMatrix4x2fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glUniformMatrix4x2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:313
// [-2] void glUniformMatrix3x4fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm512234482 (55)_ZN21QOpenGLExtraFunctions20glUniformMatrix3x4fvEiihPKf
//static
/*void qm512234482(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformMatrix3x4fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glUniformMatrix3x4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:314
// [-2] void glUniformMatrix4x3fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm2295128324 (55)_ZN21QOpenGLExtraFunctions20glUniformMatrix4x3fvEiihPKf
//static
/*void qm2295128324(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformMatrix4x3fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glUniformMatrix4x3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:315
// [-2] void glBlitFramebuffer(GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum) 
// (12)qm2410634419 (56)_ZN21QOpenGLExtraFunctions17glBlitFramebufferEiiiiiiiijj
//static
/*void qm2410634419(int srcX0, int srcY0, int srcX1, int srcY1, int dstX0, int dstY0, int dstX1, int dstY1, unsigned int mask, unsigned int filter)*/ {
  int srcX0 = *(int*)this_; int srcY0 = *(int*)this_; int srcX1 = *(int*)this_; int srcY1 = *(int*)this_; int dstX0 = *(int*)this_; int dstY0 = *(int*)this_; int dstX1 = *(int*)this_; int dstY1 = *(int*)this_; unsigned int mask = *(unsigned int*)this_; unsigned int filter = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, int, int, int, int, int, int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBlitFramebuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:316
// [-2] void glRenderbufferStorageMultisample(GLenum, GLsizei, GLenum, GLsizei, GLsizei) 
// (12)qm3271837701 (66)_ZN21QOpenGLExtraFunctions32glRenderbufferStorageMultisampleEjijii
//static
/*void qm3271837701(unsigned int target, int samples, unsigned int internalformat, int width, int height)*/ {
  unsigned int target = *(unsigned int*)this_; int samples = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, int) ) &QOpenGLExtraFunctions::glRenderbufferStorageMultisample;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:317
// [-2] void glFramebufferTextureLayer(GLenum, GLenum, GLuint, GLint, GLint) 
// (12)qm3825749001 (59)_ZN21QOpenGLExtraFunctions25glFramebufferTextureLayerEjjjii
//static
/*void qm3825749001(unsigned int target, unsigned int attachment, unsigned int texture, int level, int layer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int attachment = *(unsigned int*)this_; unsigned int texture = *(unsigned int*)this_; int level = *(int*)this_; int layer = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glFramebufferTextureLayer(target, attachment, texture, level, layer);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, int) ) &QOpenGLExtraFunctions::glFramebufferTextureLayer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:318
// [8] void * glMapBufferRange(GLenum, GLintptr, GLsizeiptr, GLbitfield) 
// (11)qm555550189 (49)_ZN21QOpenGLExtraFunctions16glMapBufferRangeEjllj
//static
/*void qm555550189(unsigned int target, long offset, long length, unsigned int access)*/ {
  unsigned int target = *(unsigned int*)this_; long offset = *(long*)this_; long length = *(long*)this_; unsigned int access = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glMapBufferRange(target, offset, length, access);
   auto xptr = (void * (QOpenGLExtraFunctions::*)(unsigned int, long, long, unsigned int) ) &QOpenGLExtraFunctions::glMapBufferRange;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:319
// [-2] void glFlushMappedBufferRange(GLenum, GLintptr, GLsizeiptr) 
// (12)qm1117357146 (56)_ZN21QOpenGLExtraFunctions24glFlushMappedBufferRangeEjll
//static
/*void qm1117357146(unsigned int target, long offset, long length)*/ {
  unsigned int target = *(unsigned int*)this_; long offset = *(long*)this_; long length = *(long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glFlushMappedBufferRange(target, offset, length);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, long, long) ) &QOpenGLExtraFunctions::glFlushMappedBufferRange;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:320
// [-2] void glBindVertexArray(GLuint) 
// (11)qm569327712 (47)_ZN21QOpenGLExtraFunctions17glBindVertexArrayEj
//static
/*void qm569327712(unsigned int array)*/ {
  unsigned int array = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindVertexArray(array);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glBindVertexArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:321
// [-2] void glDeleteVertexArrays(GLsizei, const GLuint *) 
// (12)qm3266011451 (53)_ZN21QOpenGLExtraFunctions20glDeleteVertexArraysEiPKj
//static
/*void qm3266011451(int n, const unsigned int * arrays)*/ {
  int n = *(int*)this_; const unsigned int * arrays = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDeleteVertexArrays(n, arrays);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int const*) ) &QOpenGLExtraFunctions::glDeleteVertexArrays;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:322
// [-2] void glGenVertexArrays(GLsizei, GLuint *) 
// (12)qm4017030971 (49)_ZN21QOpenGLExtraFunctions17glGenVertexArraysEiPj
//static
/*void qm4017030971(int n, unsigned int * arrays)*/ {
  int n = *(int*)this_; unsigned int * arrays = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGenVertexArrays(n, arrays);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int*) ) &QOpenGLExtraFunctions::glGenVertexArrays;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:323
// [1] GLboolean glIsVertexArray(GLuint) 
// (12)qm2156011281 (45)_ZN21QOpenGLExtraFunctions15glIsVertexArrayEj
//static
/*void qm2156011281(unsigned int array)*/ {
  unsigned int array = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsVertexArray(array);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glIsVertexArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:324
// [-2] void glGetIntegeri_v(GLenum, GLuint, GLint *) 
// (11)qm203406528 (48)_ZN21QOpenGLExtraFunctions15glGetIntegeri_vEjjPi
//static
/*void qm203406528(unsigned int target, unsigned int index, int * data)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; int * data = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetIntegeri_v(target, index, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetIntegeri_v;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:325
// [-2] void glBeginTransformFeedback(GLenum) 
// (12)qm3201697209 (54)_ZN21QOpenGLExtraFunctions24glBeginTransformFeedbackEj
//static
/*void qm3201697209(unsigned int primitiveMode)*/ {
  unsigned int primitiveMode = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBeginTransformFeedback(primitiveMode);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glBeginTransformFeedback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:326
// [-2] void glEndTransformFeedback() 
// (12)qm1404398020 (52)_ZN21QOpenGLExtraFunctions22glEndTransformFeedbackEv
//static
/*void qm1404398020()*/ {
  ;
  (void) ((QOpenGLExtraFunctions*)this_)->glEndTransformFeedback();
   auto xptr = (void (QOpenGLExtraFunctions::*)() ) &QOpenGLExtraFunctions::glEndTransformFeedback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:327
// [-2] void glBindBufferRange(GLenum, GLuint, GLuint, GLintptr, GLsizeiptr) 
// (12)qm2500048434 (51)_ZN21QOpenGLExtraFunctions17glBindBufferRangeEjjjll
//static
/*void qm2500048434(unsigned int target, unsigned int index, unsigned int buffer, long offset, long size)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; unsigned int buffer = *(unsigned int*)this_; long offset = *(long*)this_; long size = *(long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindBufferRange(target, index, buffer, offset, size);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, long, long) ) &QOpenGLExtraFunctions::glBindBufferRange;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:328
// [-2] void glBindBufferBase(GLenum, GLuint, GLuint) 
// (12)qm1696001254 (48)_ZN21QOpenGLExtraFunctions16glBindBufferBaseEjjj
//static
/*void qm1696001254(unsigned int target, unsigned int index, unsigned int buffer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; unsigned int buffer = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindBufferBase(target, index, buffer);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBindBufferBase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:329
// [-2] void glTransformFeedbackVaryings(GLuint, GLsizei, const GLchar *const *, GLenum) 
// (12)qm1203560374 (64)_ZN21QOpenGLExtraFunctions27glTransformFeedbackVaryingsEjiPKPKcj
//static
/*void qm1203560374(unsigned int program, int count, const char *const * varyings, unsigned int bufferMode)*/ {
  unsigned int program = *(unsigned int*)this_; int count = *(int*)this_; const char *const * varyings = *(const char *const **)this_; unsigned int bufferMode = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTransformFeedbackVaryings(program, count, varyings, bufferMode);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, char const* const*, unsigned int) ) &QOpenGLExtraFunctions::glTransformFeedbackVaryings;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:330
// [-2] void glGetTransformFeedbackVarying(GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *) 
// (11)qm894943060 (70)_ZN21QOpenGLExtraFunctions29glGetTransformFeedbackVaryingEjjiPiS0_PjPc
//static
/*void qm894943060(unsigned int program, unsigned int index, int bufSize, int * length, int * size, unsigned int * type_, char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; int * size = *(int **)this_; unsigned int * type_ = *(unsigned int **)this_; char * name = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetTransformFeedbackVarying(program, index, bufSize, length, size, type_, name);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, int*, int*, unsigned int*, char*) ) &QOpenGLExtraFunctions::glGetTransformFeedbackVarying;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:331
// [-2] void glVertexAttribIPointer(GLuint, GLint, GLenum, GLsizei, const void *) 
// (12)qm3141358109 (58)_ZN21QOpenGLExtraFunctions22glVertexAttribIPointerEjijiPKv
//static
/*void qm3141358109(unsigned int index, int size, unsigned int type_, int stride, const void * pointer)*/ {
  unsigned int index = *(unsigned int*)this_; int size = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; int stride = *(int*)this_; const void * pointer = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribIPointer(index, size, type_, stride, pointer);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, void const*) ) &QOpenGLExtraFunctions::glVertexAttribIPointer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:332
// [-2] void glGetVertexAttribIiv(GLuint, GLenum, GLint *) 
// (12)qm2389240607 (53)_ZN21QOpenGLExtraFunctions20glGetVertexAttribIivEjjPi
//static
/*void qm2389240607(unsigned int index, unsigned int pname, int * params)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetVertexAttribIiv(index, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetVertexAttribIiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:333
// [-2] void glGetVertexAttribIuiv(GLuint, GLenum, GLuint *) 
// (12)qm3236622845 (54)_ZN21QOpenGLExtraFunctions21glGetVertexAttribIuivEjjPj
//static
/*void qm3236622845(unsigned int index, unsigned int pname, unsigned int * params)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; unsigned int * params = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetVertexAttribIuiv(index, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int*) ) &QOpenGLExtraFunctions::glGetVertexAttribIuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:334
// [-2] void glVertexAttribI4i(GLuint, GLint, GLint, GLint, GLint) 
// (12)qm1073301268 (51)_ZN21QOpenGLExtraFunctions17glVertexAttribI4iEjiiii
//static
/*void qm1073301268(unsigned int index, int x, int y, int z, int w)*/ {
  unsigned int index = *(unsigned int*)this_; int x = *(int*)this_; int y = *(int*)this_; int z = *(int*)this_; int w = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4i(index, x, y, z, w);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int) ) &QOpenGLExtraFunctions::glVertexAttribI4i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:335
// [-2] void glVertexAttribI4ui(GLuint, GLuint, GLuint, GLuint, GLuint) 
// (11)qm777444645 (52)_ZN21QOpenGLExtraFunctions18glVertexAttribI4uiEjjjjj
//static
/*void qm777444645(unsigned int index, unsigned int x, unsigned int y, unsigned int z, unsigned int w)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int x = *(unsigned int*)this_; unsigned int y = *(unsigned int*)this_; unsigned int z = *(unsigned int*)this_; unsigned int w = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4ui(index, x, y, z, w);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glVertexAttribI4ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:336
// [-2] void glVertexAttribI4iv(GLuint, const GLint *) 
// (12)qm2200876762 (51)_ZN21QOpenGLExtraFunctions18glVertexAttribI4ivEjPKi
//static
/*void qm2200876762(unsigned int index, const int * v)*/ {
  unsigned int index = *(unsigned int*)this_; const int * v = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4iv(index, v);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int const*) ) &QOpenGLExtraFunctions::glVertexAttribI4iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:337
// [-2] void glVertexAttribI4uiv(GLuint, const GLuint *) 
// (12)qm4022465880 (52)_ZN21QOpenGLExtraFunctions19glVertexAttribI4uivEjPKj
//static
/*void qm4022465880(unsigned int index, const unsigned int * v)*/ {
  unsigned int index = *(unsigned int*)this_; const unsigned int * v = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribI4uiv(index, v);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int const*) ) &QOpenGLExtraFunctions::glVertexAttribI4uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:338
// [-2] void glGetUniformuiv(GLuint, GLint, GLuint *) 
// (12)qm4263326628 (48)_ZN21QOpenGLExtraFunctions15glGetUniformuivEjiPj
//static
/*void qm4263326628(unsigned int program, int location, unsigned int * params)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; unsigned int * params = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetUniformuiv(program, location, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int*) ) &QOpenGLExtraFunctions::glGetUniformuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:339
// [4] GLint glGetFragDataLocation(GLuint, const GLchar *) 
// (11)qm917095006 (54)_ZN21QOpenGLExtraFunctions21glGetFragDataLocationEjPKc
//static
/*void qm917095006(unsigned int program, const char * name)*/ {
  unsigned int program = *(unsigned int*)this_; const char * name = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetFragDataLocation(program, name);
   auto xptr = (int (QOpenGLExtraFunctions::*)(unsigned int, char const*) ) &QOpenGLExtraFunctions::glGetFragDataLocation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:340
// [-2] void glUniform1ui(GLint, GLuint) 
// (12)qm2329991874 (43)_ZN21QOpenGLExtraFunctions12glUniform1uiEij
//static
/*void qm2329991874(int location, unsigned int v0)*/ {
  int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform1ui(location, v0);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int) ) &QOpenGLExtraFunctions::glUniform1ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:341
// [-2] void glUniform2ui(GLint, GLuint, GLuint) 
// (11)qm997015056 (44)_ZN21QOpenGLExtraFunctions12glUniform2uiEijj
//static
/*void qm997015056(int location, unsigned int v0, unsigned int v1)*/ {
  int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_; unsigned int v1 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform2ui(location, v0, v1);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glUniform2ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:342
// [-2] void glUniform3ui(GLint, GLuint, GLuint, GLuint) 
// (12)qm2923633167 (45)_ZN21QOpenGLExtraFunctions12glUniform3uiEijjj
//static
/*void qm2923633167(int location, unsigned int v0, unsigned int v1, unsigned int v2)*/ {
  int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_; unsigned int v1 = *(unsigned int*)this_; unsigned int v2 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform3ui(location, v0, v1, v2);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glUniform3ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:343
// [-2] void glUniform4ui(GLint, GLuint, GLuint, GLuint, GLuint) 
// (12)qm2333430921 (46)_ZN21QOpenGLExtraFunctions12glUniform4uiEijjjj
//static
/*void qm2333430921(int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3)*/ {
  int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_; unsigned int v1 = *(unsigned int*)this_; unsigned int v2 = *(unsigned int*)this_; unsigned int v3 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform4ui(location, v0, v1, v2, v3);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glUniform4ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:344
// [-2] void glUniform1uiv(GLint, GLsizei, const GLuint *) 
// (12)qm1901552384 (47)_ZN21QOpenGLExtraFunctions13glUniform1uivEiiPKj
//static
/*void qm1901552384(int location, int count, const unsigned int * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform1uiv(location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glUniform1uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:345
// [-2] void glUniform2uiv(GLint, GLsizei, const GLuint *) 
// (12)qm2590038019 (47)_ZN21QOpenGLExtraFunctions13glUniform2uivEiiPKj
//static
/*void qm2590038019(int location, int count, const unsigned int * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform2uiv(location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glUniform2uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:346
// [-2] void glUniform3uiv(GLint, GLsizei, const GLuint *) 
// (12)qm1973596989 (47)_ZN21QOpenGLExtraFunctions13glUniform3uivEiiPKj
//static
/*void qm1973596989(int location, int count, const unsigned int * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform3uiv(location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glUniform3uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:347
// [-2] void glUniform4uiv(GLint, GLsizei, const GLuint *) 
// (12)qm2541660228 (47)_ZN21QOpenGLExtraFunctions13glUniform4uivEiiPKj
//static
/*void qm2541660228(int location, int count, const unsigned int * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniform4uiv(location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glUniform4uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:348
// [-2] void glClearBufferiv(GLenum, GLint, const GLint *) 
// (12)qm1630865514 (49)_ZN21QOpenGLExtraFunctions15glClearBufferivEjiPKi
//static
/*void qm1630865514(unsigned int buffer, int drawbuffer, const int * value)*/ {
  unsigned int buffer = *(unsigned int*)this_; int drawbuffer = *(int*)this_; const int * value = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glClearBufferiv(buffer, drawbuffer, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int const*) ) &QOpenGLExtraFunctions::glClearBufferiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:349
// [-2] void glClearBufferuiv(GLenum, GLint, const GLuint *) 
// (12)qm1507507772 (50)_ZN21QOpenGLExtraFunctions16glClearBufferuivEjiPKj
//static
/*void qm1507507772(unsigned int buffer, int drawbuffer, const unsigned int * value)*/ {
  unsigned int buffer = *(unsigned int*)this_; int drawbuffer = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glClearBufferuiv(buffer, drawbuffer, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glClearBufferuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:350
// [-2] void glClearBufferfv(GLenum, GLint, const GLfloat *) 
// (11)qm682231639 (49)_ZN21QOpenGLExtraFunctions15glClearBufferfvEjiPKf
//static
/*void qm682231639(unsigned int buffer, int drawbuffer, const float * value)*/ {
  unsigned int buffer = *(unsigned int*)this_; int drawbuffer = *(int*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glClearBufferfv(buffer, drawbuffer, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, float const*) ) &QOpenGLExtraFunctions::glClearBufferfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:351
// [-2] void glClearBufferfi(GLenum, GLint, GLfloat, GLint) 
// (11)qm153737639 (48)_ZN21QOpenGLExtraFunctions15glClearBufferfiEjifi
//static
/*void qm153737639(unsigned int buffer, int drawbuffer, float depth, int stencil)*/ {
  unsigned int buffer = *(unsigned int*)this_; int drawbuffer = *(int*)this_; float depth = *(float*)this_; int stencil = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glClearBufferfi(buffer, drawbuffer, depth, stencil);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, float, int) ) &QOpenGLExtraFunctions::glClearBufferfi;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:352
// [8] const GLubyte * glGetStringi(GLenum, GLuint) 
// (12)qm3533600849 (43)_ZN21QOpenGLExtraFunctions12glGetStringiEjj
//static
/*void qm3533600849(unsigned int name, unsigned int index)*/ {
  unsigned int name = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetStringi(name, index);
   auto xptr = (const unsigned char * (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glGetStringi;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:353
// [-2] void glCopyBufferSubData(GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr) 
// (12)qm4157318233 (53)_ZN21QOpenGLExtraFunctions19glCopyBufferSubDataEjjlll
//static
/*void qm4157318233(unsigned int readTarget, unsigned int writeTarget, long readOffset, long writeOffset, long size)*/ {
  unsigned int readTarget = *(unsigned int*)this_; unsigned int writeTarget = *(unsigned int*)this_; long readOffset = *(long*)this_; long writeOffset = *(long*)this_; long size = *(long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, long, long, long) ) &QOpenGLExtraFunctions::glCopyBufferSubData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:354
// [-2] void glGetUniformIndices(GLuint, GLsizei, const GLchar *const *, GLuint *) 
// (12)qm2757664210 (57)_ZN21QOpenGLExtraFunctions19glGetUniformIndicesEjiPKPKcPj
//static
/*void qm2757664210(unsigned int program, int uniformCount, const char *const * uniformNames, unsigned int * uniformIndices)*/ {
  unsigned int program = *(unsigned int*)this_; int uniformCount = *(int*)this_; const char *const * uniformNames = *(const char *const **)this_; unsigned int * uniformIndices = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, char const* const*, unsigned int*) ) &QOpenGLExtraFunctions::glGetUniformIndices;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:355
// [-2] void glGetActiveUniformsiv(GLuint, GLsizei, const GLuint *, GLenum, GLint *) 
// (12)qm1398523577 (58)_ZN21QOpenGLExtraFunctions21glGetActiveUniformsivEjiPKjjPi
//static
/*void qm1398523577(unsigned int program, int uniformCount, const unsigned int * uniformIndices, unsigned int pname, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; int uniformCount = *(int*)this_; const unsigned int * uniformIndices = *(const unsigned int **)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int const*, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetActiveUniformsiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:356
// [4] GLuint glGetUniformBlockIndex(GLuint, const GLchar *) 
// (12)qm3361903706 (55)_ZN21QOpenGLExtraFunctions22glGetUniformBlockIndexEjPKc
//static
/*void qm3361903706(unsigned int program, const char * uniformBlockName)*/ {
  unsigned int program = *(unsigned int*)this_; const char * uniformBlockName = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetUniformBlockIndex(program, uniformBlockName);
   auto xptr = (unsigned int (QOpenGLExtraFunctions::*)(unsigned int, char const*) ) &QOpenGLExtraFunctions::glGetUniformBlockIndex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:357
// [-2] void glGetActiveUniformBlockiv(GLuint, GLuint, GLenum, GLint *) 
// (12)qm1457005247 (59)_ZN21QOpenGLExtraFunctions25glGetActiveUniformBlockivEjjjPi
//static
/*void qm1457005247(unsigned int program, unsigned int uniformBlockIndex, unsigned int pname, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int uniformBlockIndex = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetActiveUniformBlockiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:358
// [-2] void glGetActiveUniformBlockName(GLuint, GLuint, GLsizei, GLsizei *, GLchar *) 
// (12)qm1779347107 (63)_ZN21QOpenGLExtraFunctions27glGetActiveUniformBlockNameEjjiPiPc
//static
/*void qm1779347107(unsigned int program, unsigned int uniformBlockIndex, int bufSize, int * length, char * uniformBlockName)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int uniformBlockIndex = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; char * uniformBlockName = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, int*, char*) ) &QOpenGLExtraFunctions::glGetActiveUniformBlockName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:359
// [-2] void glUniformBlockBinding(GLuint, GLuint, GLuint) 
// (12)qm1053849581 (53)_ZN21QOpenGLExtraFunctions21glUniformBlockBindingEjjj
//static
/*void qm1053849581(unsigned int program, unsigned int uniformBlockIndex, unsigned int uniformBlockBinding)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int uniformBlockIndex = *(unsigned int*)this_; unsigned int uniformBlockBinding = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glUniformBlockBinding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:360
// [-2] void glDrawArraysInstanced(GLenum, GLint, GLsizei, GLsizei) 
// (11)qm566889201 (54)_ZN21QOpenGLExtraFunctions21glDrawArraysInstancedEjiii
//static
/*void qm566889201(unsigned int mode, int first, int count, int instancecount)*/ {
  unsigned int mode = *(unsigned int*)this_; int first = *(int*)this_; int count = *(int*)this_; int instancecount = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawArraysInstanced(mode, first, count, instancecount);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int) ) &QOpenGLExtraFunctions::glDrawArraysInstanced;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:361
// [-2] void glDrawElementsInstanced(GLenum, GLsizei, GLenum, const void *, GLsizei) 
// (12)qm1036051939 (59)_ZN21QOpenGLExtraFunctions23glDrawElementsInstancedEjijPKvi
//static
/*void qm1036051939(unsigned int mode, int count, unsigned int type_, const void * indices, int instancecount)*/ {
  unsigned int mode = *(unsigned int*)this_; int count = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indices = *(const void **)this_; int instancecount = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawElementsInstanced(mode, count, type_, indices, instancecount);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, void const*, int) ) &QOpenGLExtraFunctions::glDrawElementsInstanced;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:362
// [8] GLsync glFenceSync(GLenum, GLbitfield) 
// (12)qm2127968823 (42)_ZN21QOpenGLExtraFunctions11glFenceSyncEjj
//static
/*void qm2127968823(unsigned int condition, unsigned int flags)*/ {
  unsigned int condition = *(unsigned int*)this_; unsigned int flags = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glFenceSync(condition, flags);
   auto xptr = (__GLsync * (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glFenceSync;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:363
// [1] GLboolean glIsSync(GLsync) 
// (12)qm3393855023 (46)_ZN21QOpenGLExtraFunctions8glIsSyncEP8__GLsync
//static
/*void qm3393855023(__GLsync * sync)*/ {
  __GLsync * sync = *(__GLsync **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsSync(sync);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(__GLsync*) ) &QOpenGLExtraFunctions::glIsSync;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:364
// [-2] void glDeleteSync(GLsync) 
// (12)qm3445677424 (51)_ZN21QOpenGLExtraFunctions12glDeleteSyncEP8__GLsync
//static
/*void qm3445677424(__GLsync * sync)*/ {
  __GLsync * sync = *(__GLsync **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDeleteSync(sync);
   auto xptr = (void (QOpenGLExtraFunctions::*)(__GLsync*) ) &QOpenGLExtraFunctions::glDeleteSync;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:365
// [4] GLenum glClientWaitSync(GLsync, GLbitfield, GLuint64) 
// (12)qm3462137765 (57)_ZN21QOpenGLExtraFunctions16glClientWaitSyncEP8__GLsyncjm
//static
/*void qm3462137765(__GLsync * sync, unsigned int flags, unsigned long timeout)*/ {
  __GLsync * sync = *(__GLsync **)this_; unsigned int flags = *(unsigned int*)this_; unsigned long timeout = *(unsigned long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glClientWaitSync(sync, flags, timeout);
   auto xptr = (unsigned int (QOpenGLExtraFunctions::*)(__GLsync*, unsigned int, unsigned long) ) &QOpenGLExtraFunctions::glClientWaitSync;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:366
// [-2] void glWaitSync(GLsync, GLbitfield, GLuint64) 
// (12)qm2865020022 (51)_ZN21QOpenGLExtraFunctions10glWaitSyncEP8__GLsyncjm
//static
/*void qm2865020022(__GLsync * sync, unsigned int flags, unsigned long timeout)*/ {
  __GLsync * sync = *(__GLsync **)this_; unsigned int flags = *(unsigned int*)this_; unsigned long timeout = *(unsigned long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glWaitSync(sync, flags, timeout);
   auto xptr = (void (QOpenGLExtraFunctions::*)(__GLsync*, unsigned int, unsigned long) ) &QOpenGLExtraFunctions::glWaitSync;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:367
// [-2] void glGetInteger64v(GLenum, GLint64 *) 
// (11)qm463817917 (47)_ZN21QOpenGLExtraFunctions15glGetInteger64vEjPl
//static
/*void qm463817917(unsigned int pname, long * data)*/ {
  unsigned int pname = *(unsigned int*)this_; long * data = *(long **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetInteger64v(pname, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, long*) ) &QOpenGLExtraFunctions::glGetInteger64v;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:368
// [-2] void glGetSynciv(GLsync, GLenum, GLsizei, GLsizei *, GLint *) 
// (11)qm435403384 (57)_ZN21QOpenGLExtraFunctions11glGetSyncivEP8__GLsyncjiPiS2_
//static
/*void qm435403384(__GLsync * sync, unsigned int pname, int bufSize, int * length, int * values)*/ {
  __GLsync * sync = *(__GLsync **)this_; unsigned int pname = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; int * values = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetSynciv(sync, pname, bufSize, length, values);
   auto xptr = (void (QOpenGLExtraFunctions::*)(__GLsync*, unsigned int, int, int*, int*) ) &QOpenGLExtraFunctions::glGetSynciv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:369
// [-2] void glGetInteger64i_v(GLenum, GLuint, GLint64 *) 
// (10)qm26504149 (50)_ZN21QOpenGLExtraFunctions17glGetInteger64i_vEjjPl
//static
/*void qm26504149(unsigned int target, unsigned int index, long * data)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; long * data = *(long **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetInteger64i_v(target, index, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, long*) ) &QOpenGLExtraFunctions::glGetInteger64i_v;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:370
// [-2] void glGetBufferParameteri64v(GLenum, GLenum, GLint64 *) 
// (11)qm209474868 (57)_ZN21QOpenGLExtraFunctions24glGetBufferParameteri64vEjjPl
//static
/*void qm209474868(unsigned int target, unsigned int pname, long * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; long * params = *(long **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetBufferParameteri64v(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, long*) ) &QOpenGLExtraFunctions::glGetBufferParameteri64v;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:371
// [-2] void glGenSamplers(GLsizei, GLuint *) 
// (12)qm2882214056 (45)_ZN21QOpenGLExtraFunctions13glGenSamplersEiPj
//static
/*void qm2882214056(int count, unsigned int * samplers)*/ {
  int count = *(int*)this_; unsigned int * samplers = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGenSamplers(count, samplers);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int*) ) &QOpenGLExtraFunctions::glGenSamplers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:372
// [-2] void glDeleteSamplers(GLsizei, const GLuint *) 
// (12)qm2673405203 (49)_ZN21QOpenGLExtraFunctions16glDeleteSamplersEiPKj
//static
/*void qm2673405203(int count, const unsigned int * samplers)*/ {
  int count = *(int*)this_; const unsigned int * samplers = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDeleteSamplers(count, samplers);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int const*) ) &QOpenGLExtraFunctions::glDeleteSamplers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:373
// [1] GLboolean glIsSampler(GLuint) 
// (12)qm2618142875 (41)_ZN21QOpenGLExtraFunctions11glIsSamplerEj
//static
/*void qm2618142875(unsigned int sampler)*/ {
  unsigned int sampler = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsSampler(sampler);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glIsSampler;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:374
// [-2] void glBindSampler(GLuint, GLuint) 
// (12)qm1739033717 (44)_ZN21QOpenGLExtraFunctions13glBindSamplerEjj
//static
/*void qm1739033717(unsigned int unit, unsigned int sampler)*/ {
  unsigned int unit = *(unsigned int*)this_; unsigned int sampler = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindSampler(unit, sampler);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBindSampler;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:375
// [-2] void glSamplerParameteri(GLuint, GLenum, GLint) 
// (12)qm3086171587 (51)_ZN21QOpenGLExtraFunctions19glSamplerParameteriEjji
//static
/*void qm3086171587(unsigned int sampler, unsigned int pname, int param)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int param = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSamplerParameteri(sampler, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int) ) &QOpenGLExtraFunctions::glSamplerParameteri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:376
// [-2] void glSamplerParameteriv(GLuint, GLenum, const GLint *) 
// (12)qm3133085192 (54)_ZN21QOpenGLExtraFunctions20glSamplerParameterivEjjPKi
//static
/*void qm3133085192(unsigned int sampler, unsigned int pname, const int * param)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const int * param = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSamplerParameteriv(sampler, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int const*) ) &QOpenGLExtraFunctions::glSamplerParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:377
// [-2] void glSamplerParameterf(GLuint, GLenum, GLfloat) 
// (12)qm2770122627 (51)_ZN21QOpenGLExtraFunctions19glSamplerParameterfEjjf
//static
/*void qm2770122627(unsigned int sampler, unsigned int pname, float param)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; float param = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSamplerParameterf(sampler, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, float) ) &QOpenGLExtraFunctions::glSamplerParameterf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:378
// [-2] void glSamplerParameterfv(GLuint, GLenum, const GLfloat *) 
// (12)qm4078967093 (54)_ZN21QOpenGLExtraFunctions20glSamplerParameterfvEjjPKf
//static
/*void qm4078967093(unsigned int sampler, unsigned int pname, const float * param)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const float * param = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSamplerParameterfv(sampler, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, float const*) ) &QOpenGLExtraFunctions::glSamplerParameterfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:379
// [-2] void glGetSamplerParameteriv(GLuint, GLenum, GLint *) 
// (12)qm3092384132 (56)_ZN21QOpenGLExtraFunctions23glGetSamplerParameterivEjjPi
//static
/*void qm3092384132(unsigned int sampler, unsigned int pname, int * params)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetSamplerParameteriv(sampler, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetSamplerParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:380
// [-2] void glGetSamplerParameterfv(GLuint, GLenum, GLfloat *) 
// (12)qm3735381244 (56)_ZN21QOpenGLExtraFunctions23glGetSamplerParameterfvEjjPf
//static
/*void qm3735381244(unsigned int sampler, unsigned int pname, float * params)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetSamplerParameterfv(sampler, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, float*) ) &QOpenGLExtraFunctions::glGetSamplerParameterfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:381
// [-2] void glVertexAttribDivisor(GLuint, GLuint) 
// (11)qm294784123 (52)_ZN21QOpenGLExtraFunctions21glVertexAttribDivisorEjj
//static
/*void qm294784123(unsigned int index, unsigned int divisor)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int divisor = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribDivisor(index, divisor);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glVertexAttribDivisor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:382
// [-2] void glBindTransformFeedback(GLenum, GLuint) 
// (12)qm1920413833 (54)_ZN21QOpenGLExtraFunctions23glBindTransformFeedbackEjj
//static
/*void qm1920413833(unsigned int target, unsigned int id)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int id = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindTransformFeedback(target, id);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBindTransformFeedback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:383
// [-2] void glDeleteTransformFeedbacks(GLsizei, const GLuint *) 
// (12)qm3162488587 (59)_ZN21QOpenGLExtraFunctions26glDeleteTransformFeedbacksEiPKj
//static
/*void qm3162488587(int n, const unsigned int * ids)*/ {
  int n = *(int*)this_; const unsigned int * ids = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDeleteTransformFeedbacks(n, ids);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int const*) ) &QOpenGLExtraFunctions::glDeleteTransformFeedbacks;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:384
// [-2] void glGenTransformFeedbacks(GLsizei, GLuint *) 
// (11)qm203002365 (55)_ZN21QOpenGLExtraFunctions23glGenTransformFeedbacksEiPj
//static
/*void qm203002365(int n, unsigned int * ids)*/ {
  int n = *(int*)this_; unsigned int * ids = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGenTransformFeedbacks(n, ids);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int*) ) &QOpenGLExtraFunctions::glGenTransformFeedbacks;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:385
// [1] GLboolean glIsTransformFeedback(GLuint) 
// (12)qm3508367724 (51)_ZN21QOpenGLExtraFunctions21glIsTransformFeedbackEj
//static
/*void qm3508367724(unsigned int id)*/ {
  unsigned int id = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsTransformFeedback(id);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glIsTransformFeedback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:386
// [-2] void glPauseTransformFeedback() 
// (11)qm870074633 (54)_ZN21QOpenGLExtraFunctions24glPauseTransformFeedbackEv
//static
/*void qm870074633()*/ {
  ;
  (void) ((QOpenGLExtraFunctions*)this_)->glPauseTransformFeedback();
   auto xptr = (void (QOpenGLExtraFunctions::*)() ) &QOpenGLExtraFunctions::glPauseTransformFeedback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:387
// [-2] void glResumeTransformFeedback() 
// (12)qm2629410895 (55)_ZN21QOpenGLExtraFunctions25glResumeTransformFeedbackEv
//static
/*void qm2629410895()*/ {
  ;
  (void) ((QOpenGLExtraFunctions*)this_)->glResumeTransformFeedback();
   auto xptr = (void (QOpenGLExtraFunctions::*)() ) &QOpenGLExtraFunctions::glResumeTransformFeedback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:388
// [-2] void glGetProgramBinary(GLuint, GLsizei, GLsizei *, GLenum *, void *) 
// (12)qm3645730327 (55)_ZN21QOpenGLExtraFunctions18glGetProgramBinaryEjiPiPjPv
//static
/*void qm3645730327(unsigned int program, int bufSize, int * length, unsigned int * binaryFormat, void * binary)*/ {
  unsigned int program = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; unsigned int * binaryFormat = *(unsigned int **)this_; void * binary = *(void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int*, unsigned int*, void*) ) &QOpenGLExtraFunctions::glGetProgramBinary;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:389
// [-2] void glProgramBinary(GLuint, GLenum, const void *, GLsizei) 
// (12)qm1769799045 (50)_ZN21QOpenGLExtraFunctions15glProgramBinaryEjjPKvi
//static
/*void qm1769799045(unsigned int program, unsigned int binaryFormat, const void * binary, int length)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int binaryFormat = *(unsigned int*)this_; const void * binary = *(const void **)this_; int length = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramBinary(program, binaryFormat, binary, length);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, void const*, int) ) &QOpenGLExtraFunctions::glProgramBinary;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:390
// [-2] void glProgramParameteri(GLuint, GLenum, GLint) 
// (12)qm2853533948 (51)_ZN21QOpenGLExtraFunctions19glProgramParameteriEjji
//static
/*void qm2853533948(unsigned int program, unsigned int pname, int value)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int value = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramParameteri(program, pname, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int) ) &QOpenGLExtraFunctions::glProgramParameteri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:391
// [-2] void glInvalidateFramebuffer(GLenum, GLsizei, const GLenum *) 
// (12)qm1150443934 (57)_ZN21QOpenGLExtraFunctions23glInvalidateFramebufferEjiPKj
//static
/*void qm1150443934(unsigned int target, int numAttachments, const unsigned int * attachments)*/ {
  unsigned int target = *(unsigned int*)this_; int numAttachments = *(int*)this_; const unsigned int * attachments = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glInvalidateFramebuffer(target, numAttachments, attachments);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glInvalidateFramebuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:392
// [-2] void glInvalidateSubFramebuffer(GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei) 
// (12)qm3115889702 (64)_ZN21QOpenGLExtraFunctions26glInvalidateSubFramebufferEjiPKjiiii
//static
/*void qm3115889702(unsigned int target, int numAttachments, const unsigned int * attachments, int x, int y, int width, int height)*/ {
  unsigned int target = *(unsigned int*)this_; int numAttachments = *(int*)this_; const unsigned int * attachments = *(const unsigned int **)this_; int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int const*, int, int, int, int) ) &QOpenGLExtraFunctions::glInvalidateSubFramebuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:393
// [-2] void glTexStorage2D(GLenum, GLsizei, GLenum, GLsizei, GLsizei) 
// (12)qm3630074280 (48)_ZN21QOpenGLExtraFunctions14glTexStorage2DEjijii
//static
/*void qm3630074280(unsigned int target, int levels, unsigned int internalformat, int width, int height)*/ {
  unsigned int target = *(unsigned int*)this_; int levels = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexStorage2D(target, levels, internalformat, width, height);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, int) ) &QOpenGLExtraFunctions::glTexStorage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:394
// [-2] void glTexStorage3D(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei) 
// (11)qm700602209 (49)_ZN21QOpenGLExtraFunctions14glTexStorage3DEjijiii
//static
/*void qm700602209(unsigned int target, int levels, unsigned int internalformat, int width, int height, int depth)*/ {
  unsigned int target = *(unsigned int*)this_; int levels = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_; int depth = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexStorage3D(target, levels, internalformat, width, height, depth);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, int, int) ) &QOpenGLExtraFunctions::glTexStorage3D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:395
// [-2] void glGetInternalformativ(GLenum, GLenum, GLenum, GLsizei, GLint *) 
// (12)qm2969488576 (56)_ZN21QOpenGLExtraFunctions21glGetInternalformativEjjjiPi
//static
/*void qm2969488576(unsigned int target, unsigned int internalformat, unsigned int pname, int bufSize, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int internalformat = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int bufSize = *(int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetInternalformativ(target, internalformat, pname, bufSize, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, int*) ) &QOpenGLExtraFunctions::glGetInternalformativ;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:398
// [-2] void glDispatchCompute(GLuint, GLuint, GLuint) 
// (12)qm3089597232 (49)_ZN21QOpenGLExtraFunctions17glDispatchComputeEjjj
//static
/*void qm3089597232(unsigned int num_groups_x, unsigned int num_groups_y, unsigned int num_groups_z)*/ {
  unsigned int num_groups_x = *(unsigned int*)this_; unsigned int num_groups_y = *(unsigned int*)this_; unsigned int num_groups_z = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glDispatchCompute;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:399
// [-2] void glDispatchComputeIndirect(GLintptr) 
// (12)qm3571328701 (55)_ZN21QOpenGLExtraFunctions25glDispatchComputeIndirectEl
//static
/*void qm3571328701(long indirect)*/ {
  long indirect = *(long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDispatchComputeIndirect(indirect);
   auto xptr = (void (QOpenGLExtraFunctions::*)(long) ) &QOpenGLExtraFunctions::glDispatchComputeIndirect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:400
// [-2] void glDrawArraysIndirect(GLenum, const void *) 
// (12)qm3289344111 (53)_ZN21QOpenGLExtraFunctions20glDrawArraysIndirectEjPKv
//static
/*void qm3289344111(unsigned int mode, const void * indirect)*/ {
  unsigned int mode = *(unsigned int*)this_; const void * indirect = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawArraysIndirect(mode, indirect);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, void const*) ) &QOpenGLExtraFunctions::glDrawArraysIndirect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:401
// [-2] void glDrawElementsIndirect(GLenum, GLenum, const void *) 
// (12)qm4090203102 (56)_ZN21QOpenGLExtraFunctions22glDrawElementsIndirectEjjPKv
//static
/*void qm4090203102(unsigned int mode, unsigned int type_, const void * indirect)*/ {
  unsigned int mode = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indirect = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawElementsIndirect(mode, type_, indirect);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, void const*) ) &QOpenGLExtraFunctions::glDrawElementsIndirect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:402
// [-2] void glFramebufferParameteri(GLenum, GLenum, GLint) 
// (12)qm1912560087 (55)_ZN21QOpenGLExtraFunctions23glFramebufferParameteriEjji
//static
/*void qm1912560087(unsigned int target, unsigned int pname, int param)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int param = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glFramebufferParameteri(target, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int) ) &QOpenGLExtraFunctions::glFramebufferParameteri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:403
// [-2] void glGetFramebufferParameteriv(GLenum, GLenum, GLint *) 
// (10)qm87219931 (60)_ZN21QOpenGLExtraFunctions27glGetFramebufferParameterivEjjPi
//static
/*void qm87219931(unsigned int target, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetFramebufferParameteriv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetFramebufferParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:404
// [-2] void glGetProgramInterfaceiv(GLuint, GLenum, GLenum, GLint *) 
// (12)qm4253361946 (57)_ZN21QOpenGLExtraFunctions23glGetProgramInterfaceivEjjjPi
//static
/*void qm4253361946(unsigned int program, unsigned int programInterface, unsigned int pname, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int programInterface = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramInterfaceiv(program, programInterface, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetProgramInterfaceiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:405
// [4] GLuint glGetProgramResourceIndex(GLuint, GLenum, const GLchar *) 
// (12)qm2251774502 (59)_ZN21QOpenGLExtraFunctions25glGetProgramResourceIndexEjjPKc
//static
/*void qm2251774502(unsigned int program, unsigned int programInterface, const char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int programInterface = *(unsigned int*)this_; const char * name = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramResourceIndex(program, programInterface, name);
   auto xptr = (unsigned int (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, char const*) ) &QOpenGLExtraFunctions::glGetProgramResourceIndex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:406
// [-2] void glGetProgramResourceName(GLuint, GLenum, GLuint, GLsizei, GLsizei *, GLchar *) 
// (12)qm3993496810 (61)_ZN21QOpenGLExtraFunctions24glGetProgramResourceNameEjjjiPiPc
//static
/*void qm3993496810(unsigned int program, unsigned int programInterface, unsigned int index, int bufSize, int * length, char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int programInterface = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; char * name = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, int*, char*) ) &QOpenGLExtraFunctions::glGetProgramResourceName;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:407
// [-2] void glGetProgramResourceiv(GLuint, GLenum, GLuint, GLsizei, const GLenum *, GLsizei, GLsizei *, GLint *) 
// (12)qm4120852967 (64)_ZN21QOpenGLExtraFunctions22glGetProgramResourceivEjjjiPKjiPiS2_
//static
/*void qm4120852967(unsigned int program, unsigned int programInterface, unsigned int index, int propCount, const unsigned int * props, int bufSize, int * length, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int programInterface = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; int propCount = *(int*)this_; const unsigned int * props = *(const unsigned int **)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, unsigned int const*, int, int*, int*) ) &QOpenGLExtraFunctions::glGetProgramResourceiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:408
// [4] GLint glGetProgramResourceLocation(GLuint, GLenum, const GLchar *) 
// (12)qm2419315289 (62)_ZN21QOpenGLExtraFunctions28glGetProgramResourceLocationEjjPKc
//static
/*void qm2419315289(unsigned int program, unsigned int programInterface, const char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int programInterface = *(unsigned int*)this_; const char * name = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramResourceLocation(program, programInterface, name);
   auto xptr = (int (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, char const*) ) &QOpenGLExtraFunctions::glGetProgramResourceLocation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:409
// [-2] void glUseProgramStages(GLuint, GLbitfield, GLuint) 
// (12)qm4148453825 (50)_ZN21QOpenGLExtraFunctions18glUseProgramStagesEjjj
//static
/*void qm4148453825(unsigned int pipeline, unsigned int stages, unsigned int program)*/ {
  unsigned int pipeline = *(unsigned int*)this_; unsigned int stages = *(unsigned int*)this_; unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glUseProgramStages(pipeline, stages, program);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glUseProgramStages;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:410
// [-2] void glActiveShaderProgram(GLuint, GLuint) 
// (11)qm940833085 (52)_ZN21QOpenGLExtraFunctions21glActiveShaderProgramEjj
//static
/*void qm940833085(unsigned int pipeline, unsigned int program)*/ {
  unsigned int pipeline = *(unsigned int*)this_; unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glActiveShaderProgram(pipeline, program);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glActiveShaderProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:411
// [4] GLuint glCreateShaderProgramv(GLenum, GLsizei, const GLchar *const *) 
// (12)qm2072989883 (58)_ZN21QOpenGLExtraFunctions22glCreateShaderProgramvEjiPKPKc
//static
/*void qm2072989883(unsigned int type_, int count, const char *const * strings)*/ {
  unsigned int type_ = *(unsigned int*)this_; int count = *(int*)this_; const char *const * strings = *(const char *const **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glCreateShaderProgramv(type_, count, strings);
   auto xptr = (unsigned int (QOpenGLExtraFunctions::*)(unsigned int, int, char const* const*) ) &QOpenGLExtraFunctions::glCreateShaderProgramv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:412
// [-2] void glBindProgramPipeline(GLuint) 
// (11)qm392957396 (51)_ZN21QOpenGLExtraFunctions21glBindProgramPipelineEj
//static
/*void qm392957396(unsigned int pipeline)*/ {
  unsigned int pipeline = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindProgramPipeline(pipeline);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glBindProgramPipeline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:413
// [-2] void glDeleteProgramPipelines(GLsizei, const GLuint *) 
// (12)qm1637278735 (57)_ZN21QOpenGLExtraFunctions24glDeleteProgramPipelinesEiPKj
//static
/*void qm1637278735(int n, const unsigned int * pipelines)*/ {
  int n = *(int*)this_; const unsigned int * pipelines = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDeleteProgramPipelines(n, pipelines);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int const*) ) &QOpenGLExtraFunctions::glDeleteProgramPipelines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:414
// [-2] void glGenProgramPipelines(GLsizei, GLuint *) 
// (12)qm4134203939 (53)_ZN21QOpenGLExtraFunctions21glGenProgramPipelinesEiPj
//static
/*void qm4134203939(int n, unsigned int * pipelines)*/ {
  int n = *(int*)this_; unsigned int * pipelines = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGenProgramPipelines(n, pipelines);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, unsigned int*) ) &QOpenGLExtraFunctions::glGenProgramPipelines;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:415
// [1] GLboolean glIsProgramPipeline(GLuint) 
// (12)qm2998891575 (49)_ZN21QOpenGLExtraFunctions19glIsProgramPipelineEj
//static
/*void qm2998891575(unsigned int pipeline)*/ {
  unsigned int pipeline = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsProgramPipeline(pipeline);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glIsProgramPipeline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:416
// [-2] void glGetProgramPipelineiv(GLuint, GLenum, GLint *) 
// (11)qm376633739 (55)_ZN21QOpenGLExtraFunctions22glGetProgramPipelineivEjjPi
//static
/*void qm376633739(unsigned int pipeline, unsigned int pname, int * params)*/ {
  unsigned int pipeline = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramPipelineiv(pipeline, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetProgramPipelineiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:417
// [-2] void glProgramUniform1i(GLuint, GLint, GLint) 
// (12)qm3400367000 (50)_ZN21QOpenGLExtraFunctions18glProgramUniform1iEjii
//static
/*void qm3400367000(unsigned int program, int location, int v0)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int v0 = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform1i(program, location, v0);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int) ) &QOpenGLExtraFunctions::glProgramUniform1i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:418
// [-2] void glProgramUniform2i(GLuint, GLint, GLint, GLint) 
// (11)qm697998049 (51)_ZN21QOpenGLExtraFunctions18glProgramUniform2iEjiii
//static
/*void qm697998049(unsigned int program, int location, int v0, int v1)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int v0 = *(int*)this_; int v1 = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform2i(program, location, v0, v1);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int) ) &QOpenGLExtraFunctions::glProgramUniform2i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:419
// [-2] void glProgramUniform3i(GLuint, GLint, GLint, GLint, GLint) 
// (12)qm4259479195 (52)_ZN21QOpenGLExtraFunctions18glProgramUniform3iEjiiii
//static
/*void qm4259479195(unsigned int program, int location, int v0, int v1, int v2)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int v0 = *(int*)this_; int v1 = *(int*)this_; int v2 = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform3i(program, location, v0, v1, v2);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int) ) &QOpenGLExtraFunctions::glProgramUniform3i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:420
// [-2] void glProgramUniform4i(GLuint, GLint, GLint, GLint, GLint, GLint) 
// (12)qm3844993802 (53)_ZN21QOpenGLExtraFunctions18glProgramUniform4iEjiiiii
//static
/*void qm3844993802(unsigned int program, int location, int v0, int v1, int v2, int v3)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int v0 = *(int*)this_; int v1 = *(int*)this_; int v2 = *(int*)this_; int v3 = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform4i(program, location, v0, v1, v2, v3);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int, int, int) ) &QOpenGLExtraFunctions::glProgramUniform4i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:421
// [-2] void glProgramUniform1ui(GLuint, GLint, GLuint) 
// (12)qm2322380085 (51)_ZN21QOpenGLExtraFunctions19glProgramUniform1uiEjij
//static
/*void qm2322380085(unsigned int program, int location, unsigned int v0)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform1ui(program, location, v0);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int) ) &QOpenGLExtraFunctions::glProgramUniform1ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:422
// [-2] void glProgramUniform2ui(GLuint, GLint, GLuint, GLuint) 
// (12)qm2815674558 (52)_ZN21QOpenGLExtraFunctions19glProgramUniform2uiEjijj
//static
/*void qm2815674558(unsigned int program, int location, unsigned int v0, unsigned int v1)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_; unsigned int v1 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform2ui(program, location, v0, v1);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glProgramUniform2ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:423
// [-2] void glProgramUniform3ui(GLuint, GLint, GLuint, GLuint, GLuint) 
// (12)qm1147158219 (53)_ZN21QOpenGLExtraFunctions19glProgramUniform3uiEjijjj
//static
/*void qm1147158219(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_; unsigned int v1 = *(unsigned int*)this_; unsigned int v2 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform3ui(program, location, v0, v1, v2);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glProgramUniform3ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:424
// [-2] void glProgramUniform4ui(GLuint, GLint, GLuint, GLuint, GLuint, GLuint) 
// (12)qm2437613492 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform4uiEjijjjj
//static
/*void qm2437613492(unsigned int program, int location, unsigned int v0, unsigned int v1, unsigned int v2, unsigned int v3)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; unsigned int v0 = *(unsigned int*)this_; unsigned int v1 = *(unsigned int*)this_; unsigned int v2 = *(unsigned int*)this_; unsigned int v3 = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform4ui(program, location, v0, v1, v2, v3);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glProgramUniform4ui;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:425
// [-2] void glProgramUniform1f(GLuint, GLint, GLfloat) 
// (12)qm3628265944 (50)_ZN21QOpenGLExtraFunctions18glProgramUniform1fEjif
//static
/*void qm3628265944(unsigned int program, int location, float v0)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; float v0 = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform1f(program, location, v0);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, float) ) &QOpenGLExtraFunctions::glProgramUniform1f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:426
// [-2] void glProgramUniform2f(GLuint, GLint, GLfloat, GLfloat) 
// (12)qm3488295274 (51)_ZN21QOpenGLExtraFunctions18glProgramUniform2fEjiff
//static
/*void qm3488295274(unsigned int program, int location, float v0, float v1)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; float v0 = *(float*)this_; float v1 = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform2f(program, location, v0, v1);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, float, float) ) &QOpenGLExtraFunctions::glProgramUniform2f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:427
// [-2] void glProgramUniform3f(GLuint, GLint, GLfloat, GLfloat, GLfloat) 
// (11)qm399591441 (52)_ZN21QOpenGLExtraFunctions18glProgramUniform3fEjifff
//static
/*void qm399591441(unsigned int program, int location, float v0, float v1, float v2)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; float v0 = *(float*)this_; float v1 = *(float*)this_; float v2 = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform3f(program, location, v0, v1, v2);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, float, float, float) ) &QOpenGLExtraFunctions::glProgramUniform3f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:428
// [-2] void glProgramUniform4f(GLuint, GLint, GLfloat, GLfloat, GLfloat, GLfloat) 
// (12)qm2014689171 (53)_ZN21QOpenGLExtraFunctions18glProgramUniform4fEjiffff
//static
/*void qm2014689171(unsigned int program, int location, float v0, float v1, float v2, float v3)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; float v0 = *(float*)this_; float v1 = *(float*)this_; float v2 = *(float*)this_; float v3 = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform4f(program, location, v0, v1, v2, v3);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, float, float, float, float) ) &QOpenGLExtraFunctions::glProgramUniform4f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:429
// [-2] void glProgramUniform1iv(GLuint, GLint, GLsizei, const GLint *) 
// (12)qm3067270627 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform1ivEjiiPKi
//static
/*void qm3067270627(unsigned int program, int location, int count, const int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const int * value = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform1iv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int const*) ) &QOpenGLExtraFunctions::glProgramUniform1iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:430
// [-2] void glProgramUniform2iv(GLuint, GLint, GLsizei, const GLint *) 
// (12)qm1575317216 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform2ivEjiiPKi
//static
/*void qm1575317216(unsigned int program, int location, int count, const int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const int * value = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform2iv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int const*) ) &QOpenGLExtraFunctions::glProgramUniform2iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:431
// [-2] void glProgramUniform3iv(GLuint, GLint, GLsizei, const GLint *) 
// (12)qm2988901854 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform3ivEjiiPKi
//static
/*void qm2988901854(unsigned int program, int location, int count, const int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const int * value = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform3iv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int const*) ) &QOpenGLExtraFunctions::glProgramUniform3iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:432
// [-2] void glProgramUniform4iv(GLuint, GLint, GLsizei, const GLint *) 
// (12)qm1358634663 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform4ivEjiiPKi
//static
/*void qm1358634663(unsigned int program, int location, int count, const int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const int * value = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform4iv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int const*) ) &QOpenGLExtraFunctions::glProgramUniform4iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:433
// [-2] void glProgramUniform1uiv(GLuint, GLint, GLsizei, const GLuint *) 
// (11)qm803751516 (55)_ZN21QOpenGLExtraFunctions20glProgramUniform1uivEjiiPKj
//static
/*void qm803751516(unsigned int program, int location, int count, const unsigned int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform1uiv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glProgramUniform1uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:434
// [-2] void glProgramUniform2uiv(GLuint, GLint, GLsizei, const GLuint *) 
// (12)qm3054116957 (55)_ZN21QOpenGLExtraFunctions20glProgramUniform2uivEjiiPKj
//static
/*void qm3054116957(unsigned int program, int location, int count, const unsigned int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform2uiv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glProgramUniform2uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:435
// [-2] void glProgramUniform3uiv(GLuint, GLint, GLsizei, const GLuint *) 
// (12)qm2005204893 (55)_ZN21QOpenGLExtraFunctions20glProgramUniform3uivEjiiPKj
//static
/*void qm2005204893(unsigned int program, int location, int count, const unsigned int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform3uiv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glProgramUniform3uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:436
// [-2] void glProgramUniform4uiv(GLuint, GLint, GLsizei, const GLuint *) 
// (12)qm1589635614 (55)_ZN21QOpenGLExtraFunctions20glProgramUniform4uivEjiiPKj
//static
/*void qm1589635614(unsigned int program, int location, int count, const unsigned int * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const unsigned int * value = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform4uiv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned int const*) ) &QOpenGLExtraFunctions::glProgramUniform4uiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:437
// [-2] void glProgramUniform1fv(GLuint, GLint, GLsizei, const GLfloat *) 
// (12)qm4191422371 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform1fvEjiiPKf
//static
/*void qm4191422371(unsigned int program, int location, int count, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform1fv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, float const*) ) &QOpenGLExtraFunctions::glProgramUniform1fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:438
// [-2] void glProgramUniform2fv(GLuint, GLint, GLsizei, const GLfloat *) 
// (11)qm316914848 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform2fvEjiiPKf
//static
/*void qm316914848(unsigned int program, int location, int count, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform2fv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, float const*) ) &QOpenGLExtraFunctions::glProgramUniform2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:439
// [-2] void glProgramUniform3fv(GLuint, GLint, GLsizei, const GLfloat *) 
// (12)qm4246853534 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform3fvEjiiPKf
//static
/*void qm4246853534(unsigned int program, int location, int count, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform3fv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, float const*) ) &QOpenGLExtraFunctions::glProgramUniform3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:440
// [-2] void glProgramUniform4fv(GLuint, GLint, GLsizei, const GLfloat *) 
// (11)qm536726759 (54)_ZN21QOpenGLExtraFunctions19glProgramUniform4fvEjiiPKf
//static
/*void qm536726759(unsigned int program, int location, int count, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniform4fv(program, location, count, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, float const*) ) &QOpenGLExtraFunctions::glProgramUniform4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:441
// [-2] void glProgramUniformMatrix2fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm4038037131 (61)_ZN21QOpenGLExtraFunctions25glProgramUniformMatrix2fvEjiihPKf
//static
/*void qm4038037131(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix2fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:442
// [-2] void glProgramUniformMatrix3fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm824267083 (61)_ZN21QOpenGLExtraFunctions25glProgramUniformMatrix3fvEjiihPKf
//static
/*void qm824267083(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix3fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:443
// [-2] void glProgramUniformMatrix4fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm404374728 (61)_ZN21QOpenGLExtraFunctions25glProgramUniformMatrix4fvEjiihPKf
//static
/*void qm404374728(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix4fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:444
// [-2] void glProgramUniformMatrix2x3fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm334991330 (63)_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix2x3fvEjiihPKf
//static
/*void qm334991330(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix2x3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:445
// [-2] void glProgramUniformMatrix3x2fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm267356583 (63)_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix3x2fvEjiihPKf
//static
/*void qm267356583(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix3x2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:446
// [-2] void glProgramUniformMatrix2x4fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm986487393 (63)_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix2x4fvEjiihPKf
//static
/*void qm986487393(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix2x4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:447
// [-2] void glProgramUniformMatrix4x2fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm1922863103 (63)_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix4x2fvEjiihPKf
//static
/*void qm1922863103(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix4x2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:448
// [-2] void glProgramUniformMatrix3x4fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm3881452516 (63)_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix3x4fvEjiihPKf
//static
/*void qm3881452516(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix3x4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:449
// [-2] void glProgramUniformMatrix4x3fv(GLuint, GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm3004321855 (63)_ZN21QOpenGLExtraFunctions27glProgramUniformMatrix4x3fvEjiihPKf
//static
/*void qm3004321855(unsigned int program, int location, int count, unsigned char transpose, const float * value)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned char, float const*) ) &QOpenGLExtraFunctions::glProgramUniformMatrix4x3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:450
// [-2] void glValidateProgramPipeline(GLuint) 
// (12)qm2078966073 (55)_ZN21QOpenGLExtraFunctions25glValidateProgramPipelineEj
//static
/*void qm2078966073(unsigned int pipeline)*/ {
  unsigned int pipeline = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glValidateProgramPipeline(pipeline);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glValidateProgramPipeline;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:451
// [-2] void glGetProgramPipelineInfoLog(GLuint, GLsizei, GLsizei *, GLchar *) 
// (12)qm3324568007 (62)_ZN21QOpenGLExtraFunctions27glGetProgramPipelineInfoLogEjiPiPc
//static
/*void qm3324568007(unsigned int pipeline, int bufSize, int * length, char * infoLog)*/ {
  unsigned int pipeline = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; char * infoLog = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int*, char*) ) &QOpenGLExtraFunctions::glGetProgramPipelineInfoLog;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:452
// [-2] void glBindImageTexture(GLuint, GLuint, GLint, GLboolean, GLint, GLenum, GLenum) 
// (12)qm3209758647 (54)_ZN21QOpenGLExtraFunctions18glBindImageTextureEjjihijj
//static
/*void qm3209758647(unsigned int unit, unsigned int texture, int level, unsigned char layered, int layer, unsigned int access, unsigned int format)*/ {
  unsigned int unit = *(unsigned int*)this_; unsigned int texture = *(unsigned int*)this_; int level = *(int*)this_; unsigned char layered = *(unsigned char*)this_; int layer = *(int*)this_; unsigned int access = *(unsigned int*)this_; unsigned int format = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindImageTexture(unit, texture, level, layered, layer, access, format);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, unsigned char, int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBindImageTexture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:453
// [-2] void glGetBooleani_v(GLenum, GLuint, GLboolean *) 
// (12)qm3992404200 (48)_ZN21QOpenGLExtraFunctions15glGetBooleani_vEjjPh
//static
/*void qm3992404200(unsigned int target, unsigned int index, unsigned char * data)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; unsigned char * data = *(unsigned char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetBooleani_v(target, index, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned char*) ) &QOpenGLExtraFunctions::glGetBooleani_v;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:454
// [-2] void glMemoryBarrier(GLbitfield) 
// (12)qm3810498677 (45)_ZN21QOpenGLExtraFunctions15glMemoryBarrierEj
//static
/*void qm3810498677(unsigned int barriers)*/ {
  unsigned int barriers = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glMemoryBarrier(barriers);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glMemoryBarrier;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:455
// [-2] void glMemoryBarrierByRegion(GLbitfield) 
// (12)qm1973514086 (53)_ZN21QOpenGLExtraFunctions23glMemoryBarrierByRegionEj
//static
/*void qm1973514086(unsigned int barriers)*/ {
  unsigned int barriers = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glMemoryBarrierByRegion(barriers);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int) ) &QOpenGLExtraFunctions::glMemoryBarrierByRegion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:456
// [-2] void glTexStorage2DMultisample(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLboolean) 
// (12)qm4067473577 (60)_ZN21QOpenGLExtraFunctions25glTexStorage2DMultisampleEjijiih
//static
/*void qm4067473577(unsigned int target, int samples, unsigned int internalformat, int width, int height, unsigned char fixedsamplelocations)*/ {
  unsigned int target = *(unsigned int*)this_; int samples = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_; unsigned char fixedsamplelocations = *(unsigned char*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, int, unsigned char) ) &QOpenGLExtraFunctions::glTexStorage2DMultisample;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:457
// [-2] void glGetMultisamplefv(GLenum, GLuint, GLfloat *) 
// (12)qm1755677028 (51)_ZN21QOpenGLExtraFunctions18glGetMultisamplefvEjjPf
//static
/*void qm1755677028(unsigned int pname, unsigned int index, float * val)*/ {
  unsigned int pname = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; float * val = *(float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetMultisamplefv(pname, index, val);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, float*) ) &QOpenGLExtraFunctions::glGetMultisamplefv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:458
// [-2] void glSampleMaski(GLuint, GLbitfield) 
// (12)qm2580235423 (44)_ZN21QOpenGLExtraFunctions13glSampleMaskiEjj
//static
/*void qm2580235423(unsigned int maskNumber, unsigned int mask)*/ {
  unsigned int maskNumber = *(unsigned int*)this_; unsigned int mask = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSampleMaski(maskNumber, mask);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glSampleMaski;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:459
// [-2] void glGetTexLevelParameteriv(GLenum, GLint, GLenum, GLint *) 
// (12)qm4191244641 (58)_ZN21QOpenGLExtraFunctions24glGetTexLevelParameterivEjijPi
//static
/*void qm4191244641(unsigned int target, int level, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetTexLevelParameteriv(target, level, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetTexLevelParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:460
// [-2] void glGetTexLevelParameterfv(GLenum, GLint, GLenum, GLfloat *) 
// (12)qm2957925980 (58)_ZN21QOpenGLExtraFunctions24glGetTexLevelParameterfvEjijPf
//static
/*void qm2957925980(unsigned int target, int level, unsigned int pname, float * params)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; unsigned int pname = *(unsigned int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetTexLevelParameterfv(target, level, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, float*) ) &QOpenGLExtraFunctions::glGetTexLevelParameterfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:461
// [-2] void glBindVertexBuffer(GLuint, GLuint, GLintptr, GLsizei) 
// (12)qm2329471947 (51)_ZN21QOpenGLExtraFunctions18glBindVertexBufferEjjli
//static
/*void qm2329471947(unsigned int bindingindex, unsigned int buffer, long offset, int stride)*/ {
  unsigned int bindingindex = *(unsigned int*)this_; unsigned int buffer = *(unsigned int*)this_; long offset = *(long*)this_; int stride = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBindVertexBuffer(bindingindex, buffer, offset, stride);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, long, int) ) &QOpenGLExtraFunctions::glBindVertexBuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:462
// [-2] void glVertexAttribFormat(GLuint, GLint, GLenum, GLboolean, GLuint) 
// (12)qm2852054581 (54)_ZN21QOpenGLExtraFunctions20glVertexAttribFormatEjijhj
//static
/*void qm2852054581(unsigned int attribindex, int size, unsigned int type_, unsigned char normalized, unsigned int relativeoffset)*/ {
  unsigned int attribindex = *(unsigned int*)this_; int size = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; unsigned char normalized = *(unsigned char*)this_; unsigned int relativeoffset = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribFormat(attribindex, size, type_, normalized, relativeoffset);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, unsigned char, unsigned int) ) &QOpenGLExtraFunctions::glVertexAttribFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:463
// [-2] void glVertexAttribIFormat(GLuint, GLint, GLenum, GLuint) 
// (11)qm623242593 (54)_ZN21QOpenGLExtraFunctions21glVertexAttribIFormatEjijj
//static
/*void qm623242593(unsigned int attribindex, int size, unsigned int type_, unsigned int relativeoffset)*/ {
  unsigned int attribindex = *(unsigned int*)this_; int size = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; unsigned int relativeoffset = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribIFormat(attribindex, size, type_, relativeoffset);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glVertexAttribIFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:464
// [-2] void glVertexAttribBinding(GLuint, GLuint) 
// (11)qm720345218 (52)_ZN21QOpenGLExtraFunctions21glVertexAttribBindingEjj
//static
/*void qm720345218(unsigned int attribindex, unsigned int bindingindex)*/ {
  unsigned int attribindex = *(unsigned int*)this_; unsigned int bindingindex = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexAttribBinding(attribindex, bindingindex);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glVertexAttribBinding;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:465
// [-2] void glVertexBindingDivisor(GLuint, GLuint) 
// (12)qm1275859917 (53)_ZN21QOpenGLExtraFunctions22glVertexBindingDivisorEjj
//static
/*void qm1275859917(unsigned int bindingindex, unsigned int divisor)*/ {
  unsigned int bindingindex = *(unsigned int*)this_; unsigned int divisor = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glVertexBindingDivisor(bindingindex, divisor);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glVertexBindingDivisor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:468
// [-2] void glBlendBarrier() 
// (11)qm782232093 (44)_ZN21QOpenGLExtraFunctions14glBlendBarrierEv
//static
/*void qm782232093()*/ {
  ;
  (void) ((QOpenGLExtraFunctions*)this_)->glBlendBarrier();
   auto xptr = (void (QOpenGLExtraFunctions::*)() ) &QOpenGLExtraFunctions::glBlendBarrier;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:469
// [-2] void glCopyImageSubData(GLuint, GLenum, GLint, GLint, GLint, GLint, GLuint, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei) 
// (11)qm504578260 (62)_ZN21QOpenGLExtraFunctions18glCopyImageSubDataEjjiiiijjiiiiiii
//static
/*void qm504578260(unsigned int srcName, unsigned int srcTarget, int srcLevel, int srcX, int srcY, int srcZ, unsigned int dstName, unsigned int dstTarget, int dstLevel, int dstX, int dstY, int dstZ, int srcWidth, int srcHeight, int srcDepth)*/ {
  unsigned int srcName = *(unsigned int*)this_; unsigned int srcTarget = *(unsigned int*)this_; int srcLevel = *(int*)this_; int srcX = *(int*)this_; int srcY = *(int*)this_; int srcZ = *(int*)this_; unsigned int dstName = *(unsigned int*)this_; unsigned int dstTarget = *(unsigned int*)this_; int dstLevel = *(int*)this_; int dstX = *(int*)this_; int dstY = *(int*)this_; int dstZ = *(int*)this_; int srcWidth = *(int*)this_; int srcHeight = *(int*)this_; int srcDepth = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glCopyImageSubData(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, int, int, int, unsigned int, unsigned int, int, int, int, int, int, int, int) ) &QOpenGLExtraFunctions::glCopyImageSubData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:470
// [-2] void glDebugMessageControl(GLenum, GLenum, GLenum, GLsizei, const GLuint *, GLboolean) 
// (11)qm299320616 (58)_ZN21QOpenGLExtraFunctions21glDebugMessageControlEjjjiPKjh
//static
/*void qm299320616(unsigned int source, unsigned int type_, unsigned int severity, int count, const unsigned int * ids, unsigned char enabled)*/ {
  unsigned int source = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; unsigned int severity = *(unsigned int*)this_; int count = *(int*)this_; const unsigned int * ids = *(const unsigned int **)this_; unsigned char enabled = *(unsigned char*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDebugMessageControl(source, type_, severity, count, ids, enabled);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, unsigned int const*, unsigned char) ) &QOpenGLExtraFunctions::glDebugMessageControl;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:471
// [-2] void glDebugMessageInsert(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar *) 
// (12)qm3544488563 (57)_ZN21QOpenGLExtraFunctions20glDebugMessageInsertEjjjjiPKc
//static
/*void qm3544488563(unsigned int source, unsigned int type_, unsigned int id, unsigned int severity, int length, const char * buf)*/ {
  unsigned int source = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; unsigned int id = *(unsigned int*)this_; unsigned int severity = *(unsigned int*)this_; int length = *(int*)this_; const char * buf = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDebugMessageInsert(source, type_, id, severity, length, buf);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const*) ) &QOpenGLExtraFunctions::glDebugMessageInsert;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:472
// [-2] void glDebugMessageCallback(GLDEBUGPROC, const void *) 
// (12)qm2829935814 (69)_ZN21QOpenGLExtraFunctions22glDebugMessageCallbackEPFvjjjjiPKcPKvES3_
//static
/*void qm2829935814(GLDEBUGPROC callback, const void * userParam)*/ {
  GLDEBUGPROC callback = *(GLDEBUGPROC*)this_; const void * userParam = *(const void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDebugMessageCallback(callback, userParam);
   auto xptr = (void (QOpenGLExtraFunctions::*)(void (*)(unsigned int, unsigned int, unsigned int, unsigned int, int, char const*, void const*), void const*) ) &QOpenGLExtraFunctions::glDebugMessageCallback;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:473
// [4] GLuint glGetDebugMessageLog(GLuint, GLsizei, GLenum *, GLenum *, GLuint *, GLenum *, GLsizei *, GLchar *) 
// (11)qm884698166 (66)_ZN21QOpenGLExtraFunctions20glGetDebugMessageLogEjiPjS0_S0_S0_PiPc
//static
/*void qm884698166(unsigned int count, int bufSize, unsigned int * sources, unsigned int * types, unsigned int * ids, unsigned int * severities, int * lengths, char * messageLog)*/ {
  unsigned int count = *(unsigned int*)this_; int bufSize = *(int*)this_; unsigned int * sources = *(unsigned int **)this_; unsigned int * types = *(unsigned int **)this_; unsigned int * ids = *(unsigned int **)this_; unsigned int * severities = *(unsigned int **)this_; int * lengths = *(int **)this_; char * messageLog = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetDebugMessageLog(count, bufSize, sources, types, ids, severities, lengths, messageLog);
   auto xptr = (unsigned int (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int*, unsigned int*, unsigned int*, unsigned int*, int*, char*) ) &QOpenGLExtraFunctions::glGetDebugMessageLog;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:474
// [-2] void glPushDebugGroup(GLenum, GLuint, GLsizei, const GLchar *) 
// (10)qm96874673 (51)_ZN21QOpenGLExtraFunctions16glPushDebugGroupEjjiPKc
//static
/*void qm96874673(unsigned int source, unsigned int id, int length, const char * message)*/ {
  unsigned int source = *(unsigned int*)this_; unsigned int id = *(unsigned int*)this_; int length = *(int*)this_; const char * message = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glPushDebugGroup(source, id, length, message);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, char const*) ) &QOpenGLExtraFunctions::glPushDebugGroup;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:475
// [-2] void glPopDebugGroup() 
// (12)qm4126652895 (45)_ZN21QOpenGLExtraFunctions15glPopDebugGroupEv
//static
/*void qm4126652895()*/ {
  ;
  (void) ((QOpenGLExtraFunctions*)this_)->glPopDebugGroup();
   auto xptr = (void (QOpenGLExtraFunctions::*)() ) &QOpenGLExtraFunctions::glPopDebugGroup;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:476
// [-2] void glObjectLabel(GLenum, GLuint, GLsizei, const GLchar *) 
// (12)qm4173267267 (48)_ZN21QOpenGLExtraFunctions13glObjectLabelEjjiPKc
//static
/*void qm4173267267(unsigned int identifier, unsigned int name, int length, const char * label)*/ {
  unsigned int identifier = *(unsigned int*)this_; unsigned int name = *(unsigned int*)this_; int length = *(int*)this_; const char * label = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glObjectLabel(identifier, name, length, label);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, char const*) ) &QOpenGLExtraFunctions::glObjectLabel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:477
// [-2] void glGetObjectLabel(GLenum, GLuint, GLsizei, GLsizei *, GLchar *) 
// (12)qm1372008672 (52)_ZN21QOpenGLExtraFunctions16glGetObjectLabelEjjiPiPc
//static
/*void qm1372008672(unsigned int identifier, unsigned int name, int bufSize, int * length, char * label)*/ {
  unsigned int identifier = *(unsigned int*)this_; unsigned int name = *(unsigned int*)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; char * label = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetObjectLabel(identifier, name, bufSize, length, label);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int, int*, char*) ) &QOpenGLExtraFunctions::glGetObjectLabel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:478
// [-2] void glObjectPtrLabel(const void *, GLsizei, const GLchar *) 
// (11)qm469174260 (52)_ZN21QOpenGLExtraFunctions16glObjectPtrLabelEPKviPKc
//static
/*void qm469174260(const void * ptr, int length, const char * label)*/ {
  const void * ptr = *(const void **)this_; int length = *(int*)this_; const char * label = *(const char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glObjectPtrLabel(ptr, length, label);
   auto xptr = (void (QOpenGLExtraFunctions::*)(void const*, int, char const*) ) &QOpenGLExtraFunctions::glObjectPtrLabel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:479
// [-2] void glGetObjectPtrLabel(const void *, GLsizei, GLsizei *, GLchar *) 
// (12)qm3734011528 (56)_ZN21QOpenGLExtraFunctions19glGetObjectPtrLabelEPKviPiPc
//static
/*void qm3734011528(const void * ptr, int bufSize, int * length, char * label)*/ {
  const void * ptr = *(const void **)this_; int bufSize = *(int*)this_; int * length = *(int **)this_; char * label = *(char **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetObjectPtrLabel(ptr, bufSize, length, label);
   auto xptr = (void (QOpenGLExtraFunctions::*)(void const*, int, int*, char*) ) &QOpenGLExtraFunctions::glGetObjectPtrLabel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:480
// [-2] void glGetPointerv(GLenum, void **) 
// (12)qm2865447157 (46)_ZN21QOpenGLExtraFunctions13glGetPointervEjPPv
//static
/*void qm2865447157(unsigned int pname, void ** params)*/ {
  unsigned int pname = *(unsigned int*)this_; void ** params = *(void ***)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetPointerv(pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, void**) ) &QOpenGLExtraFunctions::glGetPointerv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:481
// [-2] void glEnablei(GLenum, GLuint) 
// (12)qm3310785621 (39)_ZN21QOpenGLExtraFunctions9glEnableiEjj
//static
/*void qm3310785621(unsigned int target, unsigned int index)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glEnablei(target, index);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glEnablei;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:482
// [-2] void glDisablei(GLenum, GLuint) 
// (12)qm2387160016 (41)_ZN21QOpenGLExtraFunctions10glDisableiEjj
//static
/*void qm2387160016(unsigned int target, unsigned int index)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDisablei(target, index);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glDisablei;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:483
// [-2] void glBlendEquationi(GLuint, GLenum) 
// (11)qm766902526 (47)_ZN21QOpenGLExtraFunctions16glBlendEquationiEjj
//static
/*void qm766902526(unsigned int buf, unsigned int mode)*/ {
  unsigned int buf = *(unsigned int*)this_; unsigned int mode = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBlendEquationi(buf, mode);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBlendEquationi;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:484
// [-2] void glBlendEquationSeparatei(GLuint, GLenum, GLenum) 
// (12)qm2658998724 (56)_ZN21QOpenGLExtraFunctions24glBlendEquationSeparateiEjjj
//static
/*void qm2658998724(unsigned int buf, unsigned int modeRGB, unsigned int modeAlpha)*/ {
  unsigned int buf = *(unsigned int*)this_; unsigned int modeRGB = *(unsigned int*)this_; unsigned int modeAlpha = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBlendEquationSeparatei;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:485
// [-2] void glBlendFunci(GLuint, GLenum, GLenum) 
// (12)qm4032310680 (44)_ZN21QOpenGLExtraFunctions12glBlendFunciEjjj
//static
/*void qm4032310680(unsigned int buf, unsigned int src, unsigned int dst)*/ {
  unsigned int buf = *(unsigned int*)this_; unsigned int src = *(unsigned int*)this_; unsigned int dst = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBlendFunci(buf, src, dst);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBlendFunci;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:486
// [-2] void glBlendFuncSeparatei(GLuint, GLenum, GLenum, GLenum, GLenum) 
// (12)qm1224097604 (54)_ZN21QOpenGLExtraFunctions20glBlendFuncSeparateiEjjjjj
//static
/*void qm1224097604(unsigned int buf, unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)*/ {
  unsigned int buf = *(unsigned int*)this_; unsigned int srcRGB = *(unsigned int*)this_; unsigned int dstRGB = *(unsigned int*)this_; unsigned int srcAlpha = *(unsigned int*)this_; unsigned int dstAlpha = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glBlendFuncSeparatei;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:487
// [-2] void glColorMaski(GLuint, GLboolean, GLboolean, GLboolean, GLboolean) 
// (12)qm1453336468 (46)_ZN21QOpenGLExtraFunctions12glColorMaskiEjhhhh
//static
/*void qm1453336468(unsigned int index, unsigned char r, unsigned char g, unsigned char b, unsigned char a)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned char r = *(unsigned char*)this_; unsigned char g = *(unsigned char*)this_; unsigned char b = *(unsigned char*)this_; unsigned char a = *(unsigned char*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glColorMaski(index, r, g, b, a);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned char, unsigned char, unsigned char, unsigned char) ) &QOpenGLExtraFunctions::glColorMaski;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:488
// [1] GLboolean glIsEnabledi(GLenum, GLuint) 
// (12)qm1510421000 (43)_ZN21QOpenGLExtraFunctions12glIsEnablediEjj
//static
/*void qm1510421000(unsigned int target, unsigned int index)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glIsEnabledi(target, index);
   auto xptr = (unsigned char (QOpenGLExtraFunctions::*)(unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glIsEnabledi;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:489
// [-2] void glDrawElementsBaseVertex(GLenum, GLsizei, GLenum, const void *, GLint) 
// (12)qm1654785098 (60)_ZN21QOpenGLExtraFunctions24glDrawElementsBaseVertexEjijPKvi
//static
/*void qm1654785098(unsigned int mode, int count, unsigned int type_, const void * indices, int basevertex)*/ {
  unsigned int mode = *(unsigned int*)this_; int count = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indices = *(const void **)this_; int basevertex = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawElementsBaseVertex(mode, count, type_, indices, basevertex);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, void const*, int) ) &QOpenGLExtraFunctions::glDrawElementsBaseVertex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:490
// [-2] void glDrawRangeElementsBaseVertex(GLenum, GLuint, GLuint, GLsizei, GLenum, const void *, GLint) 
// (12)qm1562921538 (67)_ZN21QOpenGLExtraFunctions29glDrawRangeElementsBaseVertexEjjjijPKvi
//static
/*void qm1562921538(unsigned int mode, unsigned int start, unsigned int end_, int count, unsigned int type_, const void * indices, int basevertex)*/ {
  unsigned int mode = *(unsigned int*)this_; unsigned int start = *(unsigned int*)this_; unsigned int end_ = *(unsigned int*)this_; int count = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indices = *(const void **)this_; int basevertex = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawRangeElementsBaseVertex(mode, start, end_, count, type_, indices, basevertex);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int, unsigned int, void const*, int) ) &QOpenGLExtraFunctions::glDrawRangeElementsBaseVertex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:491
// [-2] void glDrawElementsInstancedBaseVertex(GLenum, GLsizei, GLenum, const void *, GLsizei, GLint) 
// (12)qm3767551180 (70)_ZN21QOpenGLExtraFunctions33glDrawElementsInstancedBaseVertexEjijPKvii
//static
/*void qm3767551180(unsigned int mode, int count, unsigned int type_, const void * indices, int instancecount, int basevertex)*/ {
  unsigned int mode = *(unsigned int*)this_; int count = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indices = *(const void **)this_; int instancecount = *(int*)this_; int basevertex = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glDrawElementsInstancedBaseVertex(mode, count, type_, indices, instancecount, basevertex);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, void const*, int, int) ) &QOpenGLExtraFunctions::glDrawElementsInstancedBaseVertex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:492
// [-2] void glFramebufferTexture(GLenum, GLenum, GLuint, GLint) 
// (11)qm357693199 (53)_ZN21QOpenGLExtraFunctions20glFramebufferTextureEjjji
//static
/*void qm357693199(unsigned int target, unsigned int attachment, unsigned int texture, int level)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int attachment = *(unsigned int*)this_; unsigned int texture = *(unsigned int*)this_; int level = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glFramebufferTexture(target, attachment, texture, level);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, int) ) &QOpenGLExtraFunctions::glFramebufferTexture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:493
// [-2] void glPrimitiveBoundingBox(GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat, GLfloat) 
// (12)qm2398681259 (59)_ZN21QOpenGLExtraFunctions22glPrimitiveBoundingBoxEffffffff
//static
/*void qm2398681259(float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW)*/ {
  float minX = *(float*)this_; float minY = *(float*)this_; float minZ = *(float*)this_; float minW = *(float*)this_; float maxX = *(float*)this_; float maxY = *(float*)this_; float maxZ = *(float*)this_; float maxW = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glPrimitiveBoundingBox(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
   auto xptr = (void (QOpenGLExtraFunctions::*)(float, float, float, float, float, float, float, float) ) &QOpenGLExtraFunctions::glPrimitiveBoundingBox;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:494
// [4] GLenum glGetGraphicsResetStatus() 
// (11)qm654523909 (54)_ZN21QOpenGLExtraFunctions24glGetGraphicsResetStatusEv
//static
/*void qm654523909()*/ {
  ;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetGraphicsResetStatus();
   auto xptr = (unsigned int (QOpenGLExtraFunctions::*)() ) &QOpenGLExtraFunctions::glGetGraphicsResetStatus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:495
// [-2] void glReadnPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLsizei, void *) 
// (12)qm2789991508 (51)_ZN21QOpenGLExtraFunctions13glReadnPixelsEiiiijjiPv
//static
/*void qm2789991508(int x, int y, int width, int height, unsigned int format, unsigned int type_, int bufSize, void * data)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; unsigned int format = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; int bufSize = *(int*)this_; void * data = *(void **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glReadnPixels(x, y, width, height, format, type_, bufSize, data);
   auto xptr = (void (QOpenGLExtraFunctions::*)(int, int, int, int, unsigned int, unsigned int, int, void*) ) &QOpenGLExtraFunctions::glReadnPixels;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:496
// [-2] void glGetnUniformfv(GLuint, GLint, GLsizei, GLfloat *) 
// (12)qm3003046973 (49)_ZN21QOpenGLExtraFunctions15glGetnUniformfvEjiiPf
//static
/*void qm3003046973(unsigned int program, int location, int bufSize, float * params)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int bufSize = *(int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetnUniformfv(program, location, bufSize, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, float*) ) &QOpenGLExtraFunctions::glGetnUniformfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:497
// [-2] void glGetnUniformiv(GLuint, GLint, GLsizei, GLint *) 
// (12)qm4217492224 (49)_ZN21QOpenGLExtraFunctions15glGetnUniformivEjiiPi
//static
/*void qm4217492224(unsigned int program, int location, int bufSize, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int bufSize = *(int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetnUniformiv(program, location, bufSize, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, int*) ) &QOpenGLExtraFunctions::glGetnUniformiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:498
// [-2] void glGetnUniformuiv(GLuint, GLint, GLsizei, GLuint *) 
// (12)qm3959131294 (50)_ZN21QOpenGLExtraFunctions16glGetnUniformuivEjiiPj
//static
/*void qm3959131294(unsigned int program, int location, int bufSize, unsigned int * params)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int bufSize = *(int*)this_; unsigned int * params = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetnUniformuiv(program, location, bufSize, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, int, unsigned int*) ) &QOpenGLExtraFunctions::glGetnUniformuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:499
// [-2] void glMinSampleShading(GLfloat) 
// (11)qm198519471 (48)_ZN21QOpenGLExtraFunctions18glMinSampleShadingEf
//static
/*void qm198519471(float value)*/ {
  float value = *(float*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glMinSampleShading(value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(float) ) &QOpenGLExtraFunctions::glMinSampleShading;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:500
// [-2] void glPatchParameteri(GLenum, GLint) 
// (12)qm2667546559 (48)_ZN21QOpenGLExtraFunctions17glPatchParameteriEji
//static
/*void qm2667546559(unsigned int pname, int value)*/ {
  unsigned int pname = *(unsigned int*)this_; int value = *(int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glPatchParameteri(pname, value);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int) ) &QOpenGLExtraFunctions::glPatchParameteri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:501
// [-2] void glTexParameterIiv(GLenum, GLenum, const GLint *) 
// (12)qm1565304331 (51)_ZN21QOpenGLExtraFunctions17glTexParameterIivEjjPKi
//static
/*void qm1565304331(unsigned int target, unsigned int pname, const int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const int * params = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexParameterIiv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int const*) ) &QOpenGLExtraFunctions::glTexParameterIiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:502
// [-2] void glTexParameterIuiv(GLenum, GLenum, const GLuint *) 
// (12)qm2734167360 (52)_ZN21QOpenGLExtraFunctions18glTexParameterIuivEjjPKj
//static
/*void qm2734167360(unsigned int target, unsigned int pname, const unsigned int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const unsigned int * params = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexParameterIuiv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int const*) ) &QOpenGLExtraFunctions::glTexParameterIuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:503
// [-2] void glGetTexParameterIiv(GLenum, GLenum, GLint *) 
// (12)qm2410963325 (53)_ZN21QOpenGLExtraFunctions20glGetTexParameterIivEjjPi
//static
/*void qm2410963325(unsigned int target, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetTexParameterIiv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetTexParameterIiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:504
// [-2] void glGetTexParameterIuiv(GLenum, GLenum, GLuint *) 
// (12)qm1666657539 (54)_ZN21QOpenGLExtraFunctions21glGetTexParameterIuivEjjPj
//static
/*void qm1666657539(unsigned int target, unsigned int pname, unsigned int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; unsigned int * params = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetTexParameterIuiv(target, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int*) ) &QOpenGLExtraFunctions::glGetTexParameterIuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:505
// [-2] void glSamplerParameterIiv(GLuint, GLenum, const GLint *) 
// (12)qm2314487604 (55)_ZN21QOpenGLExtraFunctions21glSamplerParameterIivEjjPKi
//static
/*void qm2314487604(unsigned int sampler, unsigned int pname, const int * param)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const int * param = *(const int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSamplerParameterIiv(sampler, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int const*) ) &QOpenGLExtraFunctions::glSamplerParameterIiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:506
// [-2] void glSamplerParameterIuiv(GLuint, GLenum, const GLuint *) 
// (12)qm1394181359 (56)_ZN21QOpenGLExtraFunctions22glSamplerParameterIuivEjjPKj
//static
/*void qm1394181359(unsigned int sampler, unsigned int pname, const unsigned int * param)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const unsigned int * param = *(const unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glSamplerParameterIuiv(sampler, pname, param);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int const*) ) &QOpenGLExtraFunctions::glSamplerParameterIuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:507
// [-2] void glGetSamplerParameterIiv(GLuint, GLenum, GLint *) 
// (11)qm935601186 (57)_ZN21QOpenGLExtraFunctions24glGetSamplerParameterIivEjjPi
//static
/*void qm935601186(unsigned int sampler, unsigned int pname, int * params)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetSamplerParameterIiv(sampler, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLExtraFunctions::glGetSamplerParameterIiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:508
// [-2] void glGetSamplerParameterIuiv(GLuint, GLenum, GLuint *) 
// (12)qm4166050483 (58)_ZN21QOpenGLExtraFunctions25glGetSamplerParameterIuivEjjPj
//static
/*void qm4166050483(unsigned int sampler, unsigned int pname, unsigned int * params)*/ {
  unsigned int sampler = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; unsigned int * params = *(unsigned int **)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glGetSamplerParameterIuiv(sampler, pname, params);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int*) ) &QOpenGLExtraFunctions::glGetSamplerParameterIuiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:509
// [-2] void glTexBuffer(GLenum, GLenum, GLuint) 
// (11)qm840817847 (43)_ZN21QOpenGLExtraFunctions11glTexBufferEjjj
//static
/*void qm840817847(unsigned int target, unsigned int internalformat, unsigned int buffer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int internalformat = *(unsigned int*)this_; unsigned int buffer = *(unsigned int*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexBuffer(target, internalformat, buffer);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLExtraFunctions::glTexBuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:510
// [-2] void glTexBufferRange(GLenum, GLenum, GLuint, GLintptr, GLsizeiptr) 
// (12)qm3647152361 (50)_ZN21QOpenGLExtraFunctions16glTexBufferRangeEjjjll
//static
/*void qm3647152361(unsigned int target, unsigned int internalformat, unsigned int buffer, long offset, long size)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int internalformat = *(unsigned int*)this_; unsigned int buffer = *(unsigned int*)this_; long offset = *(long*)this_; long size = *(long*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexBufferRange(target, internalformat, buffer, offset, size);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, unsigned int, unsigned int, long, long) ) &QOpenGLExtraFunctions::glTexBufferRange;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglextrafunctions.h:511
// [-2] void glTexStorage3DMultisample(GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei, GLboolean) 
// (12)qm3092438988 (61)_ZN21QOpenGLExtraFunctions25glTexStorage3DMultisampleEjijiiih
//static
/*void qm3092438988(unsigned int target, int samples, unsigned int internalformat, int width, int height, int depth, unsigned char fixedsamplelocations)*/ {
  unsigned int target = *(unsigned int*)this_; int samples = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_; int depth = *(int*)this_; unsigned char fixedsamplelocations = *(unsigned char*)this_;
  (void) ((QOpenGLExtraFunctions*)this_)->glTexStorage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
   auto xptr = (void (QOpenGLExtraFunctions::*)(unsigned int, int, unsigned int, int, int, int, unsigned char) ) &QOpenGLExtraFunctions::glTexStorage3DMultisample;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qopenglextrafunctions
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
