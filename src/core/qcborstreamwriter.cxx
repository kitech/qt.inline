//  header block begin

// since 0x050c00
// /usr/include/qt/QtCore/qcborstream.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcborstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QCborStreamWriter is pure virtual: false
// QCborStreamWriter has virtual projected: false
//  header block end

//  main block begin


// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:66
// [-2] void QCborStreamWriter(QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamWriterC2EP9QIODevice(QIODevice * device) {
  return 0; // new QCborStreamWriter(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:67
// [-2] void QCborStreamWriter(QByteArray *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamWriterC2EP10QByteArray(QByteArray * data) {
  return 0; // new QCborStreamWriter(data);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:68
// [-2] void ~QCborStreamWriter()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriterD2Ev(void *this_) {
  delete (QCborStreamWriter*)(this_);
}
// Public inline Visibility=Default Availability=NotAvailable
// /usr/include/qt/QtCore/qcborstream.h:69
// [-2] void QCborStreamWriter(const QCborStreamWriter &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QCborStreamWriterC2ERKS_(QCborStreamWriter* arg0) {
  return 0; // new QCborStreamWriter(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:71
// [-2] void setDevice(QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QCborStreamWriter*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:72
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QCborStreamWriter6deviceEv(void *this_) {
  return (void*)((QCborStreamWriter*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:74
// [-2] void append(quint64)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEy(void *this_, quint64 u) {
  ((QCborStreamWriter*)this_)->append(u);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:75
// [-2] void append(qint64)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEx(void *this_, qint64 i) {
  ((QCborStreamWriter*)this_)->append(i);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:76
// [-2] void append(QCborNegativeInteger)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE20QCborNegativeInteger(void *this_, QCborNegativeInteger n) {
  ((QCborStreamWriter*)this_)->append(n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:77
// [-2] void append(const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendERK10QByteArray(void *this_, QByteArray* ba) {
  ((QCborStreamWriter*)this_)->append(*ba);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:78
// [-2] void append(QLatin1String)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE13QLatin1String(void *this_, QLatin1String* str) {
  ((QCborStreamWriter*)this_)->append(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:79
// [-2] void append(QStringView)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE11QStringView(void *this_, QStringView* str) {
  ((QCborStreamWriter*)this_)->append(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:80
// [-2] void append(QCborTag)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE8QCborTag(void *this_, QCborTag tag) {
  ((QCborStreamWriter*)this_)->append(tag);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:81
// [-2] void append(QCborKnownTags)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE14QCborKnownTags(void *this_, QCborKnownTags tag) {
  ((QCborStreamWriter*)this_)->append(tag);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:82
// [-2] void append(QCborSimpleType)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE15QCborSimpleType(void *this_, QCborSimpleType st) {
  ((QCborStreamWriter*)this_)->append(st);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:83
// [-2] void append(std::nullptr_t)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEDn(void *this_, std::nullptr_t arg0) {
  ((QCborStreamWriter*)this_)->append(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:84
// [-2] void append(qfloat16)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendE8qfloat16(void *this_, qfloat16* f) {
  ((QCborStreamWriter*)this_)->append(*f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:85
// [-2] void append(float)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEf(void *this_, float f) {
  ((QCborStreamWriter*)this_)->append(f);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:86
// [-2] void append(double)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEd(void *this_, double d) {
  ((QCborStreamWriter*)this_)->append(d);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:88
// [-2] void appendByteString(const char *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter16appendByteStringEPKcx(void *this_, const char * data, qsizetype len_) {
  ((QCborStreamWriter*)this_)->appendByteString(data, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:89
// [-2] void appendTextString(const char *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter16appendTextStringEPKcx(void *this_, const char * utf8, qsizetype len_) {
  ((QCborStreamWriter*)this_)->appendTextString(utf8, len_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:92
// [-2] void append(bool)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEb(void *this_, bool b) {
  ((QCborStreamWriter*)this_)->append(b);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:93
// [-2] void appendNull()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter10appendNullEv(void *this_) {
  ((QCborStreamWriter*)this_)->appendNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:94
// [-2] void appendUndefined()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter15appendUndefinedEv(void *this_) {
  ((QCborStreamWriter*)this_)->appendUndefined();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:98
// [-2] void append(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEi(void *this_, int i) {
  ((QCborStreamWriter*)this_)->append(i);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:99
// [-2] void append(uint)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEj(void *this_, uint u) {
  ((QCborStreamWriter*)this_)->append(u);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:102
// [-2] void append(const char *, qsizetype)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter6appendEPKcx(void *this_, const char * str, qsizetype size) {
  ((QCborStreamWriter*)this_)->append(str, size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:106
// [-2] void startArray()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter10startArrayEv(void *this_) {
  ((QCborStreamWriter*)this_)->startArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:107
// [-2] void startArray(quint64)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter10startArrayEy(void *this_, quint64 count) {
  ((QCborStreamWriter*)this_)->startArray(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:108
// [1] bool endArray()
extern "C" Q_DECL_EXPORT
bool C_ZN17QCborStreamWriter8endArrayEv(void *this_) {
  return (bool)((QCborStreamWriter*)this_)->endArray();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:109
// [-2] void startMap()
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter8startMapEv(void *this_) {
  ((QCborStreamWriter*)this_)->startMap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:110
// [-2] void startMap(quint64)
extern "C" Q_DECL_EXPORT
void C_ZN17QCborStreamWriter8startMapEy(void *this_, quint64 count) {
  ((QCborStreamWriter*)this_)->startMap(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcborstream.h:111
// [1] bool endMap()
extern "C" Q_DECL_EXPORT
bool C_ZN17QCborStreamWriter6endMapEv(void *this_) {
  return (bool)((QCborStreamWriter*)this_)->endMap();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
