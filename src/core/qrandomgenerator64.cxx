//  header block begin
// /usr/include/qt/QtCore/qrandom.h
#include <qrandom.h>
#include <QtCore>

// QRandomGenerator64 is pure virtual: false
//  header block end

//  main block begin

class MyQRandomGenerator64 : public QRandomGenerator64 {
public:
MyQRandomGenerator64(quint32 seedValue) : QRandomGenerator64(seedValue) {}
MyQRandomGenerator64(const quint32 * seedBuffer, qsizetype len) : QRandomGenerator64(seedBuffer, len) {}
MyQRandomGenerator64(const quint32 * begin, const quint32 * end) : QRandomGenerator64(begin, end) {}
MyQRandomGenerator64(const QRandomGenerator & other) : QRandomGenerator64(other) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:209
// [8] quint64 generate()
extern "C"
quint64 C_ZN18QRandomGenerator648generateEv(void *this_) {
  return (quint64)((QRandomGenerator64*)this_)->generate();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:215
// [-2] void QRandomGenerator64(quint32)
extern "C"
void* C_ZN18QRandomGenerator64C1Ej(quint32 seedValue) {
  (MyQRandomGenerator64*)(0);
  return  new MyQRandomGenerator64(seedValue);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:221
// [-2] void QRandomGenerator64(const quint32 *, qsizetype)
extern "C"
void* C_ZN18QRandomGenerator64C1EPKjx(const quint32 * seedBuffer, qsizetype len) {
  (MyQRandomGenerator64*)(0);
  return  new MyQRandomGenerator64(seedBuffer, len);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:227
// [-2] void QRandomGenerator64(const quint32 *, const quint32 *)
extern "C"
void* C_ZN18QRandomGenerator64C1EPKjS1_(const quint32 * begin, const quint32 * end) {
  (MyQRandomGenerator64*)(0);
  return  new MyQRandomGenerator64(begin, end);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:230
// [-2] void QRandomGenerator64(const class QRandomGenerator &)
extern "C"
void* C_ZN18QRandomGenerator64C1ERK16QRandomGenerator(const QRandomGenerator & other) {
  (MyQRandomGenerator64*)(0);
  return  new MyQRandomGenerator64(other);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:232
// [-2] void discard(unsigned long long)
extern "C"
void C_ZN18QRandomGenerator647discardEy(void *this_, unsigned long long z) {
  ((QRandomGenerator64*)this_)->discard(z);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:239
// [8] QRandomGenerator64::result_type min()
extern "C"
QRandomGenerator64::result_type C_ZN18QRandomGenerator643minEv() {
  return (QRandomGenerator64::result_type)QRandomGenerator64::min();
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:240
// [8] QRandomGenerator64::result_type max()
extern "C"
QRandomGenerator64::result_type C_ZN18QRandomGenerator643maxEv() {
  return (QRandomGenerator64::result_type)QRandomGenerator64::max();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:241
// [8] QRandomGenerator64 * system()
extern "C"
void* C_ZN18QRandomGenerator646systemEv() {
  return (void*)QRandomGenerator64::system();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:242
// [8] QRandomGenerator64 * global()
extern "C"
void* C_ZN18QRandomGenerator646globalEv() {
  return (void*)QRandomGenerator64::global();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:243
// [2512] QRandomGenerator64 securelySeeded()
extern "C"
void* C_ZN18QRandomGenerator6414securelySeededEv() {
  auto rv = QRandomGenerator64::securelySeeded();
return new QRandomGenerator64(rv);
}
//  main block end
