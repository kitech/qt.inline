//  header block begin
// /usr/include/qt/QtCore/qrandom.h
#ifndef protected
#define protected public
#endif
#include <qrandom.h>
#include <QtCore>
#include "callback_inherit.h"

// QRandomGenerator64 is pure virtual: false
// QRandomGenerator64 has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRandomGenerator64 : public QRandomGenerator64 {
public:
  virtual ~MyQRandomGenerator64() {}
// void QRandomGenerator64(quint32)
MyQRandomGenerator64(quint32 seedValue) : QRandomGenerator64(seedValue) {}
// void QRandomGenerator64(const quint32 *, qsizetype)
MyQRandomGenerator64(const quint32 * seedBuffer, qsizetype len_) : QRandomGenerator64(seedBuffer, len_) {}
// void QRandomGenerator64(const quint32 *, const quint32 *)
MyQRandomGenerator64(const quint32 * begin, const quint32 * end) : QRandomGenerator64(begin, end) {}
// void QRandomGenerator64(const class QRandomGenerator &)
MyQRandomGenerator64(const QRandomGenerator & other) : QRandomGenerator64(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:216
// [8] quint64 generate()
extern "C" Q_DECL_EXPORT
quint64 C_ZN18QRandomGenerator648generateEv(void *this_) {
  return (quint64)((QRandomGenerator64*)this_)->generate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:219
// [8] QRandomGenerator64::result_type operator()()
extern "C" Q_DECL_EXPORT
QRandomGenerator64::result_type C_ZN18QRandomGenerator64clEv(void *this_) {
  return (QRandomGenerator64::result_type)((QRandomGenerator64*)this_)->operator()();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:222
// [-2] void QRandomGenerator64(quint32)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator64C2Ej(quint32 seedValue) {
  return  new QRandomGenerator64(seedValue);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:228
// [-2] void QRandomGenerator64(const quint32 *, qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator64C2EPKjx(const quint32 * seedBuffer, qsizetype len_) {
  return  new QRandomGenerator64(seedBuffer, len_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:234
// [-2] void QRandomGenerator64(const quint32 *, const quint32 *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator64C2EPKjS1_(const quint32 * begin, const quint32 * end) {
  return  new QRandomGenerator64(begin, end);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:237
// [-2] void QRandomGenerator64(const class QRandomGenerator &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator64C2ERK16QRandomGenerator(QRandomGenerator* other) {
  return  new QRandomGenerator64(*other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:239
// [-2] void discard(unsigned long long)
extern "C" Q_DECL_EXPORT
void C_ZN18QRandomGenerator647discardEy(void *this_, unsigned long long z) {
  ((QRandomGenerator64*)this_)->discard(z);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:246
// [8] QRandomGenerator64::result_type min()
extern "C" Q_DECL_EXPORT
QRandomGenerator64::result_type C_ZN18QRandomGenerator643minEv() {
  return (QRandomGenerator64::result_type)QRandomGenerator64::min();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:247
// [8] QRandomGenerator64::result_type max()
extern "C" Q_DECL_EXPORT
QRandomGenerator64::result_type C_ZN18QRandomGenerator643maxEv() {
  return (QRandomGenerator64::result_type)QRandomGenerator64::max();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:248
// [8] QRandomGenerator64 * system()
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator646systemEv() {
  return (void*)QRandomGenerator64::system();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:249
// [8] QRandomGenerator64 * global()
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator646globalEv() {
  return (void*)QRandomGenerator64::global();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:250
// [2512] QRandomGenerator64 securelySeeded()
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator6414securelySeededEv() {
  auto rv = QRandomGenerator64::securelySeeded();
return new QRandomGenerator64(rv);
}

extern "C" Q_DECL_EXPORT
void C_ZN18QRandomGenerator64D2Ev(void *this_) {
  delete (QRandomGenerator64*)(this_);
}
//  main block end
