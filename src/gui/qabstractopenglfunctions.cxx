//  header block begin
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QAbstractOpenGLFunctions is pure virtual: false
// QAbstractOpenGLFunctions has virtual projected: true
//  header block end

//  main block begin
// void* callback_ZN24QAbstractOpenGLFunctionsC1Ev_fnptr = 0;
// extern "C" void set_callback_ZN24QAbstractOpenGLFunctionsC1Ev(void*cbfn)
// { callback_ZN24QAbstractOpenGLFunctionsC1Ev_fnptr = cbfn; }
// void* callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv_fnptr = 0;
// extern "C" void set_callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv(void*cbfn)
// { callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv_fnptr = cbfn; }

class MyQAbstractOpenGLFunctions : public QAbstractOpenGLFunctions {
public:
  virtual ~MyQAbstractOpenGLFunctions() {}
// void QAbstractOpenGLFunctions()
MyQAbstractOpenGLFunctions() : QAbstractOpenGLFunctions() {}
// bool isInitialized()
  virtual bool isInitialized() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isInitialized", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    // auto fnptr = ((bool (*)(void* ))(callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv_fnptr));
    // if (fnptr != 0) {
    //   fnptr(this );
    // }
    return QAbstractOpenGLFunctions::isInitialized();
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:213
// [-2] void ~QAbstractOpenGLFunctions()
extern "C"
void C_ZN24QAbstractOpenGLFunctionsD2Ev(void *this_) {
  delete (QAbstractOpenGLFunctions*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:215
// [1] bool initializeOpenGLFunctions()
extern "C"
bool C_ZN24QAbstractOpenGLFunctions25initializeOpenGLFunctionsEv(void *this_) {
  return (bool)((QAbstractOpenGLFunctions*)this_)->initializeOpenGLFunctions();
}
//  main block end
