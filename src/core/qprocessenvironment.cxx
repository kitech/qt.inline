//  header block begin
// /usr/include/qt/QtCore/qprocess.h
#include <qprocess.h>
#include <QtCore>
#include "callback_inherit.h"

// QProcessEnvironment is pure virtual: false
// QProcessEnvironment has virtual projected: false
//  header block end

//  main block begin

class MyQProcessEnvironment : public QProcessEnvironment {
public:
  virtual ~MyQProcessEnvironment() {}
// void QProcessEnvironment()
MyQProcessEnvironment() : QProcessEnvironment() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:70
// [-2] void QProcessEnvironment()
extern "C"
void* C_ZN19QProcessEnvironmentC2Ev() {
  return  new QProcessEnvironment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:72
// [-2] void ~QProcessEnvironment()
extern "C"
void C_ZN19QProcessEnvironmentD2Ev(void *this_) {
  delete (QProcessEnvironment*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:78
// [-2] void swap(class QProcessEnvironment &)
extern "C"
void C_ZN19QProcessEnvironment4swapERS_(void *this_, QProcessEnvironment* other) {
  ((QProcessEnvironment*)this_)->swap(*other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:84
// [1] bool isEmpty()
extern "C"
bool C_ZNK19QProcessEnvironment7isEmptyEv(void *this_) {
  return (bool)((QProcessEnvironment*)this_)->isEmpty();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:85
// [-2] void clear()
extern "C"
void C_ZN19QProcessEnvironment5clearEv(void *this_) {
  ((QProcessEnvironment*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:87
// [1] bool contains(const class QString &)
extern "C"
bool C_ZNK19QProcessEnvironment8containsERK7QString(void *this_, QString* name) {
  return (bool)((QProcessEnvironment*)this_)->contains(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:89
// [-2] void remove(const class QString &)
extern "C"
void C_ZN19QProcessEnvironment6removeERK7QString(void *this_, QString* name) {
  ((QProcessEnvironment*)this_)->remove(*name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:90
// [8] QString value(const class QString &, const class QString &)
extern "C"
void* C_ZNK19QProcessEnvironment5valueERK7QStringS2_(void *this_, QString* name, QString* defaultValue) {
  auto rv = ((QProcessEnvironment*)this_)->value(*name, *defaultValue);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:98
// [8] QProcessEnvironment systemEnvironment()
extern "C"
void* C_ZN19QProcessEnvironment17systemEnvironmentEv() {
  auto rv = QProcessEnvironment::systemEnvironment();
return new QProcessEnvironment(rv);
}
//  main block end
