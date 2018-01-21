//  header block begin
// /usr/include/qt/QtGui/qfontmetrics.h
#include <qfontmetrics.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qfontmetrics.h:60
// void QFontMetrics(const class QFont &)
extern "C"
void* C_ZN12QFontMetricsC1ERK5QFont(const QFont & arg0) {
  return new QFontMetrics(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:61
// void QFontMetrics(const class QFont &, class QPaintDevice *)
extern "C"
void* C_ZN12QFontMetricsC1ERK5QFontP12QPaintDevice(const QFont & arg0, QPaintDevice * pd) {
  return new QFontMetrics(arg0, pd);
}
// /usr/include/qt/QtGui/qfontmetrics.h:63
// void ~QFontMetrics()
extern "C"
void C_ZN12QFontMetricsD1Ev(void *this_) {
  delete (QFontMetrics*)(this_);
}
// inline
// /usr/include/qt/QtGui/qfontmetrics.h:71
// void swap(class QFontMetrics &)
extern "C"
void C_ZN12QFontMetrics4swapERS_(void *this_, QFontMetrics & other) {
  ((QFontMetrics*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qfontmetrics.h:74
// int ascent()
extern "C"
void C_ZNK12QFontMetrics6ascentEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->ascent();
}
// /usr/include/qt/QtGui/qfontmetrics.h:75
// int descent()
extern "C"
void C_ZNK12QFontMetrics7descentEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->descent();
}
// /usr/include/qt/QtGui/qfontmetrics.h:76
// int height()
extern "C"
void C_ZNK12QFontMetrics6heightEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->height();
}
// /usr/include/qt/QtGui/qfontmetrics.h:77
// int leading()
extern "C"
void C_ZNK12QFontMetrics7leadingEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->leading();
}
// /usr/include/qt/QtGui/qfontmetrics.h:78
// int lineSpacing()
extern "C"
void C_ZNK12QFontMetrics11lineSpacingEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->lineSpacing();
}
// /usr/include/qt/QtGui/qfontmetrics.h:79
// int minLeftBearing()
extern "C"
void C_ZNK12QFontMetrics14minLeftBearingEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->minLeftBearing();
}
// /usr/include/qt/QtGui/qfontmetrics.h:80
// int minRightBearing()
extern "C"
void C_ZNK12QFontMetrics15minRightBearingEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->minRightBearing();
}
// /usr/include/qt/QtGui/qfontmetrics.h:81
// int maxWidth()
extern "C"
void C_ZNK12QFontMetrics8maxWidthEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->maxWidth();
}
// /usr/include/qt/QtGui/qfontmetrics.h:83
// int xHeight()
extern "C"
void C_ZNK12QFontMetrics7xHeightEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->xHeight();
}
// /usr/include/qt/QtGui/qfontmetrics.h:84
// int averageCharWidth()
extern "C"
void C_ZNK12QFontMetrics16averageCharWidthEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->averageCharWidth();
}
// /usr/include/qt/QtGui/qfontmetrics.h:86
// bool inFont(class QChar)
extern "C"
void C_ZNK12QFontMetrics6inFontE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetrics*)this_)->inFont(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:87
// bool inFontUcs4(uint)
extern "C"
void C_ZNK12QFontMetrics10inFontUcs4Ej(void *this_, uint ucs4) {
  /*return*/ ((QFontMetrics*)this_)->inFontUcs4(ucs4);
}
// /usr/include/qt/QtGui/qfontmetrics.h:89
// int leftBearing(class QChar)
extern "C"
void C_ZNK12QFontMetrics11leftBearingE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetrics*)this_)->leftBearing(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:90
// int rightBearing(class QChar)
extern "C"
void C_ZNK12QFontMetrics12rightBearingE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetrics*)this_)->rightBearing(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:91
// int width(const class QString &, int)
extern "C"
void C_ZNK12QFontMetrics5widthERK7QStringi(void *this_, const QString & arg0, int len) {
  /*return*/ ((QFontMetrics*)this_)->width(arg0, len);
}
// /usr/include/qt/QtGui/qfontmetrics.h:92
// int width(const class QString &, int, int)
extern "C"
void C_ZNK12QFontMetrics5widthERK7QStringii(void *this_, const QString & arg0, int len, int flags) {
  /*return*/ ((QFontMetrics*)this_)->width(arg0, len, flags);
}
// /usr/include/qt/QtGui/qfontmetrics.h:94
// int width(class QChar)
extern "C"
void C_ZNK12QFontMetrics5widthE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetrics*)this_)->width(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:96
// int charWidth(const class QString &, int)
extern "C"
void C_ZNK12QFontMetrics9charWidthERK7QStringi(void *this_, const QString & str, int pos) {
  /*return*/ ((QFontMetrics*)this_)->charWidth(str, pos);
}
// /usr/include/qt/QtGui/qfontmetrics.h:99
// QRect boundingRect(class QChar)
extern "C"
void C_ZNK12QFontMetrics12boundingRectE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetrics*)this_)->boundingRect(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:101
// QRect boundingRect(const class QString &)
extern "C"
void C_ZNK12QFontMetrics12boundingRectERK7QString(void *this_, const QString & text) {
  /*return*/ ((QFontMetrics*)this_)->boundingRect(text);
}
// /usr/include/qt/QtGui/qfontmetrics.h:102
// QRect boundingRect(const class QRect &, int, const class QString &, int, int *)
extern "C"
void C_ZNK12QFontMetrics12boundingRectERK5QRectiRK7QStringiPi(void *this_, const QRect & r, int flags, const QString & text, int tabstops, int * tabarray) {
  /*return*/ ((QFontMetrics*)this_)->boundingRect(r, flags, text, tabstops, tabarray);
}
// inline
// /usr/include/qt/QtGui/qfontmetrics.h:103
// QRect boundingRect(int, int, int, int, int, const class QString &, int, int *)
extern "C"
void C_ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi(void *this_, int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray) {
  /*return*/ ((QFontMetrics*)this_)->boundingRect(x, y, w, h, flags, text, tabstops, tabarray);
}
// /usr/include/qt/QtGui/qfontmetrics.h:106
// QSize size(int, const class QString &, int, int *)
extern "C"
void C_ZNK12QFontMetrics4sizeEiRK7QStringiPi(void *this_, int flags, const QString & str, int tabstops, int * tabarray) {
  /*return*/ ((QFontMetrics*)this_)->size(flags, str, tabstops, tabarray);
}
// /usr/include/qt/QtGui/qfontmetrics.h:108
// QRect tightBoundingRect(const class QString &)
extern "C"
void C_ZNK12QFontMetrics17tightBoundingRectERK7QString(void *this_, const QString & text) {
  /*return*/ ((QFontMetrics*)this_)->tightBoundingRect(text);
}
// /usr/include/qt/QtGui/qfontmetrics.h:110
// QString elidedText(const class QString &, Qt::TextElideMode, int, int)
extern "C"
void C_ZNK12QFontMetrics10elidedTextERK7QStringN2Qt13TextElideModeEii(void *this_, const QString & text, Qt::TextElideMode mode, int width, int flags) {
  /*return*/ ((QFontMetrics*)this_)->elidedText(text, mode, width, flags);
}
// /usr/include/qt/QtGui/qfontmetrics.h:112
// int underlinePos()
extern "C"
void C_ZNK12QFontMetrics12underlinePosEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->underlinePos();
}
// /usr/include/qt/QtGui/qfontmetrics.h:113
// int overlinePos()
extern "C"
void C_ZNK12QFontMetrics11overlinePosEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->overlinePos();
}
// /usr/include/qt/QtGui/qfontmetrics.h:114
// int strikeOutPos()
extern "C"
void C_ZNK12QFontMetrics12strikeOutPosEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->strikeOutPos();
}
// /usr/include/qt/QtGui/qfontmetrics.h:115
// int lineWidth()
extern "C"
void C_ZNK12QFontMetrics9lineWidthEv(void *this_) {
  /*return*/ ((QFontMetrics*)this_)->lineWidth();
}
//  main block end
