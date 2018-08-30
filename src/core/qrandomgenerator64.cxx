//  header block begin
// since 0x050a00
// /usr/include/qt/QtCore/qrandom.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrandom.h>
#include <QtCore>
#include "callback_inherit.h"

// QRandomGenerator64 is pure virtual: false
// QRandomGenerator64 has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQRandomGenerator64_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRandomGenerator64_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRandomGenerator64_t qt_meta_stringdata_MyQRandomGenerator64 = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQRandomGenerator64"
  },
  "MyQRandomGenerator64"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRandomGenerator64[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQRandomGenerator64 : public QRandomGenerator64 {
public:
  virtual ~MyQRandomGenerator64() {}
// void QRandomGenerator64(quint32)
MyQRandomGenerator64(quint32 seedValue) : QRandomGenerator64(seedValue) {}
// void QRandomGenerator64(const quint32 *, qsizetype)
MyQRandomGenerator64(const quint32 * seedBuffer, qsizetype len_) : QRandomGenerator64(seedBuffer, len_) {}
// void QRandomGenerator64(std::seed_seq &)
MyQRandomGenerator64(std::seed_seq & sseq) : QRandomGenerator64(sseq) {}
// void QRandomGenerator64(const quint32 *, const quint32 *)
MyQRandomGenerator64(const quint32 * begin, const quint32 * end) : QRandomGenerator64(begin, end) {}
// void QRandomGenerator64(const QRandomGenerator &)
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
// /usr/include/qt/QtCore/qrandom.h:231
// [-2] void QRandomGenerator64(std::seed_seq &)
extern "C" Q_DECL_EXPORT
void* C_ZN18QRandomGenerator64C2ERSt8seed_seq(std::seed_seq & sseq) {
  return  new QRandomGenerator64(sseq);
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
// [-2] void QRandomGenerator64(const QRandomGenerator &)
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
