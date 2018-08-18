//  header block begin
// since 0x040600
// /usr/include/qt/QtCore/qprocess.h
#ifndef protected
#define protected public
#endif
#include <qprocess.h>
#include <QtCore>
#include "callback_inherit.h"

// QProcessEnvironment is pure virtual: false
// QProcessEnvironment has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQProcessEnvironment : public QProcessEnvironment {
public:
  virtual ~MyQProcessEnvironment() {}
// void QProcessEnvironment()
MyQProcessEnvironment() : QProcessEnvironment() {}
// void QProcessEnvironment(const QProcessEnvironment &)
MyQProcessEnvironment(const QProcessEnvironment & other) : QProcessEnvironment(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:70
// [-2] void QProcessEnvironment()
extern "C" Q_DECL_EXPORT
void* C_ZN19QProcessEnvironmentC2Ev() {
  return  new QProcessEnvironment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:71
// [-2] void QProcessEnvironment(const QProcessEnvironment &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QProcessEnvironmentC2ERKS_(QProcessEnvironment* other) {
  return  new QProcessEnvironment(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:72
// [-2] void ~QProcessEnvironment()
extern "C" Q_DECL_EXPORT
void C_ZN19QProcessEnvironmentD2Ev(void *this_) {
  delete (QProcessEnvironment*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:74
// [8] QProcessEnvironment & operator=(QProcessEnvironment &&)
extern "C" Q_DECL_EXPORT
void* C_ZN19QProcessEnvironmentaSEOS_(void *this_, QProcessEnvironment && other) {
  auto& rv = ((QProcessEnvironment*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:76
// [8] QProcessEnvironment & operator=(const QProcessEnvironment &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QProcessEnvironmentaSERKS_(void *this_, QProcessEnvironment* other) {
  auto& rv = ((QProcessEnvironment*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qprocess.h:78
// [-2] void swap(QProcessEnvironment &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN19QProcessEnvironment4swapERS_(void *this_, QProcessEnvironment* other) {
  ((QProcessEnvironment*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:80
// [1] bool operator==(const QProcessEnvironment &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QProcessEnvironmenteqERKS_(void *this_, QProcessEnvironment* other) {
  return (bool)((QProcessEnvironment*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:81
// [1] bool operator!=(const QProcessEnvironment &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QProcessEnvironmentneERKS_(void *this_, QProcessEnvironment* other) {
  return (bool)((QProcessEnvironment*)this_)->operator!=(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:84
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QProcessEnvironment7isEmptyEv(void *this_) {
  return (bool)((QProcessEnvironment*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:85
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN19QProcessEnvironment5clearEv(void *this_) {
  ((QProcessEnvironment*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:87
// [1] bool contains(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK19QProcessEnvironment8containsERK7QString(void *this_, QString* name) {
  return (bool)((QProcessEnvironment*)this_)->contains(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:88
// [-2] void insert(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QProcessEnvironment6insertERK7QStringS2_(void *this_, QString* name, QString* value) {
  ((QProcessEnvironment*)this_)->insert(*name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:89
// [-2] void remove(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN19QProcessEnvironment6removeERK7QString(void *this_, QString* name) {
  ((QProcessEnvironment*)this_)->remove(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:90
// [8] QString value(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QProcessEnvironment5valueERK7QStringS2_(void *this_, QString* name, QString* defaultValue) {
  auto rv = ((QProcessEnvironment*)this_)->value(*name, *defaultValue);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qprocess.h:92
// [8] QStringList toStringList()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QProcessEnvironment12toStringListEv(void *this_) {
  auto rv = ((QProcessEnvironment*)this_)->toStringList();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qprocess.h:94
// [8] QStringList keys()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK19QProcessEnvironment4keysEv(void *this_) {
  auto rv = ((QProcessEnvironment*)this_)->keys();
return new QStringList(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qprocess.h:96
// [-2] void insert(const QProcessEnvironment &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN19QProcessEnvironment6insertERKS_(void *this_, QProcessEnvironment* e) {
  ((QProcessEnvironment*)this_)->insert(*e);
}
#endif // QT_VERSION >= 0x040800

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qprocess.h:98
// [8] QProcessEnvironment systemEnvironment()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
void* C_ZN19QProcessEnvironment17systemEnvironmentEv() {
  auto rv = QProcessEnvironment::systemEnvironment();
return new QProcessEnvironment(rv);
}
#endif // QT_VERSION >= 0x040600

//  main block end
