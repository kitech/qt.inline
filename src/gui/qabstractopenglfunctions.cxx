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
  virtual bool isInitialized() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isInitialized", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QAbstractOpenGLFunctions::isInitialized();
  }
  }

// Protected Visibility=Default Availability=Available
// void setOwningContext(const QOpenGLContext *)
  virtual void setOwningContext(const QOpenGLContext * context) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setOwningContext", &handled, 1, (uint64_t)context, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QAbstractOpenGLFunctions::setOwningContext(context);
  }
  }

// Protected Visibility=Default Availability=Available
// QOpenGLContext * owningContext()
  virtual QOpenGLContext * owningContext() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"owningContext", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QOpenGLContext *)(irv);
      // PointerPointerQOpenGLContext *
    } else {
    return QAbstractOpenGLFunctions::owningContext();
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

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:225
// [-2] void setOwningContext(const QOpenGLContext *)
extern "C" Q_DECL_EXPORT
void C_ZN24QAbstractOpenGLFunctions16setOwningContextEPK14QOpenGLContext(void *this_, const QOpenGLContext * context) {
  ((QAbstractOpenGLFunctions*)this_)->QAbstractOpenGLFunctions::setOwningContext(context);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:226
// [8] QOpenGLContext * owningContext()
extern "C" Q_DECL_EXPORT
void* C_ZNK24QAbstractOpenGLFunctions13owningContextEv(void *this_) {
  return (void*)((QAbstractOpenGLFunctions*)this_)->QAbstractOpenGLFunctions::owningContext();
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
