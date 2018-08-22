//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractOpenGLFunctions is pure virtual: true
// QAbstractOpenGLFunctions has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractOpenGLFunctions : public QAbstractOpenGLFunctions {
public:
  virtual ~MyQAbstractOpenGLFunctions() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:213
// [-2] void ~QAbstractOpenGLFunctions()
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractOpenGLFunctionsD2Ev(void *this_) {
  delete (QAbstractOpenGLFunctions*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:215
// [1] bool initializeOpenGLFunctions()
extern "C" Q_DECL_EXPORT
bool C_ZN24QAbstractOpenGLFunctions25initializeOpenGLFunctionsEv(void *this_) {
  return (bool)((QAbstractOpenGLFunctions*)this_)->initializeOpenGLFunctions();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:217
// [8] QAbstractOpenGLFunctionsPrivate * d_func()
extern "C" Q_DECL_EXPORT
void* C_ZN24QAbstractOpenGLFunctions6d_funcEv(void *this_) {
  return (void*)((QAbstractOpenGLFunctions*)this_)->d_func();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:217
// [8] const QAbstractOpenGLFunctionsPrivate * d_func()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractOpenGLFunctions6d_funcEv(void *this_) {
  return (void*)((QAbstractOpenGLFunctions*)this_)->d_func();
}

//  main block end
