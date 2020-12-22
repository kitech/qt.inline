//  header block begin

// /usr/include/qt/QtGui/qopenglfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLFunctions is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglfunctions(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:240
// [-2] void QOpenGLFunctions() 
// (11)qm219410663 (25)_ZN16QOpenGLFunctionsC2Ev
/*void* qm219410663()*/{
  ;
  this_ =  new QOpenGLFunctions();
  this_ =  new MyQOpenGLFunctions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:241
// [-2] void QOpenGLFunctions(QOpenGLContext *) 
// (12)qm1874144887 (41)_ZN16QOpenGLFunctionsC2EP14QOpenGLContext
/*void* qm1874144887(QOpenGLContext * context)*/{
  QOpenGLContext * context = *(QOpenGLContext **)this_;
  this_ =  new QOpenGLFunctions(context);
  this_ =  new MyQOpenGLFunctions(context);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:242
// [-2] void ~QOpenGLFunctions() 
// (12)qm2428815454 (25)_ZN16QOpenGLFunctionsD2Ev
/*void qm2428815454 (void *this_)*/ {
  delete (QOpenGLFunctions*)(this_);
}
// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:277
// [-2] void glBindTexture(GLenum, GLuint) 
// (12)qm2967165365 (39)_ZN16QOpenGLFunctions13glBindTextureEjj
//static
/*void qm2967165365(unsigned int target, unsigned int texture)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int texture = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBindTexture(target, texture);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glBindTexture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:278
// [-2] void glBlendFunc(GLenum, GLenum) 
// (12)qm1593641265 (37)_ZN16QOpenGLFunctions11glBlendFuncEjj
//static
/*void qm1593641265(unsigned int sfactor, unsigned int dfactor)*/ {
  unsigned int sfactor = *(unsigned int*)this_; unsigned int dfactor = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBlendFunc(sfactor, dfactor);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glBlendFunc;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:279
// [-2] void glClear(GLbitfield) 
// (12)qm3114552311 (31)_ZN16QOpenGLFunctions7glClearEj
//static
/*void qm3114552311(unsigned int mask)*/ {
  unsigned int mask = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glClear(mask);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glClear;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:280
// [-2] void glClearColor(GLclampf, GLclampf, GLclampf, GLclampf) 
// (12)qm1054479732 (40)_ZN16QOpenGLFunctions12glClearColorEffff
//static
/*void qm1054479732(float red, float green, float blue, float alpha)*/ {
  float red = *(float*)this_; float green = *(float*)this_; float blue = *(float*)this_; float alpha = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glClearColor(red, green, blue, alpha);
   auto xptr = (void (QOpenGLFunctions::*)(float, float, float, float) ) &QOpenGLFunctions::glClearColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:281
// [-2] void glClearStencil(GLint) 
// (12)qm1527566407 (39)_ZN16QOpenGLFunctions14glClearStencilEi
//static
/*void qm1527566407(int s)*/ {
  int s = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glClearStencil(s);
   auto xptr = (void (QOpenGLFunctions::*)(int) ) &QOpenGLFunctions::glClearStencil;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:282
// [-2] void glColorMask(GLboolean, GLboolean, GLboolean, GLboolean) 
// (12)qm2134155293 (39)_ZN16QOpenGLFunctions11glColorMaskEhhhh
//static
/*void qm2134155293(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)*/ {
  unsigned char red = *(unsigned char*)this_; unsigned char green = *(unsigned char*)this_; unsigned char blue = *(unsigned char*)this_; unsigned char alpha = *(unsigned char*)this_;
  (void) ((QOpenGLFunctions*)this_)->glColorMask(red, green, blue, alpha);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned char, unsigned char, unsigned char, unsigned char) ) &QOpenGLFunctions::glColorMask;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:283
// [-2] void glCopyTexImage2D(GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint) 
// (10)qm49326559 (48)_ZN16QOpenGLFunctions16glCopyTexImage2DEjijiiiii
//static
/*void qm49326559(unsigned int target, int level, unsigned int internalformat, int x, int y, int width, int height, int border)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; int border = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, unsigned int, int, int, int, int, int) ) &QOpenGLFunctions::glCopyTexImage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:284
// [-2] void glCopyTexSubImage2D(GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei) 
// (11)qm989613993 (51)_ZN16QOpenGLFunctions19glCopyTexSubImage2DEjiiiiiii
//static
/*void qm989613993(unsigned int target, int level, int xoffset, int yoffset, int x, int y, int width, int height)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int xoffset = *(int*)this_; int yoffset = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int, int, int, int, int, int) ) &QOpenGLFunctions::glCopyTexSubImage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:285
// [-2] void glCullFace(GLenum) 
// (12)qm3740372375 (35)_ZN16QOpenGLFunctions10glCullFaceEj
//static
/*void qm3740372375(unsigned int mode)*/ {
  unsigned int mode = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glCullFace(mode);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glCullFace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:286
// [-2] void glDeleteTextures(GLsizei, const GLuint *) 
// (12)qm2028336339 (44)_ZN16QOpenGLFunctions16glDeleteTexturesEiPKj
//static
/*void qm2028336339(int n, const unsigned int * textures)*/ {
  int n = *(int*)this_; const unsigned int * textures = *(const unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glDeleteTextures(n, textures);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int const*) ) &QOpenGLFunctions::glDeleteTextures;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:287
// [-2] void glDepthFunc(GLenum) 
// (12)qm4105629204 (36)_ZN16QOpenGLFunctions11glDepthFuncEj
//static
/*void qm4105629204(unsigned int func_)*/ {
  unsigned int func_ = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDepthFunc(func_);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glDepthFunc;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:288
// [-2] void glDepthMask(GLboolean) 
// (12)qm1233096771 (36)_ZN16QOpenGLFunctions11glDepthMaskEh
//static
/*void qm1233096771(unsigned char flag)*/ {
  unsigned char flag = *(unsigned char*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDepthMask(flag);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned char) ) &QOpenGLFunctions::glDepthMask;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:289
// [-2] void glDisable(GLenum) 
// (12)qm2893766259 (33)_ZN16QOpenGLFunctions9glDisableEj
//static
/*void qm2893766259(unsigned int cap)*/ {
  unsigned int cap = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDisable(cap);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glDisable;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:290
// [-2] void glDrawArrays(GLenum, GLint, GLsizei) 
// (11)qm525628006 (39)_ZN16QOpenGLFunctions12glDrawArraysEjii
//static
/*void qm525628006(unsigned int mode, int first, int count)*/ {
  unsigned int mode = *(unsigned int*)this_; int first = *(int*)this_; int count = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDrawArrays(mode, first, count);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int) ) &QOpenGLFunctions::glDrawArrays;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:291
// [-2] void glDrawElements(GLenum, GLsizei, GLenum, const GLvoid *) 
// (12)qm2318844854 (44)_ZN16QOpenGLFunctions14glDrawElementsEjijPKv
//static
/*void qm2318844854(unsigned int mode, int count, unsigned int type_, const void * indices)*/ {
  unsigned int mode = *(unsigned int*)this_; int count = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * indices = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glDrawElements(mode, count, type_, indices);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, unsigned int, void const*) ) &QOpenGLFunctions::glDrawElements;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:292
// [-2] void glEnable(GLenum) 
// (12)qm3635097264 (32)_ZN16QOpenGLFunctions8glEnableEj
//static
/*void qm3635097264(unsigned int cap)*/ {
  unsigned int cap = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glEnable(cap);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glEnable;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:293
// [-2] void glFinish() 
// (10)qm27663564 (32)_ZN16QOpenGLFunctions8glFinishEv
//static
/*void qm27663564()*/ {
  ;
  (void) ((QOpenGLFunctions*)this_)->glFinish();
   auto xptr = (void (QOpenGLFunctions::*)() ) &QOpenGLFunctions::glFinish;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:294
// [-2] void glFlush() 
// (12)qm1960580655 (31)_ZN16QOpenGLFunctions7glFlushEv
//static
/*void qm1960580655()*/ {
  ;
  (void) ((QOpenGLFunctions*)this_)->glFlush();
   auto xptr = (void (QOpenGLFunctions::*)() ) &QOpenGLFunctions::glFlush;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:295
// [-2] void glFrontFace(GLenum) 
// (11)qm877858448 (36)_ZN16QOpenGLFunctions11glFrontFaceEj
//static
/*void qm877858448(unsigned int mode)*/ {
  unsigned int mode = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glFrontFace(mode);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glFrontFace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:296
// [-2] void glGenTextures(GLsizei, GLuint *) 
// (12)qm3415507346 (40)_ZN16QOpenGLFunctions13glGenTexturesEiPj
//static
/*void qm3415507346(int n, unsigned int * textures)*/ {
  int n = *(int*)this_; unsigned int * textures = *(unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGenTextures(n, textures);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int*) ) &QOpenGLFunctions::glGenTextures;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:297
// [-2] void glGetBooleanv(GLenum, GLboolean *) 
// (12)qm4073602224 (40)_ZN16QOpenGLFunctions13glGetBooleanvEjPh
//static
/*void qm4073602224(unsigned int pname, unsigned char * params)*/ {
  unsigned int pname = *(unsigned int*)this_; unsigned char * params = *(unsigned char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetBooleanv(pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned char*) ) &QOpenGLFunctions::glGetBooleanv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:298
// [4] GLenum glGetError() 
// (12)qm1907672998 (35)_ZN16QOpenGLFunctions10glGetErrorEv
//static
/*void qm1907672998()*/ {
  ;
  (void) ((QOpenGLFunctions*)this_)->glGetError();
   auto xptr = (unsigned int (QOpenGLFunctions::*)() ) &QOpenGLFunctions::glGetError;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:299
// [-2] void glGetFloatv(GLenum, GLfloat *) 
// (12)qm1974698928 (38)_ZN16QOpenGLFunctions11glGetFloatvEjPf
//static
/*void qm1974698928(unsigned int pname, float * params)*/ {
  unsigned int pname = *(unsigned int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetFloatv(pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float*) ) &QOpenGLFunctions::glGetFloatv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:300
// [-2] void glGetIntegerv(GLenum, GLint *) 
// (12)qm2219203106 (40)_ZN16QOpenGLFunctions13glGetIntegervEjPi
//static
/*void qm2219203106(unsigned int pname, int * params)*/ {
  unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetIntegerv(pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int*) ) &QOpenGLFunctions::glGetIntegerv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:301
// [8] const GLubyte * glGetString(GLenum) 
// (12)qm1585959688 (36)_ZN16QOpenGLFunctions11glGetStringEj
//static
/*void qm1585959688(unsigned int name)*/ {
  unsigned int name = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetString(name);
   auto xptr = (const unsigned char * (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glGetString;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:302
// [-2] void glGetTexParameterfv(GLenum, GLenum, GLfloat *) 
// (12)qm2745703052 (47)_ZN16QOpenGLFunctions19glGetTexParameterfvEjjPf
//static
/*void qm2745703052(unsigned int target, unsigned int pname, float * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetTexParameterfv(target, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, float*) ) &QOpenGLFunctions::glGetTexParameterfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:303
// [-2] void glGetTexParameteriv(GLenum, GLenum, GLint *) 
// (12)qm3311368180 (47)_ZN16QOpenGLFunctions19glGetTexParameterivEjjPi
//static
/*void qm3311368180(unsigned int target, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetTexParameteriv(target, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetTexParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:304
// [-2] void glHint(GLenum, GLenum) 
// (11)qm662943812 (31)_ZN16QOpenGLFunctions6glHintEjj
//static
/*void qm662943812(unsigned int target, unsigned int mode)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int mode = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glHint(target, mode);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glHint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:305
// [1] GLboolean glIsEnabled(GLenum) 
// (11)qm710188102 (36)_ZN16QOpenGLFunctions11glIsEnabledEj
//static
/*void qm710188102(unsigned int cap)*/ {
  unsigned int cap = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsEnabled(cap);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsEnabled;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:306
// [1] GLboolean glIsTexture(GLuint) 
// (12)qm1253056091 (36)_ZN16QOpenGLFunctions11glIsTextureEj
//static
/*void qm1253056091(unsigned int texture)*/ {
  unsigned int texture = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsTexture(texture);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsTexture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:307
// [-2] void glLineWidth(GLfloat) 
// (12)qm1330417618 (36)_ZN16QOpenGLFunctions11glLineWidthEf
//static
/*void qm1330417618(float width)*/ {
  float width = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glLineWidth(width);
   auto xptr = (void (QOpenGLFunctions::*)(float) ) &QOpenGLFunctions::glLineWidth;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:308
// [-2] void glPixelStorei(GLenum, GLint) 
// (11)qm500106607 (39)_ZN16QOpenGLFunctions13glPixelStoreiEji
//static
/*void qm500106607(unsigned int pname, int param)*/ {
  unsigned int pname = *(unsigned int*)this_; int param = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glPixelStorei(pname, param);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int) ) &QOpenGLFunctions::glPixelStorei;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:309
// [-2] void glPolygonOffset(GLfloat, GLfloat) 
// (12)qm1623109094 (41)_ZN16QOpenGLFunctions15glPolygonOffsetEff
//static
/*void qm1623109094(float factor, float units)*/ {
  float factor = *(float*)this_; float units = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glPolygonOffset(factor, units);
   auto xptr = (void (QOpenGLFunctions::*)(float, float) ) &QOpenGLFunctions::glPolygonOffset;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:310
// [-2] void glReadPixels(GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid *) 
// (10)qm53857785 (44)_ZN16QOpenGLFunctions12glReadPixelsEiiiijjPv
//static
/*void qm53857785(int x, int y, int width, int height, unsigned int format, unsigned int type_, void * pixels)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; unsigned int format = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; void * pixels = *(void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glReadPixels(x, y, width, height, format, type_, pixels);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int, int, unsigned int, unsigned int, void*) ) &QOpenGLFunctions::glReadPixels;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:311
// [-2] void glScissor(GLint, GLint, GLsizei, GLsizei) 
// (11)qm675594144 (36)_ZN16QOpenGLFunctions9glScissorEiiii
//static
/*void qm675594144(int x, int y, int width, int height)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glScissor(x, y, width, height);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int, int) ) &QOpenGLFunctions::glScissor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:312
// [-2] void glStencilFunc(GLenum, GLint, GLuint) 
// (11)qm404830508 (40)_ZN16QOpenGLFunctions13glStencilFuncEjij
//static
/*void qm404830508(unsigned int func_, int ref, unsigned int mask)*/ {
  unsigned int func_ = *(unsigned int*)this_; int ref = *(int*)this_; unsigned int mask = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glStencilFunc(func_, ref, mask);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, unsigned int) ) &QOpenGLFunctions::glStencilFunc;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:313
// [-2] void glStencilMask(GLuint) 
// (12)qm1104629303 (38)_ZN16QOpenGLFunctions13glStencilMaskEj
//static
/*void qm1104629303(unsigned int mask)*/ {
  unsigned int mask = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glStencilMask(mask);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glStencilMask;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:314
// [-2] void glStencilOp(GLenum, GLenum, GLenum) 
// (11)qm279019850 (38)_ZN16QOpenGLFunctions11glStencilOpEjjj
//static
/*void qm279019850(unsigned int fail, unsigned int zfail, unsigned int zpass)*/ {
  unsigned int fail = *(unsigned int*)this_; unsigned int zfail = *(unsigned int*)this_; unsigned int zpass = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glStencilOp(fail, zfail, zpass);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, unsigned int) ) &QOpenGLFunctions::glStencilOp;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:315
// [-2] void glTexImage2D(GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid *) 
// (12)qm2533975234 (47)_ZN16QOpenGLFunctions12glTexImage2DEjiiiiijjPKv
//static
/*void qm2533975234(unsigned int target, int level, int internalformat, int width, int height, int border, unsigned int format, unsigned int type_, const void * pixels)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int internalformat = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; int border = *(int*)this_; unsigned int format = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * pixels = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glTexImage2D(target, level, internalformat, width, height, border, format, type_, pixels);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const*) ) &QOpenGLFunctions::glTexImage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:316
// [-2] void glTexParameterf(GLenum, GLenum, GLfloat) 
// (12)qm1561249149 (42)_ZN16QOpenGLFunctions15glTexParameterfEjjf
//static
/*void qm1561249149(unsigned int target, unsigned int pname, float param)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; float param = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glTexParameterf(target, pname, param);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, float) ) &QOpenGLFunctions::glTexParameterf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:317
// [-2] void glTexParameterfv(GLenum, GLenum, const GLfloat *) 
// (12)qm2063589114 (45)_ZN16QOpenGLFunctions16glTexParameterfvEjjPKf
//static
/*void qm2063589114(unsigned int target, unsigned int pname, const float * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const float * params = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glTexParameterfv(target, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, float const*) ) &QOpenGLFunctions::glTexParameterfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:318
// [-2] void glTexParameteri(GLenum, GLenum, GLint) 
// (12)qm1340165949 (42)_ZN16QOpenGLFunctions15glTexParameteriEjji
//static
/*void qm1340165949(unsigned int target, unsigned int pname, int param)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int param = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glTexParameteri(target, pname, param);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int) ) &QOpenGLFunctions::glTexParameteri;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:319
// [-2] void glTexParameteriv(GLenum, GLenum, const GLint *) 
// (11)qm861983175 (45)_ZN16QOpenGLFunctions16glTexParameterivEjjPKi
//static
/*void qm861983175(unsigned int target, unsigned int pname, const int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; const int * params = *(const int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glTexParameteriv(target, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int const*) ) &QOpenGLFunctions::glTexParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:320
// [-2] void glTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid *) 
// (12)qm1016123995 (50)_ZN16QOpenGLFunctions15glTexSubImage2DEjiiiiijjPKv
//static
/*void qm1016123995(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, unsigned int type_, const void * pixels)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int xoffset = *(int*)this_; int yoffset = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; unsigned int format = *(unsigned int*)this_; unsigned int type_ = *(unsigned int*)this_; const void * pixels = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type_, pixels);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, void const*) ) &QOpenGLFunctions::glTexSubImage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:321
// [-2] void glViewport(GLint, GLint, GLsizei, GLsizei) 
// (12)qm3553827174 (38)_ZN16QOpenGLFunctions10glViewportEiiii
//static
/*void qm3553827174(int x, int y, int width, int height)*/ {
  int x = *(int*)this_; int y = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glViewport(x, y, width, height);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int, int) ) &QOpenGLFunctions::glViewport;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:324
// [-2] void glActiveTexture(GLenum) 
// (12)qm2968120039 (40)_ZN16QOpenGLFunctions15glActiveTextureEj
//static
/*void qm2968120039(unsigned int texture)*/ {
  unsigned int texture = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glActiveTexture(texture);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glActiveTexture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:325
// [-2] void glAttachShader(GLuint, GLuint) 
// (11)qm886183420 (40)_ZN16QOpenGLFunctions14glAttachShaderEjj
//static
/*void qm886183420(unsigned int program, unsigned int shader)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int shader = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glAttachShader(program, shader);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glAttachShader;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:326
// [-2] void glBindAttribLocation(GLuint, GLuint, const char *) 
// (12)qm3558295487 (49)_ZN16QOpenGLFunctions20glBindAttribLocationEjjPKc
//static
/*void qm3558295487(unsigned int program, unsigned int index, const char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; const char * name = *(const char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glBindAttribLocation(program, index, name);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, char const*) ) &QOpenGLFunctions::glBindAttribLocation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:327
// [-2] void glBindBuffer(GLenum, GLuint) 
// (11)qm988598651 (38)_ZN16QOpenGLFunctions12glBindBufferEjj
//static
/*void qm988598651(unsigned int target, unsigned int buffer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int buffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBindBuffer(target, buffer);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glBindBuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:328
// [-2] void glBindFramebuffer(GLenum, GLuint) 
// (12)qm2691891270 (43)_ZN16QOpenGLFunctions17glBindFramebufferEjj
//static
/*void qm2691891270(unsigned int target, unsigned int framebuffer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int framebuffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBindFramebuffer(target, framebuffer);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glBindFramebuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:329
// [-2] void glBindRenderbuffer(GLenum, GLuint) 
// (12)qm1557793643 (44)_ZN16QOpenGLFunctions18glBindRenderbufferEjj
//static
/*void qm1557793643(unsigned int target, unsigned int renderbuffer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int renderbuffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBindRenderbuffer(target, renderbuffer);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glBindRenderbuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:330
// [-2] void glBlendColor(GLclampf, GLclampf, GLclampf, GLclampf) 
// (12)qm3019267941 (40)_ZN16QOpenGLFunctions12glBlendColorEffff
//static
/*void qm3019267941(float red, float green, float blue, float alpha)*/ {
  float red = *(float*)this_; float green = *(float*)this_; float blue = *(float*)this_; float alpha = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBlendColor(red, green, blue, alpha);
   auto xptr = (void (QOpenGLFunctions::*)(float, float, float, float) ) &QOpenGLFunctions::glBlendColor;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:331
// [-2] void glBlendEquation(GLenum) 
// (11)qm509864344 (40)_ZN16QOpenGLFunctions15glBlendEquationEj
//static
/*void qm509864344(unsigned int mode)*/ {
  unsigned int mode = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBlendEquation(mode);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glBlendEquation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:332
// [-2] void glBlendEquationSeparate(GLenum, GLenum) 
// (12)qm2443545543 (49)_ZN16QOpenGLFunctions23glBlendEquationSeparateEjj
//static
/*void qm2443545543(unsigned int modeRGB, unsigned int modeAlpha)*/ {
  unsigned int modeRGB = *(unsigned int*)this_; unsigned int modeAlpha = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBlendEquationSeparate(modeRGB, modeAlpha);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glBlendEquationSeparate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:333
// [-2] void glBlendFuncSeparate(GLenum, GLenum, GLenum, GLenum) 
// (12)qm3593111294 (47)_ZN16QOpenGLFunctions19glBlendFuncSeparateEjjjj
//static
/*void qm3593111294(unsigned int srcRGB, unsigned int dstRGB, unsigned int srcAlpha, unsigned int dstAlpha)*/ {
  unsigned int srcRGB = *(unsigned int*)this_; unsigned int dstRGB = *(unsigned int*)this_; unsigned int srcAlpha = *(unsigned int*)this_; unsigned int dstAlpha = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLFunctions::glBlendFuncSeparate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:334
// [-2] void glBufferData(GLenum, qopengl_GLsizeiptr, const void *, GLenum) 
// (12)qm1772224522 (42)_ZN16QOpenGLFunctions12glBufferDataEjlPKvj
//static
/*void qm1772224522(unsigned int target, long size, const void * data, unsigned int usage)*/ {
  unsigned int target = *(unsigned int*)this_; long size = *(long*)this_; const void * data = *(const void **)this_; unsigned int usage = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glBufferData(target, size, data, usage);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, long, void const*, unsigned int) ) &QOpenGLFunctions::glBufferData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:335
// [-2] void glBufferSubData(GLenum, qopengl_GLintptr, qopengl_GLsizeiptr, const void *) 
// (12)qm1448329540 (45)_ZN16QOpenGLFunctions15glBufferSubDataEjllPKv
//static
/*void qm1448329540(unsigned int target, long offset, long size, const void * data)*/ {
  unsigned int target = *(unsigned int*)this_; long offset = *(long*)this_; long size = *(long*)this_; const void * data = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glBufferSubData(target, offset, size, data);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, long, long, void const*) ) &QOpenGLFunctions::glBufferSubData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:336
// [4] GLenum glCheckFramebufferStatus(GLenum) 
// (11)qm386486348 (49)_ZN16QOpenGLFunctions24glCheckFramebufferStatusEj
//static
/*void qm386486348(unsigned int target)*/ {
  unsigned int target = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glCheckFramebufferStatus(target);
   auto xptr = (unsigned int (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glCheckFramebufferStatus;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:337
// [-2] void glClearDepthf(GLclampf) 
// (12)qm3557642083 (38)_ZN16QOpenGLFunctions13glClearDepthfEf
//static
/*void qm3557642083(float depth)*/ {
  float depth = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glClearDepthf(depth);
   auto xptr = (void (QOpenGLFunctions::*)(float) ) &QOpenGLFunctions::glClearDepthf;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:338
// [-2] void glCompileShader(GLuint) 
// (12)qm2527612847 (40)_ZN16QOpenGLFunctions15glCompileShaderEj
//static
/*void qm2527612847(unsigned int shader)*/ {
  unsigned int shader = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glCompileShader(shader);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glCompileShader;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:339
// [-2] void glCompressedTexImage2D(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *) 
// (12)qm4042045722 (56)_ZN16QOpenGLFunctions22glCompressedTexImage2DEjijiiiiPKv
//static
/*void qm4042045722(unsigned int target, int level, unsigned int internalformat, int width, int height, int border, int imageSize, const void * data)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_; int border = *(int*)this_; int imageSize = *(int*)this_; const void * data = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, unsigned int, int, int, int, int, void const*) ) &QOpenGLFunctions::glCompressedTexImage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:340
// [-2] void glCompressedTexSubImage2D(GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const void *) 
// (11)qm968639426 (60)_ZN16QOpenGLFunctions25glCompressedTexSubImage2DEjiiiiijiPKv
//static
/*void qm968639426(unsigned int target, int level, int xoffset, int yoffset, int width, int height, unsigned int format, int imageSize, const void * data)*/ {
  unsigned int target = *(unsigned int*)this_; int level = *(int*)this_; int xoffset = *(int*)this_; int yoffset = *(int*)this_; int width = *(int*)this_; int height = *(int*)this_; unsigned int format = *(unsigned int*)this_; int imageSize = *(int*)this_; const void * data = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int, int, int, int, unsigned int, int, void const*) ) &QOpenGLFunctions::glCompressedTexSubImage2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:341
// [4] GLuint glCreateProgram() 
// (11)qm840213713 (40)_ZN16QOpenGLFunctions15glCreateProgramEv
//static
/*void qm840213713()*/ {
  ;
  (void) ((QOpenGLFunctions*)this_)->glCreateProgram();
   auto xptr = (unsigned int (QOpenGLFunctions::*)() ) &QOpenGLFunctions::glCreateProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:342
// [4] GLuint glCreateShader(GLenum) 
// (12)qm1370339072 (39)_ZN16QOpenGLFunctions14glCreateShaderEj
//static
/*void qm1370339072(unsigned int type_)*/ {
  unsigned int type_ = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glCreateShader(type_);
   auto xptr = (unsigned int (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glCreateShader;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:343
// [-2] void glDeleteBuffers(GLsizei, const GLuint *) 
// (12)qm3282000970 (43)_ZN16QOpenGLFunctions15glDeleteBuffersEiPKj
//static
/*void qm3282000970(int n, const unsigned int * buffers)*/ {
  int n = *(int*)this_; const unsigned int * buffers = *(const unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glDeleteBuffers(n, buffers);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int const*) ) &QOpenGLFunctions::glDeleteBuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:344
// [-2] void glDeleteFramebuffers(GLsizei, const GLuint *) 
// (11)qm686648214 (48)_ZN16QOpenGLFunctions20glDeleteFramebuffersEiPKj
//static
/*void qm686648214(int n, const unsigned int * framebuffers)*/ {
  int n = *(int*)this_; const unsigned int * framebuffers = *(const unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glDeleteFramebuffers(n, framebuffers);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int const*) ) &QOpenGLFunctions::glDeleteFramebuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:345
// [-2] void glDeleteProgram(GLuint) 
// (11)qm989352127 (40)_ZN16QOpenGLFunctions15glDeleteProgramEj
//static
/*void qm989352127(unsigned int program)*/ {
  unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDeleteProgram(program);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glDeleteProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:346
// [-2] void glDeleteRenderbuffers(GLsizei, const GLuint *) 
// (11)qm926383649 (49)_ZN16QOpenGLFunctions21glDeleteRenderbuffersEiPKj
//static
/*void qm926383649(int n, const unsigned int * renderbuffers)*/ {
  int n = *(int*)this_; const unsigned int * renderbuffers = *(const unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glDeleteRenderbuffers(n, renderbuffers);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int const*) ) &QOpenGLFunctions::glDeleteRenderbuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:347
// [-2] void glDeleteShader(GLuint) 
// (12)qm3496277073 (39)_ZN16QOpenGLFunctions14glDeleteShaderEj
//static
/*void qm3496277073(unsigned int shader)*/ {
  unsigned int shader = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDeleteShader(shader);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glDeleteShader;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:348
// [-2] void glDepthRangef(GLclampf, GLclampf) 
// (11)qm718353207 (39)_ZN16QOpenGLFunctions13glDepthRangefEff
//static
/*void qm718353207(float zNear, float zFar)*/ {
  float zNear = *(float*)this_; float zFar = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDepthRangef(zNear, zFar);
   auto xptr = (void (QOpenGLFunctions::*)(float, float) ) &QOpenGLFunctions::glDepthRangef;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:349
// [-2] void glDetachShader(GLuint, GLuint) 
// (12)qm4243093101 (40)_ZN16QOpenGLFunctions14glDetachShaderEjj
//static
/*void qm4243093101(unsigned int program, unsigned int shader)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int shader = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDetachShader(program, shader);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glDetachShader;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:350
// [-2] void glDisableVertexAttribArray(GLuint) 
// (11)qm478467089 (51)_ZN16QOpenGLFunctions26glDisableVertexAttribArrayEj
//static
/*void qm478467089(unsigned int index)*/ {
  unsigned int index = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glDisableVertexAttribArray(index);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glDisableVertexAttribArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:351
// [-2] void glEnableVertexAttribArray(GLuint) 
// (12)qm1317716526 (50)_ZN16QOpenGLFunctions25glEnableVertexAttribArrayEj
//static
/*void qm1317716526(unsigned int index)*/ {
  unsigned int index = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glEnableVertexAttribArray(index);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glEnableVertexAttribArray;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:352
// [-2] void glFramebufferRenderbuffer(GLenum, GLenum, GLenum, GLuint) 
// (12)qm3250040924 (53)_ZN16QOpenGLFunctions25glFramebufferRenderbufferEjjjj
//static
/*void qm3250040924(unsigned int target, unsigned int attachment, unsigned int renderbuffertarget, unsigned int renderbuffer)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int attachment = *(unsigned int*)this_; unsigned int renderbuffertarget = *(unsigned int*)this_; unsigned int renderbuffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLFunctions::glFramebufferRenderbuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:353
// [-2] void glFramebufferTexture2D(GLenum, GLenum, GLenum, GLuint, GLint) 
// (12)qm1541476876 (51)_ZN16QOpenGLFunctions22glFramebufferTexture2DEjjjji
//static
/*void qm1541476876(unsigned int target, unsigned int attachment, unsigned int textarget, unsigned int texture, int level)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int attachment = *(unsigned int*)this_; unsigned int textarget = *(unsigned int*)this_; unsigned int texture = *(unsigned int*)this_; int level = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glFramebufferTexture2D(target, attachment, textarget, texture, level);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int, int) ) &QOpenGLFunctions::glFramebufferTexture2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:354
// [-2] void glGenBuffers(GLsizei, GLuint *) 
// (12)qm3798873975 (39)_ZN16QOpenGLFunctions12glGenBuffersEiPj
//static
/*void qm3798873975(int n, unsigned int * buffers)*/ {
  int n = *(int*)this_; unsigned int * buffers = *(unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGenBuffers(n, buffers);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int*) ) &QOpenGLFunctions::glGenBuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:355
// [-2] void glGenerateMipmap(GLenum) 
// (12)qm2277273554 (41)_ZN16QOpenGLFunctions16glGenerateMipmapEj
//static
/*void qm2277273554(unsigned int target)*/ {
  unsigned int target = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glGenerateMipmap(target);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glGenerateMipmap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:356
// [-2] void glGenFramebuffers(GLsizei, GLuint *) 
// (12)qm3734558792 (44)_ZN16QOpenGLFunctions17glGenFramebuffersEiPj
//static
/*void qm3734558792(int n, unsigned int * framebuffers)*/ {
  int n = *(int*)this_; unsigned int * framebuffers = *(unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGenFramebuffers(n, framebuffers);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int*) ) &QOpenGLFunctions::glGenFramebuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:357
// [-2] void glGenRenderbuffers(GLsizei, GLuint *) 
// (12)qm2660598818 (45)_ZN16QOpenGLFunctions18glGenRenderbuffersEiPj
//static
/*void qm2660598818(int n, unsigned int * renderbuffers)*/ {
  int n = *(int*)this_; unsigned int * renderbuffers = *(unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGenRenderbuffers(n, renderbuffers);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int*) ) &QOpenGLFunctions::glGenRenderbuffers;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:358
// [-2] void glGetActiveAttrib(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, char *) 
// (12)qm2253878013 (53)_ZN16QOpenGLFunctions17glGetActiveAttribEjjiPiS0_PjPc
//static
/*void qm2253878013(unsigned int program, unsigned int index, int bufsize, int * length, int * size, unsigned int * type_, char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; int bufsize = *(int*)this_; int * length = *(int **)this_; int * size = *(int **)this_; unsigned int * type_ = *(unsigned int **)this_; char * name = *(char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetActiveAttrib(program, index, bufsize, length, size, type_, name);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int, int*, int*, unsigned int*, char*) ) &QOpenGLFunctions::glGetActiveAttrib;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:359
// [-2] void glGetActiveUniform(GLuint, GLuint, GLsizei, GLsizei *, GLint *, GLenum *, char *) 
// (12)qm2187982049 (54)_ZN16QOpenGLFunctions18glGetActiveUniformEjjiPiS0_PjPc
//static
/*void qm2187982049(unsigned int program, unsigned int index, int bufsize, int * length, int * size, unsigned int * type_, char * name)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int index = *(unsigned int*)this_; int bufsize = *(int*)this_; int * length = *(int **)this_; int * size = *(int **)this_; unsigned int * type_ = *(unsigned int **)this_; char * name = *(char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetActiveUniform(program, index, bufsize, length, size, type_, name);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int, int*, int*, unsigned int*, char*) ) &QOpenGLFunctions::glGetActiveUniform;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:360
// [-2] void glGetAttachedShaders(GLuint, GLsizei, GLsizei *, GLuint *) 
// (12)qm2385492671 (50)_ZN16QOpenGLFunctions20glGetAttachedShadersEjiPiPj
//static
/*void qm2385492671(unsigned int program, int maxcount, int * count, unsigned int * shaders)*/ {
  unsigned int program = *(unsigned int*)this_; int maxcount = *(int*)this_; int * count = *(int **)this_; unsigned int * shaders = *(unsigned int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetAttachedShaders(program, maxcount, count, shaders);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int*, unsigned int*) ) &QOpenGLFunctions::glGetAttachedShaders;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:361
// [4] GLint glGetAttribLocation(GLuint, const char *) 
// (12)qm3265352867 (47)_ZN16QOpenGLFunctions19glGetAttribLocationEjPKc
//static
/*void qm3265352867(unsigned int program, const char * name)*/ {
  unsigned int program = *(unsigned int*)this_; const char * name = *(const char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetAttribLocation(program, name);
   auto xptr = (int (QOpenGLFunctions::*)(unsigned int, char const*) ) &QOpenGLFunctions::glGetAttribLocation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:362
// [-2] void glGetBufferParameteriv(GLenum, GLenum, GLint *) 
// (12)qm2079032506 (50)_ZN16QOpenGLFunctions22glGetBufferParameterivEjjPi
//static
/*void qm2079032506(unsigned int target, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetBufferParameteriv(target, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetBufferParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:363
// [-2] void glGetFramebufferAttachmentParameteriv(GLenum, GLenum, GLenum, GLint *) 
// (11)qm877129723 (66)_ZN16QOpenGLFunctions37glGetFramebufferAttachmentParameterivEjjjPi
//static
/*void qm877129723(unsigned int target, unsigned int attachment, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int attachment = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetFramebufferAttachmentParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:364
// [-2] void glGetProgramiv(GLuint, GLenum, GLint *) 
// (11)qm892524860 (42)_ZN16QOpenGLFunctions14glGetProgramivEjjPi
//static
/*void qm892524860(unsigned int program, unsigned int pname, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetProgramiv(program, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetProgramiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:365
// [-2] void glGetProgramInfoLog(GLuint, GLsizei, GLsizei *, char *) 
// (12)qm1147744162 (49)_ZN16QOpenGLFunctions19glGetProgramInfoLogEjiPiPc
//static
/*void qm1147744162(unsigned int program, int bufsize, int * length, char * infolog)*/ {
  unsigned int program = *(unsigned int*)this_; int bufsize = *(int*)this_; int * length = *(int **)this_; char * infolog = *(char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetProgramInfoLog(program, bufsize, length, infolog);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int*, char*) ) &QOpenGLFunctions::glGetProgramInfoLog;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:366
// [-2] void glGetRenderbufferParameteriv(GLenum, GLenum, GLint *) 
// (12)qm3556943207 (56)_ZN16QOpenGLFunctions28glGetRenderbufferParameterivEjjPi
//static
/*void qm3556943207(unsigned int target, unsigned int pname, int * params)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetRenderbufferParameteriv(target, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetRenderbufferParameteriv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:367
// [-2] void glGetShaderiv(GLuint, GLenum, GLint *) 
// (12)qm2024235544 (41)_ZN16QOpenGLFunctions13glGetShaderivEjjPi
//static
/*void qm2024235544(unsigned int shader, unsigned int pname, int * params)*/ {
  unsigned int shader = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetShaderiv(shader, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetShaderiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:368
// [-2] void glGetShaderInfoLog(GLuint, GLsizei, GLsizei *, char *) 
// (11)qm356491217 (48)_ZN16QOpenGLFunctions18glGetShaderInfoLogEjiPiPc
//static
/*void qm356491217(unsigned int shader, int bufsize, int * length, char * infolog)*/ {
  unsigned int shader = *(unsigned int*)this_; int bufsize = *(int*)this_; int * length = *(int **)this_; char * infolog = *(char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetShaderInfoLog(shader, bufsize, length, infolog);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int*, char*) ) &QOpenGLFunctions::glGetShaderInfoLog;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:369
// [-2] void glGetShaderPrecisionFormat(GLenum, GLenum, GLint *, GLint *) 
// (12)qm1596226407 (57)_ZN16QOpenGLFunctions26glGetShaderPrecisionFormatEjjPiS0_
//static
/*void qm1596226407(unsigned int shadertype, unsigned int precisiontype, int * range_, int * precision)*/ {
  unsigned int shadertype = *(unsigned int*)this_; unsigned int precisiontype = *(unsigned int*)this_; int * range_ = *(int **)this_; int * precision = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetShaderPrecisionFormat(shadertype, precisiontype, range_, precision);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*, int*) ) &QOpenGLFunctions::glGetShaderPrecisionFormat;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:370
// [-2] void glGetShaderSource(GLuint, GLsizei, GLsizei *, char *) 
// (12)qm3389493922 (47)_ZN16QOpenGLFunctions17glGetShaderSourceEjiPiPc
//static
/*void qm3389493922(unsigned int shader, int bufsize, int * length, char * source)*/ {
  unsigned int shader = *(unsigned int*)this_; int bufsize = *(int*)this_; int * length = *(int **)this_; char * source = *(char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetShaderSource(shader, bufsize, length, source);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int*, char*) ) &QOpenGLFunctions::glGetShaderSource;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:371
// [-2] void glGetUniformfv(GLuint, GLint, GLfloat *) 
// (12)qm2452845981 (42)_ZN16QOpenGLFunctions14glGetUniformfvEjiPf
//static
/*void qm2452845981(unsigned int program, int location, float * params)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetUniformfv(program, location, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, float*) ) &QOpenGLFunctions::glGetUniformfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:372
// [-2] void glGetUniformiv(GLuint, GLint, GLint *) 
// (12)qm4106492133 (42)_ZN16QOpenGLFunctions14glGetUniformivEjiPi
//static
/*void qm4106492133(unsigned int program, int location, int * params)*/ {
  unsigned int program = *(unsigned int*)this_; int location = *(int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetUniformiv(program, location, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, int*) ) &QOpenGLFunctions::glGetUniformiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Direct Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:373
// [4] GLint glGetUniformLocation(GLuint, const char *) 
// (11)qm624001499 (48)_ZN16QOpenGLFunctions20glGetUniformLocationEjPKc
//static
/*void qm624001499(unsigned int program, const char * name)*/ {
  unsigned int program = *(unsigned int*)this_; const char * name = *(const char **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetUniformLocation(program, name);
   auto xptr = (int (QOpenGLFunctions::*)(unsigned int, char const*) ) &QOpenGLFunctions::glGetUniformLocation;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:374
// [-2] void glGetVertexAttribfv(GLuint, GLenum, GLfloat *) 
// (12)qm2756935373 (47)_ZN16QOpenGLFunctions19glGetVertexAttribfvEjjPf
//static
/*void qm2756935373(unsigned int index, unsigned int pname, float * params)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; float * params = *(float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetVertexAttribfv(index, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, float*) ) &QOpenGLFunctions::glGetVertexAttribfv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:375
// [-2] void glGetVertexAttribiv(GLuint, GLenum, GLint *) 
// (12)qm3265532853 (47)_ZN16QOpenGLFunctions19glGetVertexAttribivEjjPi
//static
/*void qm3265532853(unsigned int index, unsigned int pname, int * params)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; int * params = *(int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetVertexAttribiv(index, pname, params);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int*) ) &QOpenGLFunctions::glGetVertexAttribiv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:376
// [-2] void glGetVertexAttribPointerv(GLuint, GLenum, void **) 
// (11)qm633079250 (54)_ZN16QOpenGLFunctions25glGetVertexAttribPointervEjjPPv
//static
/*void qm633079250(unsigned int index, unsigned int pname, void ** pointer)*/ {
  unsigned int index = *(unsigned int*)this_; unsigned int pname = *(unsigned int*)this_; void ** pointer = *(void ***)this_;
  (void) ((QOpenGLFunctions*)this_)->glGetVertexAttribPointerv(index, pname, pointer);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, void**) ) &QOpenGLFunctions::glGetVertexAttribPointerv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:377
// [1] GLboolean glIsBuffer(GLuint) 
// (11)qm771620514 (35)_ZN16QOpenGLFunctions10glIsBufferEj
//static
/*void qm771620514(unsigned int buffer)*/ {
  unsigned int buffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsBuffer(buffer);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsBuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:378
// [1] GLboolean glIsFramebuffer(GLuint) 
// (12)qm2026287743 (40)_ZN16QOpenGLFunctions15glIsFramebufferEj
//static
/*void qm2026287743(unsigned int framebuffer)*/ {
  unsigned int framebuffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsFramebuffer(framebuffer);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsFramebuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:379
// [1] GLboolean glIsProgram(GLuint) 
// (12)qm3095843017 (36)_ZN16QOpenGLFunctions11glIsProgramEj
//static
/*void qm3095843017(unsigned int program)*/ {
  unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsProgram(program);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:380
// [1] GLboolean glIsRenderbuffer(GLuint) 
// (12)qm2526862306 (41)_ZN16QOpenGLFunctions16glIsRenderbufferEj
//static
/*void qm2526862306(unsigned int renderbuffer)*/ {
  unsigned int renderbuffer = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsRenderbuffer(renderbuffer);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsRenderbuffer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Extend Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:381
// [1] GLboolean glIsShader(GLuint) 
// (12)qm4229976513 (35)_ZN16QOpenGLFunctions10glIsShaderEj
//static
/*void qm4229976513(unsigned int shader)*/ {
  unsigned int shader = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glIsShader(shader);
   auto xptr = (unsigned char (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glIsShader;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:382
// [-2] void glLinkProgram(GLuint) 
// (12)qm4252008089 (38)_ZN16QOpenGLFunctions13glLinkProgramEj
//static
/*void qm4252008089(unsigned int program)*/ {
  unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glLinkProgram(program);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glLinkProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:383
// [-2] void glReleaseShaderCompiler() 
// (12)qm4150607872 (48)_ZN16QOpenGLFunctions23glReleaseShaderCompilerEv
//static
/*void qm4150607872()*/ {
  ;
  (void) ((QOpenGLFunctions*)this_)->glReleaseShaderCompiler();
   auto xptr = (void (QOpenGLFunctions::*)() ) &QOpenGLFunctions::glReleaseShaderCompiler;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:384
// [-2] void glRenderbufferStorage(GLenum, GLenum, GLsizei, GLsizei) 
// (11)qm150827968 (49)_ZN16QOpenGLFunctions21glRenderbufferStorageEjjii
//static
/*void qm150827968(unsigned int target, unsigned int internalformat, int width, int height)*/ {
  unsigned int target = *(unsigned int*)this_; unsigned int internalformat = *(unsigned int*)this_; int width = *(int*)this_; int height = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glRenderbufferStorage(target, internalformat, width, height);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int, int) ) &QOpenGLFunctions::glRenderbufferStorage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:385
// [-2] void glSampleCoverage(GLclampf, GLboolean) 
// (12)qm3188005741 (42)_ZN16QOpenGLFunctions16glSampleCoverageEfh
//static
/*void qm3188005741(float value, unsigned char invert)*/ {
  float value = *(float*)this_; unsigned char invert = *(unsigned char*)this_;
  (void) ((QOpenGLFunctions*)this_)->glSampleCoverage(value, invert);
   auto xptr = (void (QOpenGLFunctions::*)(float, unsigned char) ) &QOpenGLFunctions::glSampleCoverage;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:386
// [-2] void glShaderBinary(GLint, const GLuint *, GLenum, const void *, GLint) 
// (12)qm3462153452 (47)_ZN16QOpenGLFunctions14glShaderBinaryEiPKjjPKvi
//static
/*void qm3462153452(int n, const unsigned int * shaders, unsigned int binaryformat, const void * binary, int length)*/ {
  int n = *(int*)this_; const unsigned int * shaders = *(const unsigned int **)this_; unsigned int binaryformat = *(unsigned int*)this_; const void * binary = *(const void **)this_; int length = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glShaderBinary(n, shaders, binaryformat, binary, length);
   auto xptr = (void (QOpenGLFunctions::*)(int, unsigned int const*, unsigned int, void const*, int) ) &QOpenGLFunctions::glShaderBinary;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:388
// [-2] void glStencilFuncSeparate(GLenum, GLenum, GLint, GLuint) 
// (11)qm275824220 (49)_ZN16QOpenGLFunctions21glStencilFuncSeparateEjjij
//static
/*void qm275824220(unsigned int face, unsigned int func_, int ref, unsigned int mask)*/ {
  unsigned int face = *(unsigned int*)this_; unsigned int func_ = *(unsigned int*)this_; int ref = *(int*)this_; unsigned int mask = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glStencilFuncSeparate(face, func_, ref, mask);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, int, unsigned int) ) &QOpenGLFunctions::glStencilFuncSeparate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:389
// [-2] void glStencilMaskSeparate(GLenum, GLuint) 
// (12)qm4284770491 (47)_ZN16QOpenGLFunctions21glStencilMaskSeparateEjj
//static
/*void qm4284770491(unsigned int face, unsigned int mask)*/ {
  unsigned int face = *(unsigned int*)this_; unsigned int mask = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glStencilMaskSeparate(face, mask);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int) ) &QOpenGLFunctions::glStencilMaskSeparate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:390
// [-2] void glStencilOpSeparate(GLenum, GLenum, GLenum, GLenum) 
// (11)qm526218287 (47)_ZN16QOpenGLFunctions19glStencilOpSeparateEjjjj
//static
/*void qm526218287(unsigned int face, unsigned int fail, unsigned int zfail, unsigned int zpass)*/ {
  unsigned int face = *(unsigned int*)this_; unsigned int fail = *(unsigned int*)this_; unsigned int zfail = *(unsigned int*)this_; unsigned int zpass = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glStencilOpSeparate(face, fail, zfail, zpass);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, unsigned int, unsigned int, unsigned int) ) &QOpenGLFunctions::glStencilOpSeparate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:391
// [-2] void glUniform1f(GLint, GLfloat) 
// (12)qm2653969460 (37)_ZN16QOpenGLFunctions11glUniform1fEif
//static
/*void qm2653969460(int location, float x)*/ {
  int location = *(int*)this_; float x = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform1f(location, x);
   auto xptr = (void (QOpenGLFunctions::*)(int, float) ) &QOpenGLFunctions::glUniform1f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:392
// [-2] void glUniform1fv(GLint, GLsizei, const GLfloat *) 
// (12)qm2792833262 (41)_ZN16QOpenGLFunctions12glUniform1fvEiiPKf
//static
/*void qm2792833262(int location, int count, const float * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const float * v = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform1fv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, float const*) ) &QOpenGLFunctions::glUniform1fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:393
// [-2] void glUniform1i(GLint, GLint) 
// (12)qm1458328051 (37)_ZN16QOpenGLFunctions11glUniform1iEii
//static
/*void qm1458328051(int location, int x)*/ {
  int location = *(int*)this_; int x = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform1i(location, x);
   auto xptr = (void (QOpenGLFunctions::*)(int, int) ) &QOpenGLFunctions::glUniform1i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:394
// [-2] void glUniform1iv(GLint, GLsizei, const GLint *) 
// (12)qm4024979411 (41)_ZN16QOpenGLFunctions12glUniform1ivEiiPKi
//static
/*void qm4024979411(int location, int count, const int * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const int * v = *(const int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform1iv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int const*) ) &QOpenGLFunctions::glUniform1iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:395
// [-2] void glUniform2f(GLint, GLfloat, GLfloat) 
// (12)qm3513621927 (38)_ZN16QOpenGLFunctions11glUniform2fEiff
//static
/*void qm3513621927(int location, float x, float y)*/ {
  int location = *(int*)this_; float x = *(float*)this_; float y = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform2f(location, x, y);
   auto xptr = (void (QOpenGLFunctions::*)(int, float, float) ) &QOpenGLFunctions::glUniform2f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:396
// [-2] void glUniform2fv(GLint, GLsizei, const GLfloat *) 
// (12)qm2683993131 (41)_ZN16QOpenGLFunctions12glUniform2fvEiiPKf
//static
/*void qm2683993131(int location, int count, const float * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const float * v = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform2fv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, float const*) ) &QOpenGLFunctions::glUniform2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:397
// [-2] void glUniform2i(GLint, GLint, GLint) 
// (12)qm1142557480 (38)_ZN16QOpenGLFunctions11glUniform2iEiii
//static
/*void qm1142557480(int location, int x, int y)*/ {
  int location = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform2i(location, x, y);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int) ) &QOpenGLFunctions::glUniform2i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:398
// [-2] void glUniform2iv(GLint, GLsizei, const GLint *) 
// (12)qm3596972822 (41)_ZN16QOpenGLFunctions12glUniform2ivEiiPKi
//static
/*void qm3596972822(int location, int count, const int * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const int * v = *(const int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform2iv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int const*) ) &QOpenGLFunctions::glUniform2iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:399
// [-2] void glUniform3f(GLint, GLfloat, GLfloat, GLfloat) 
// (12)qm2563210114 (39)_ZN16QOpenGLFunctions11glUniform3fEifff
//static
/*void qm2563210114(int location, float x, float y, float z)*/ {
  int location = *(int*)this_; float x = *(float*)this_; float y = *(float*)this_; float z = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform3f(location, x, y, z);
   auto xptr = (void (QOpenGLFunctions::*)(int, float, float, float) ) &QOpenGLFunctions::glUniform3f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:400
// [-2] void glUniform3fv(GLint, GLsizei, const GLfloat *) 
// (12)qm2290182248 (41)_ZN16QOpenGLFunctions12glUniform3fvEiiPKf
//static
/*void qm2290182248(int location, int count, const float * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const float * v = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform3fv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, float const*) ) &QOpenGLFunctions::glUniform3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:401
// [-2] void glUniform3i(GLint, GLint, GLint, GLint) 
// (12)qm1978306356 (39)_ZN16QOpenGLFunctions11glUniform3iEiiii
//static
/*void qm1978306356(int location, int x, int y, int z)*/ {
  int location = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_; int z = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform3i(location, x, y, z);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int, int) ) &QOpenGLFunctions::glUniform3i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:402
// [-2] void glUniform3iv(GLint, GLsizei, const GLint *) 
// (12)qm3239995221 (41)_ZN16QOpenGLFunctions12glUniform3ivEiiPKi
//static
/*void qm3239995221(int location, int count, const int * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const int * v = *(const int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform3iv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int const*) ) &QOpenGLFunctions::glUniform3iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:403
// [-2] void glUniform4f(GLint, GLfloat, GLfloat, GLfloat, GLfloat) 
// (12)qm2134378382 (40)_ZN16QOpenGLFunctions11glUniform4fEiffff
//static
/*void qm2134378382(int location, float x, float y, float z, float w)*/ {
  int location = *(int*)this_; float x = *(float*)this_; float y = *(float*)this_; float z = *(float*)this_; float w = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform4f(location, x, y, z, w);
   auto xptr = (void (QOpenGLFunctions::*)(int, float, float, float, float) ) &QOpenGLFunctions::glUniform4f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:404
// [-2] void glUniform4fv(GLint, GLsizei, const GLfloat *) 
// (12)qm3974104481 (41)_ZN16QOpenGLFunctions12glUniform4fvEiiPKf
//static
/*void qm3974104481(int location, int count, const float * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const float * v = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform4fv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, float const*) ) &QOpenGLFunctions::glUniform4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:405
// [-2] void glUniform4i(GLint, GLint, GLint, GLint, GLint) 
// (12)qm3446153554 (40)_ZN16QOpenGLFunctions11glUniform4iEiiiii
//static
/*void qm3446153554(int location, int x, int y, int z, int w)*/ {
  int location = *(int*)this_; int x = *(int*)this_; int y = *(int*)this_; int z = *(int*)this_; int w = *(int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform4i(location, x, y, z, w);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int, int, int) ) &QOpenGLFunctions::glUniform4i;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:406
// [-2] void glUniform4iv(GLint, GLsizei, const GLint *) 
// (12)qm2776566428 (41)_ZN16QOpenGLFunctions12glUniform4ivEiiPKi
//static
/*void qm2776566428(int location, int count, const int * v)*/ {
  int location = *(int*)this_; int count = *(int*)this_; const int * v = *(const int **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniform4iv(location, count, v);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, int const*) ) &QOpenGLFunctions::glUniform4iv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:407
// [-2] void glUniformMatrix2fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm3891035530 (48)_ZN16QOpenGLFunctions18glUniformMatrix2fvEiihPKf
//static
/*void qm3891035530(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniformMatrix2fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLFunctions::glUniformMatrix2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:408
// [-2] void glUniformMatrix3fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (11)qm137238196 (48)_ZN16QOpenGLFunctions18glUniformMatrix3fvEiihPKf
//static
/*void qm137238196(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniformMatrix3fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLFunctions::glUniformMatrix3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:409
// [-2] void glUniformMatrix4fv(GLint, GLsizei, GLboolean, const GLfloat *) 
// (12)qm3941731789 (48)_ZN16QOpenGLFunctions18glUniformMatrix4fvEiihPKf
//static
/*void qm3941731789(int location, int count, unsigned char transpose, const float * value)*/ {
  int location = *(int*)this_; int count = *(int*)this_; unsigned char transpose = *(unsigned char*)this_; const float * value = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glUniformMatrix4fv(location, count, transpose, value);
   auto xptr = (void (QOpenGLFunctions::*)(int, int, unsigned char, float const*) ) &QOpenGLFunctions::glUniformMatrix4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:410
// [-2] void glUseProgram(GLuint) 
// (12)qm1766405688 (37)_ZN16QOpenGLFunctions12glUseProgramEj
//static
/*void qm1766405688(unsigned int program)*/ {
  unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glUseProgram(program);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glUseProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:411
// [-2] void glValidateProgram(GLuint) 
// (11)qm133931423 (42)_ZN16QOpenGLFunctions17glValidateProgramEj
//static
/*void qm133931423(unsigned int program)*/ {
  unsigned int program = *(unsigned int*)this_;
  (void) ((QOpenGLFunctions*)this_)->glValidateProgram(program);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int) ) &QOpenGLFunctions::glValidateProgram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:412
// [-2] void glVertexAttrib1f(GLuint, GLfloat) 
// (12)qm1358041131 (42)_ZN16QOpenGLFunctions16glVertexAttrib1fEjf
//static
/*void qm1358041131(unsigned int indx, float x)*/ {
  unsigned int indx = *(unsigned int*)this_; float x = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib1f(indx, x);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float) ) &QOpenGLFunctions::glVertexAttrib1f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:413
// [-2] void glVertexAttrib1fv(GLuint, const GLfloat *) 
// (11)qm420615563 (45)_ZN16QOpenGLFunctions17glVertexAttrib1fvEjPKf
//static
/*void qm420615563(unsigned int indx, const float * values)*/ {
  unsigned int indx = *(unsigned int*)this_; const float * values = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib1fv(indx, values);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float const*) ) &QOpenGLFunctions::glVertexAttrib1fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:414
// [-2] void glVertexAttrib2f(GLuint, GLfloat, GLfloat) 
// (12)qm1554731550 (43)_ZN16QOpenGLFunctions16glVertexAttrib2fEjff
//static
/*void qm1554731550(unsigned int indx, float x, float y)*/ {
  unsigned int indx = *(unsigned int*)this_; float x = *(float*)this_; float y = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib2f(indx, x, y);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float, float) ) &QOpenGLFunctions::glVertexAttrib2f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:415
// [-2] void glVertexAttrib2fv(GLuint, const GLfloat *) 
// (12)qm2543653480 (45)_ZN16QOpenGLFunctions17glVertexAttrib2fvEjPKf
//static
/*void qm2543653480(unsigned int indx, const float * values)*/ {
  unsigned int indx = *(unsigned int*)this_; const float * values = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib2fv(indx, values);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float const*) ) &QOpenGLFunctions::glVertexAttrib2fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:416
// [-2] void glVertexAttrib3f(GLuint, GLfloat, GLfloat, GLfloat) 
// (11)qm720877157 (44)_ZN16QOpenGLFunctions16glVertexAttrib3fEjfff
//static
/*void qm720877157(unsigned int indx, float x, float y, float z)*/ {
  unsigned int indx = *(unsigned int*)this_; float x = *(float*)this_; float y = *(float*)this_; float z = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib3f(indx, x, y, z);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float, float, float) ) &QOpenGLFunctions::glVertexAttrib3f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:417
// [-2] void glVertexAttrib3fv(GLuint, const GLfloat *) 
// (12)qm1530335990 (45)_ZN16QOpenGLFunctions17glVertexAttrib3fvEjPKf
//static
/*void qm1530335990(unsigned int indx, const float * values)*/ {
  unsigned int indx = *(unsigned int*)this_; const float * values = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib3fv(indx, values);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float const*) ) &QOpenGLFunctions::glVertexAttrib3fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:418
// [-2] void glVertexAttrib4f(GLuint, GLfloat, GLfloat, GLfloat, GLfloat) 
// (12)qm1105477784 (45)_ZN16QOpenGLFunctions16glVertexAttrib4fEjffff
//static
/*void qm1105477784(unsigned int indx, float x, float y, float z, float w)*/ {
  unsigned int indx = *(unsigned int*)this_; float x = *(float*)this_; float y = *(float*)this_; float z = *(float*)this_; float w = *(float*)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib4f(indx, x, y, z, w);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float, float, float, float) ) &QOpenGLFunctions::glVertexAttrib4f;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:419
// [-2] void glVertexAttrib4fv(GLuint, const GLfloat *) 
// (12)qm1374821359 (45)_ZN16QOpenGLFunctions17glVertexAttrib4fvEjPKf
//static
/*void qm1374821359(unsigned int indx, const float * values)*/ {
  unsigned int indx = *(unsigned int*)this_; const float * values = *(const float **)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttrib4fv(indx, values);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, float const*) ) &QOpenGLFunctions::glVertexAttrib4fv;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:420
// [-2] void glVertexAttribPointer(GLuint, GLint, GLenum, GLboolean, GLsizei, const void *) 
// (12)qm1528893728 (53)_ZN16QOpenGLFunctions21glVertexAttribPointerEjijhiPKv
//static
/*void qm1528893728(unsigned int indx, int size, unsigned int type_, unsigned char normalized, int stride, const void * ptr)*/ {
  unsigned int indx = *(unsigned int*)this_; int size = *(int*)this_; unsigned int type_ = *(unsigned int*)this_; unsigned char normalized = *(unsigned char*)this_; int stride = *(int*)this_; const void * ptr = *(const void **)this_;
  (void) ((QOpenGLFunctions*)this_)->glVertexAttribPointer(indx, size, type_, normalized, stride, ptr);
   auto xptr = (void (QOpenGLFunctions::*)(unsigned int, int, unsigned int, unsigned char, int, void const*) ) &QOpenGLFunctions::glVertexAttribPointer;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qopenglfunctions
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
