//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractOpenGLFunctions is pure virtual: false
// QAbstractOpenGLFunctions has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAbstractOpenGLFunctions : public QAbstractOpenGLFunctions {
public:
  virtual ~MyQAbstractOpenGLFunctions() {}
// void QAbstractOpenGLFunctions()
MyQAbstractOpenGLFunctions() : QAbstractOpenGLFunctions() {}
// Protected Visibility=Default Availability=Available
// bool isInitialized()
  virtual bool isInitialized() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isInitialized", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractOpenGLFunctions::isInitialized();
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:223
// [1] bool isInitialized()
extern "C" Q_DECL_EXPORT
bool C_ZNK24QAbstractOpenGLFunctions13isInitializedEv(void *this_) {
  return (bool)((QAbstractOpenGLFunctions*)this_)->QAbstractOpenGLFunctions::isInitialized();
}

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

//  main block end
