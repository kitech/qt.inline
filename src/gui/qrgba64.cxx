//  header block begin
// since 0x050600
// /usr/include/qt/QtGui/qrgba64.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrgba64.h>
#include <QtGui>
#include "callback_inherit.h"

// QRgba64 is pure virtual: false
// QRgba64 has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQRgba64_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRgba64_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRgba64_t qt_meta_stringdata_MyQRgba64 = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQRgba64"
  },
  "MyQRgba64"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRgba64[] = {
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
class Q_DECL_EXPORT MyQRgba64 : public QRgba64 {
public:
  virtual ~MyQRgba64() {}
// void QRgba64()
MyQRgba64() : QRgba64() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:69
// [-2] void QRgba64()
extern "C" Q_DECL_EXPORT
void* C_ZN7QRgba64C2Ev() {
  return  new QRgba64();
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:72
// [8] QRgba64 fromRgba64(quint64)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRgba6410fromRgba64Ey(quint64 c) {
  auto rv = QRgba64::fromRgba64(c);
return new QRgba64(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:77
// [8] QRgba64 fromRgba64(quint16, quint16, quint16, quint16)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRgba6410fromRgba64Etttt(quint16 red, quint16 green, quint16 blue, quint16 alpha) {
  auto rv = QRgba64::fromRgba64(red, green, blue, alpha);
return new QRgba64(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:84
// [8] QRgba64 fromRgba(quint8, quint8, quint8, quint8)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRgba648fromRgbaEhhhh(quint8 red, quint8 green, quint8 blue, quint8 alpha) {
  auto rv = QRgba64::fromRgba(red, green, blue, alpha);
return new QRgba64(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:92
// [8] QRgba64 fromArgb32(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRgba6410fromArgb32Ej(uint rgb) {
  auto rv = QRgba64::fromArgb32(rgb);
return new QRgba64(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:97
// [1] bool isOpaque()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRgba648isOpaqueEv(void *this_) {
  return (bool)((QRgba64*)this_)->isOpaque();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:101
// [1] bool isTransparent()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRgba6413isTransparentEv(void *this_) {
  return (bool)((QRgba64*)this_)->isTransparent();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:106
// [2] quint16 red()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK7QRgba643redEv(void *this_) {
  return (quint16)((QRgba64*)this_)->red();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:107
// [2] quint16 green()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK7QRgba645greenEv(void *this_) {
  return (quint16)((QRgba64*)this_)->green();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:108
// [2] quint16 blue()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK7QRgba644blueEv(void *this_) {
  return (quint16)((QRgba64*)this_)->blue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:109
// [2] quint16 alpha()
extern "C" Q_DECL_EXPORT
quint16 C_ZNK7QRgba645alphaEv(void *this_) {
  return (quint16)((QRgba64*)this_)->alpha();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:110
// [-2] void setRed(quint16)
extern "C" Q_DECL_EXPORT
void C_ZN7QRgba646setRedEt(void *this_, quint16 _red) {
  ((QRgba64*)this_)->setRed(_red);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:111
// [-2] void setGreen(quint16)
extern "C" Q_DECL_EXPORT
void C_ZN7QRgba648setGreenEt(void *this_, quint16 _green) {
  ((QRgba64*)this_)->setGreen(_green);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:112
// [-2] void setBlue(quint16)
extern "C" Q_DECL_EXPORT
void C_ZN7QRgba647setBlueEt(void *this_, quint16 _blue) {
  ((QRgba64*)this_)->setBlue(_blue);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:113
// [-2] void setAlpha(quint16)
extern "C" Q_DECL_EXPORT
void C_ZN7QRgba648setAlphaEt(void *this_, quint16 _alpha) {
  ((QRgba64*)this_)->setAlpha(_alpha);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:115
// [1] quint8 red8()
extern "C" Q_DECL_EXPORT
quint8 C_ZNK7QRgba644red8Ev(void *this_) {
  return (quint8)((QRgba64*)this_)->red8();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:116
// [1] quint8 green8()
extern "C" Q_DECL_EXPORT
quint8 C_ZNK7QRgba646green8Ev(void *this_) {
  return (quint8)((QRgba64*)this_)->green8();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:117
// [1] quint8 blue8()
extern "C" Q_DECL_EXPORT
quint8 C_ZNK7QRgba645blue8Ev(void *this_) {
  return (quint8)((QRgba64*)this_)->blue8();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:118
// [1] quint8 alpha8()
extern "C" Q_DECL_EXPORT
quint8 C_ZNK7QRgba646alpha8Ev(void *this_) {
  return (quint8)((QRgba64*)this_)->alpha8();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:119
// [4] uint toArgb32()
extern "C" Q_DECL_EXPORT
uint C_ZNK7QRgba648toArgb32Ev(void *this_) {
  return (uint)((QRgba64*)this_)->toArgb32();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:123
// [2] ushort toRgb16()
extern "C" Q_DECL_EXPORT
ushort C_ZNK7QRgba647toRgb16Ev(void *this_) {
  return (ushort)((QRgba64*)this_)->toRgb16();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:128
// [8] QRgba64 premultiplied()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QRgba6413premultipliedEv(void *this_) {
  auto rv = ((QRgba64*)this_)->premultiplied();
return new QRgba64(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:137
// [8] QRgba64 unpremultiplied()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QRgba6415unpremultipliedEv(void *this_) {
  auto rv = ((QRgba64*)this_)->unpremultiplied();
return new QRgba64(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:151
// [8] QRgba64 operator=(quint64)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRgba64aSEy(void *this_, quint64 _rgba) {
  auto rv = ((QRgba64*)this_)->operator=(_rgba);
return new QRgba64(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN7QRgba64D2Ev(void *this_) {
  delete (QRgba64*)(this_);
}
//  main block end
