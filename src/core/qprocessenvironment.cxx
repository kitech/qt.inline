//  header block begin
// /usr/include/qt/QtCore/qprocess.h
#include <qprocess.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qprocess.h:70
// void QProcessEnvironment()
extern "C"
void* C_ZN19QProcessEnvironmentC1Ev() {
  return new QProcessEnvironment();
}
// /usr/include/qt/QtCore/qprocess.h:72
// void ~QProcessEnvironment()
extern "C"
void C_ZN19QProcessEnvironmentD1Ev(void *this_) {
  delete (QProcessEnvironment*)(this_);
}
// inline
// /usr/include/qt/QtCore/qprocess.h:78
// void swap(class QProcessEnvironment &)
extern "C"
void C_ZN19QProcessEnvironment4swapERS_(void *this_, QProcessEnvironment & other) {
  ((QProcessEnvironment*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qprocess.h:84
// bool isEmpty()
extern "C"
void C_ZNK19QProcessEnvironment7isEmptyEv(void *this_) {
  /*return*/ ((QProcessEnvironment*)this_)->isEmpty();
}
// /usr/include/qt/QtCore/qprocess.h:85
// void clear()
extern "C"
void C_ZN19QProcessEnvironment5clearEv(void *this_) {
  ((QProcessEnvironment*)this_)->clear();
}
// /usr/include/qt/QtCore/qprocess.h:87
// bool contains(const class QString &)
extern "C"
void C_ZNK19QProcessEnvironment8containsERK7QString(void *this_, const QString & name) {
  /*return*/ ((QProcessEnvironment*)this_)->contains(name);
}
// /usr/include/qt/QtCore/qprocess.h:89
// void remove(const class QString &)
extern "C"
void C_ZN19QProcessEnvironment6removeERK7QString(void *this_, const QString & name) {
  ((QProcessEnvironment*)this_)->remove(name);
}
// /usr/include/qt/QtCore/qprocess.h:90
// QString value(const class QString &, const class QString &)
extern "C"
void C_ZNK19QProcessEnvironment5valueERK7QStringS2_(void *this_, const QString & name, const QString & defaultValue) {
  /*return*/ ((QProcessEnvironment*)this_)->value(name, defaultValue);
}
// /usr/include/qt/QtCore/qprocess.h:92
// QStringList toStringList()
extern "C"
void C_ZNK19QProcessEnvironment12toStringListEv(void *this_) {
  /*return*/ ((QProcessEnvironment*)this_)->toStringList();
}
// /usr/include/qt/QtCore/qprocess.h:94
// QStringList keys()
extern "C"
void C_ZNK19QProcessEnvironment4keysEv(void *this_) {
  /*return*/ ((QProcessEnvironment*)this_)->keys();
}
// static
// /usr/include/qt/QtCore/qprocess.h:98
// QProcessEnvironment systemEnvironment()
extern "C"
void C_ZN19QProcessEnvironment17systemEnvironmentEv() {
  /*return*/ QProcessEnvironment::systemEnvironment();
}
//  main block end
