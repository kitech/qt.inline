//  header block begin
// /usr/include/qt/QtGui/qfontmetrics.h
#include <qfontmetrics.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qfontmetrics.h:132
// void QFontMetricsF(const class QFont &)
extern "C"
void* C_ZN13QFontMetricsFC1ERK5QFont(const QFont & arg0) {
  return new QFontMetricsF(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:133
// void QFontMetricsF(const class QFont &, class QPaintDevice *)
extern "C"
void* C_ZN13QFontMetricsFC1ERK5QFontP12QPaintDevice(const QFont & arg0, QPaintDevice * pd) {
  return new QFontMetricsF(arg0, pd);
}
// /usr/include/qt/QtGui/qfontmetrics.h:134
// void QFontMetricsF(const class QFontMetrics &)
extern "C"
void* C_ZN13QFontMetricsFC1ERK12QFontMetrics(const QFontMetrics & arg0) {
  return new QFontMetricsF(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:136
// void ~QFontMetricsF()
extern "C"
void C_ZN13QFontMetricsFD1Ev(void *this_) {
  delete (QFontMetricsF*)(this_);
}
// inline
// /usr/include/qt/QtGui/qfontmetrics.h:145
// void swap(class QFontMetricsF &)
extern "C"
void C_ZN13QFontMetricsF4swapERS_(void *this_, QFontMetricsF & other) {
  ((QFontMetricsF*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qfontmetrics.h:147
// qreal ascent()
extern "C"
void C_ZNK13QFontMetricsF6ascentEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->ascent();
}
// /usr/include/qt/QtGui/qfontmetrics.h:148
// qreal descent()
extern "C"
void C_ZNK13QFontMetricsF7descentEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->descent();
}
// /usr/include/qt/QtGui/qfontmetrics.h:149
// qreal height()
extern "C"
void C_ZNK13QFontMetricsF6heightEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->height();
}
// /usr/include/qt/QtGui/qfontmetrics.h:150
// qreal leading()
extern "C"
void C_ZNK13QFontMetricsF7leadingEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->leading();
}
// /usr/include/qt/QtGui/qfontmetrics.h:151
// qreal lineSpacing()
extern "C"
void C_ZNK13QFontMetricsF11lineSpacingEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->lineSpacing();
}
// /usr/include/qt/QtGui/qfontmetrics.h:152
// qreal minLeftBearing()
extern "C"
void C_ZNK13QFontMetricsF14minLeftBearingEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->minLeftBearing();
}
// /usr/include/qt/QtGui/qfontmetrics.h:153
// qreal minRightBearing()
extern "C"
void C_ZNK13QFontMetricsF15minRightBearingEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->minRightBearing();
}
// /usr/include/qt/QtGui/qfontmetrics.h:154
// qreal maxWidth()
extern "C"
void C_ZNK13QFontMetricsF8maxWidthEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->maxWidth();
}
// /usr/include/qt/QtGui/qfontmetrics.h:156
// qreal xHeight()
extern "C"
void C_ZNK13QFontMetricsF7xHeightEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->xHeight();
}
// /usr/include/qt/QtGui/qfontmetrics.h:157
// qreal averageCharWidth()
extern "C"
void C_ZNK13QFontMetricsF16averageCharWidthEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->averageCharWidth();
}
// /usr/include/qt/QtGui/qfontmetrics.h:159
// bool inFont(class QChar)
extern "C"
void C_ZNK13QFontMetricsF6inFontE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetricsF*)this_)->inFont(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:160
// bool inFontUcs4(uint)
extern "C"
void C_ZNK13QFontMetricsF10inFontUcs4Ej(void *this_, uint ucs4) {
  /*return*/ ((QFontMetricsF*)this_)->inFontUcs4(ucs4);
}
// /usr/include/qt/QtGui/qfontmetrics.h:162
// qreal leftBearing(class QChar)
extern "C"
void C_ZNK13QFontMetricsF11leftBearingE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetricsF*)this_)->leftBearing(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:163
// qreal rightBearing(class QChar)
extern "C"
void C_ZNK13QFontMetricsF12rightBearingE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetricsF*)this_)->rightBearing(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:164
// qreal width(const class QString &)
extern "C"
void C_ZNK13QFontMetricsF5widthERK7QString(void *this_, const QString & string) {
  /*return*/ ((QFontMetricsF*)this_)->width(string);
}
// /usr/include/qt/QtGui/qfontmetrics.h:166
// qreal width(class QChar)
extern "C"
void C_ZNK13QFontMetricsF5widthE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetricsF*)this_)->width(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:168
// QRectF boundingRect(const class QString &)
extern "C"
void C_ZNK13QFontMetricsF12boundingRectERK7QString(void *this_, const QString & string) {
  /*return*/ ((QFontMetricsF*)this_)->boundingRect(string);
}
// /usr/include/qt/QtGui/qfontmetrics.h:169
// QRectF boundingRect(class QChar)
extern "C"
void C_ZNK13QFontMetricsF12boundingRectE5QChar(void *this_, QChar arg0) {
  /*return*/ ((QFontMetricsF*)this_)->boundingRect(arg0);
}
// /usr/include/qt/QtGui/qfontmetrics.h:170
// QRectF boundingRect(const class QRectF &, int, const class QString &, int, int *)
extern "C"
void C_ZNK13QFontMetricsF12boundingRectERK6QRectFiRK7QStringiPi(void *this_, const QRectF & r, int flags, const QString & string, int tabstops, int * tabarray) {
  /*return*/ ((QFontMetricsF*)this_)->boundingRect(r, flags, string, tabstops, tabarray);
}
// /usr/include/qt/QtGui/qfontmetrics.h:171
// QSizeF size(int, const class QString &, int, int *)
extern "C"
void C_ZNK13QFontMetricsF4sizeEiRK7QStringiPi(void *this_, int flags, const QString & str, int tabstops, int * tabarray) {
  /*return*/ ((QFontMetricsF*)this_)->size(flags, str, tabstops, tabarray);
}
// /usr/include/qt/QtGui/qfontmetrics.h:173
// QRectF tightBoundingRect(const class QString &)
extern "C"
void C_ZNK13QFontMetricsF17tightBoundingRectERK7QString(void *this_, const QString & text) {
  /*return*/ ((QFontMetricsF*)this_)->tightBoundingRect(text);
}
// /usr/include/qt/QtGui/qfontmetrics.h:175
// QString elidedText(const class QString &, Qt::TextElideMode, qreal, int)
extern "C"
void C_ZNK13QFontMetricsF10elidedTextERK7QStringN2Qt13TextElideModeEdi(void *this_, const QString & text, Qt::TextElideMode mode, qreal width, int flags) {
  /*return*/ ((QFontMetricsF*)this_)->elidedText(text, mode, width, flags);
}
// /usr/include/qt/QtGui/qfontmetrics.h:177
// qreal underlinePos()
extern "C"
void C_ZNK13QFontMetricsF12underlinePosEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->underlinePos();
}
// /usr/include/qt/QtGui/qfontmetrics.h:178
// qreal overlinePos()
extern "C"
void C_ZNK13QFontMetricsF11overlinePosEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->overlinePos();
}
// /usr/include/qt/QtGui/qfontmetrics.h:179
// qreal strikeOutPos()
extern "C"
void C_ZNK13QFontMetricsF12strikeOutPosEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->strikeOutPos();
}
// /usr/include/qt/QtGui/qfontmetrics.h:180
// qreal lineWidth()
extern "C"
void C_ZNK13QFontMetricsF9lineWidthEv(void *this_) {
  /*return*/ ((QFontMetricsF*)this_)->lineWidth();
}
//  main block end
