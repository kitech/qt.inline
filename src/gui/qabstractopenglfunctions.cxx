//  header block begin
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#include <qopenglversionfunctions.h>
#include <QtGui>

// QAbstractOpenGLFunctions is pure virtual: false
// QAbstractOpenGLFunctions has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:220
// [-2] void QAbstractOpenGLFunctions()
extern "C"
void* callback_ZN24QAbstractOpenGLFunctionsC1Ev = 0;
extern "C" void set_callback_ZN24QAbstractOpenGLFunctionsC1Ev(void*cbfn)
{ callback_ZN24QAbstractOpenGLFunctionsC1Ev = cbfn; }
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:223
// [1] bool isInitialized()
extern "C"
void* callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv = 0;
extern "C" void set_callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv(void*cbfn)
{ callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv = cbfn; }

class MyQAbstractOpenGLFunctions : public QAbstractOpenGLFunctions {
public:
  virtual ~MyQAbstractOpenGLFunctions() {}
// void QAbstractOpenGLFunctions()
MyQAbstractOpenGLFunctions() : QAbstractOpenGLFunctions() {}
// bool isInitialized()
  virtual bool isInitialized() {
    if (callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv != 0) {
      // callback_ZNK24QAbstractOpenGLFunctions13isInitializedEv();
    }
    return QAbstractOpenGLFunctions::isInitialized();
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
