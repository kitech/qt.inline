//  header block begin
// since 0x050a00
// /usr/include/qt/QtCore/qrandom.h
#ifndef protected
#define protected public
#endif
#include <qrandom.h>
#include <QtCore>
#include "callback_inherit.h"

// QRandomGenerator is pure virtual: false
// QRandomGenerator has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRandomGenerator : public QRandomGenerator {
public:
  virtual ~MyQRandomGenerator() {}
// void QRandomGenerator(quint32)
MyQRandomGenerator(quint32 seedValue) : QRandomGenerator(seedValue) {}
// void QRandomGenerator(const quint32 *, qsizetype)
MyQRandomGenerator(const quint32 * seedBuffer, qsizetype len_) : QRandomGenerator(seedBuffer, len_) {}
// void QRandomGenerator(const quint32 *, const quint32 *)
MyQRandomGenerator(const quint32 * begin, const quint32 * end) : QRandomGenerator(begin, end) {}
// void QRandomGenerator(QRandomGenerator::System)
MyQRandomGenerator(QRandomGenerator::System arg0) : QRandomGenerator(arg0) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:62
// [-2] void QRandomGenerator(quint32)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGeneratorC2Ej(quint32 seedValue) {
  return  new QRandomGenerator(seedValue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:68
// [-2] void QRandomGenerator(const quint32 *, qsizetype)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGeneratorC2EPKjx(const quint32 * seedBuffer, qsizetype len_) {
  return  new QRandomGenerator(seedBuffer, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:72
// [-2] void QRandomGenerator(const quint32 *, const quint32 *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGeneratorC2EPKjS1_(const quint32 * begin, const quint32 * end) {
  return  new QRandomGenerator(begin, end);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:76
// [2512] QRandomGenerator & operator=(const QRandomGenerator &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGeneratoraSERKS_(void *this_, QRandomGenerator* other) {
  auto& rv = ((QRandomGenerator*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:84
// [4] quint32 generate()
extern "C" Q_DECL_EXPORT
quint32 C_ZN16QRandomGenerator8generateEv(void *this_) {
  return (quint32)((QRandomGenerator*)this_)->generate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:91
// [8] quint64 generate64()
extern "C" Q_DECL_EXPORT
quint64 C_ZN16QRandomGenerator10generate64Ev(void *this_) {
  return (quint64)((QRandomGenerator*)this_)->generate64();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:98
// [8] double generateDouble()
extern "C" Q_DECL_EXPORT
double C_ZN16QRandomGenerator14generateDoubleEv(void *this_) {
  return (double)((QRandomGenerator*)this_)->generateDouble();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:112
// [8] double bounded(double)
extern "C" Q_DECL_EXPORT
double C_ZN16QRandomGenerator7boundedEd(void *this_, double highest) {
  return (double)((QRandomGenerator*)this_)->bounded(highest);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:117
// [4] quint32 bounded(quint32)
extern "C" Q_DECL_EXPORT
quint32 C_ZN16QRandomGenerator7boundedEj(void *this_, quint32 highest) {
  return (quint32)((QRandomGenerator*)this_)->bounded(highest);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:125
// [4] int bounded(int)
extern "C" Q_DECL_EXPORT
int C_ZN16QRandomGenerator7boundedEi(void *this_, int highest) {
  return (int)((QRandomGenerator*)this_)->bounded(highest);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:130
// [4] quint32 bounded(quint32, quint32)
extern "C" Q_DECL_EXPORT
quint32 C_ZN16QRandomGenerator7boundedEjj(void *this_, quint32 lowest, quint32 highest) {
  return (quint32)((QRandomGenerator*)this_)->bounded(lowest, highest);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:135
// [4] int bounded(int, int)
extern "C" Q_DECL_EXPORT
int C_ZN16QRandomGenerator7boundedEii(void *this_, int lowest, int highest) {
  return (int)((QRandomGenerator*)this_)->bounded(lowest, highest);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:159
// [-2] void generate(quint32 *, quint32 *)
extern "C" Q_DECL_EXPORT
void C_ZN16QRandomGenerator8generateEPjS0_(void *this_, quint32 * begin, quint32 * end) {
  ((QRandomGenerator*)this_)->generate(begin, end);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:166
// [4] QRandomGenerator::result_type operator()()
extern "C" Q_DECL_EXPORT
QRandomGenerator::result_type C_ZN16QRandomGeneratorclEv(void *this_) {
  return (QRandomGenerator::result_type)((QRandomGenerator*)this_)->operator()();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:167
// [-2] void seed(quint32)
extern "C" Q_DECL_EXPORT
void C_ZN16QRandomGenerator4seedEj(void *this_, quint32 s) {
  ((QRandomGenerator*)this_)->seed(s);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:169
// [-2] void discard(unsigned long long)
extern "C" Q_DECL_EXPORT
void C_ZN16QRandomGenerator7discardEy(void *this_, unsigned long long z) {
  ((QRandomGenerator*)this_)->discard(z);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:170
// [4] QRandomGenerator::result_type min()
extern "C" Q_DECL_EXPORT
QRandomGenerator::result_type C_ZN16QRandomGenerator3minEv() {
  return (QRandomGenerator::result_type)QRandomGenerator::min();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:171
// [4] QRandomGenerator::result_type max()
extern "C" Q_DECL_EXPORT
QRandomGenerator::result_type C_ZN16QRandomGenerator3maxEv() {
  return (QRandomGenerator::result_type)QRandomGenerator::max();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:173
// [8] QRandomGenerator * system()
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGenerator6systemEv() {
  return (void*)QRandomGenerator::system();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:174
// [8] QRandomGenerator * global()
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGenerator6globalEv() {
  return (void*)QRandomGenerator::global();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrandom.h:175
// [2512] QRandomGenerator securelySeeded()
extern "C" Q_DECL_EXPORT
void* C_ZN16QRandomGenerator14securelySeededEv() {
  auto rv = QRandomGenerator::securelySeeded();
return new QRandomGenerator(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN16QRandomGeneratorD2Ev(void *this_) {
  delete (QRandomGenerator*)(this_);
}
//  main block end
