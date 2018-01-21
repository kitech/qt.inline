//  header block begin
// /usr/include/qt/QtGui/qrgba64.h
#include <qrgba64.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qrgba64.h:74
// void QRgba64()
extern "C"
void* C_ZN7QRgba64C1Ev() {
  return new QRgba64();
}
// static inline
// /usr/include/qt/QtGui/qrgba64.h:78
// QRgba64 fromRgba64(quint64)
extern "C"
void C_ZN7QRgba6410fromRgba64Ey(quint64 c) {
  /*return*/ QRgba64::fromRgba64(c);
}
// static inline
// /usr/include/qt/QtGui/qrgba64.h:89
// QRgba64 fromRgba64(quint16, quint16, quint16, quint16)
extern "C"
void C_ZN7QRgba6410fromRgba64Etttt(quint16 red, quint16 green, quint16 blue, quint16 alpha) {
  /*return*/ QRgba64::fromRgba64(red, green, blue, alpha);
}
// static inline
// /usr/include/qt/QtGui/qrgba64.h:96
// QRgba64 fromRgba(quint8, quint8, quint8, quint8)
extern "C"
void C_ZN7QRgba648fromRgbaEhhhh(quint8 red, quint8 green, quint8 blue, quint8 alpha) {
  /*return*/ QRgba64::fromRgba(red, green, blue, alpha);
}
// static inline
// /usr/include/qt/QtGui/qrgba64.h:104
// QRgba64 fromArgb32(uint)
extern "C"
void C_ZN7QRgba6410fromArgb32Ej(uint rgb) {
  /*return*/ QRgba64::fromArgb32(rgb);
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:109
// bool isOpaque()
extern "C"
void C_ZNK7QRgba648isOpaqueEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->isOpaque();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:113
// bool isTransparent()
extern "C"
void C_ZNK7QRgba6413isTransparentEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->isTransparent();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:118
// quint16 red()
extern "C"
void C_ZNK7QRgba643redEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->red();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:119
// quint16 green()
extern "C"
void C_ZNK7QRgba645greenEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->green();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:120
// quint16 blue()
extern "C"
void C_ZNK7QRgba644blueEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->blue();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:121
// quint16 alpha()
extern "C"
void C_ZNK7QRgba645alphaEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->alpha();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:122
// void setRed(quint16)
extern "C"
void C_ZN7QRgba646setRedEt(void *this_, quint16 _red) {
  ((QRgba64*)this_)->setRed(_red);
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:123
// void setGreen(quint16)
extern "C"
void C_ZN7QRgba648setGreenEt(void *this_, quint16 _green) {
  ((QRgba64*)this_)->setGreen(_green);
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:124
// void setBlue(quint16)
extern "C"
void C_ZN7QRgba647setBlueEt(void *this_, quint16 _blue) {
  ((QRgba64*)this_)->setBlue(_blue);
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:125
// void setAlpha(quint16)
extern "C"
void C_ZN7QRgba648setAlphaEt(void *this_, quint16 _alpha) {
  ((QRgba64*)this_)->setAlpha(_alpha);
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:127
// quint8 red8()
extern "C"
void C_ZNK7QRgba644red8Ev(void *this_) {
  /*return*/ ((QRgba64*)this_)->red8();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:128
// quint8 green8()
extern "C"
void C_ZNK7QRgba646green8Ev(void *this_) {
  /*return*/ ((QRgba64*)this_)->green8();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:129
// quint8 blue8()
extern "C"
void C_ZNK7QRgba645blue8Ev(void *this_) {
  /*return*/ ((QRgba64*)this_)->blue8();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:130
// quint8 alpha8()
extern "C"
void C_ZNK7QRgba646alpha8Ev(void *this_) {
  /*return*/ ((QRgba64*)this_)->alpha8();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:131
// uint toArgb32()
extern "C"
void C_ZNK7QRgba648toArgb32Ev(void *this_) {
  /*return*/ ((QRgba64*)this_)->toArgb32();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:135
// ushort toRgb16()
extern "C"
void C_ZNK7QRgba647toRgb16Ev(void *this_) {
  /*return*/ ((QRgba64*)this_)->toRgb16();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:140
// QRgba64 premultiplied()
extern "C"
void C_ZNK7QRgba6413premultipliedEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->premultiplied();
}
// inline
// /usr/include/qt/QtGui/qrgba64.h:149
// QRgba64 unpremultiplied()
extern "C"
void C_ZNK7QRgba6415unpremultipliedEv(void *this_) {
  /*return*/ ((QRgba64*)this_)->unpremultiplied();
}
//  main block end
