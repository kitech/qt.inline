//  header block begin
// /usr/include/qt/QtGui/qfontmetrics.h
#include <qfontmetrics.h>
#include <QtGui>

// QFontMetricsF is pure virtual: false
//  header block end

//  main block begin

class MyQFontMetricsF : public QFontMetricsF {
public:
MyQFontMetricsF(const QFont & arg0) : QFontMetricsF(arg0) {}
MyQFontMetricsF(const QFont & arg0, QPaintDevice * pd) : QFontMetricsF(arg0, pd) {}
MyQFontMetricsF(const QFontMetrics & arg0) : QFontMetricsF(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:134
// [-2] void QFontMetricsF(const class QFont &)
extern "C"
void* C_ZN13QFontMetricsFC1ERK5QFont(const QFont & arg0) {
  (MyQFontMetricsF*)(0);
  return  new MyQFontMetricsF(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:135
// [-2] void QFontMetricsF(const class QFont &, class QPaintDevice *)
extern "C"
void* C_ZN13QFontMetricsFC1ERK5QFontP12QPaintDevice(const QFont & arg0, QPaintDevice * pd) {
  (MyQFontMetricsF*)(0);
  return  new MyQFontMetricsF(arg0, pd);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:136
// [-2] void QFontMetricsF(const class QFontMetrics &)
extern "C"
void* C_ZN13QFontMetricsFC1ERK12QFontMetrics(const QFontMetrics & arg0) {
  (MyQFontMetricsF*)(0);
  return  new MyQFontMetricsF(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:138
// [-2] void ~QFontMetricsF()
extern "C"
void C_ZN13QFontMetricsFD1Ev(void *this_) {
  delete (QFontMetricsF*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:147
// [-2] void swap(class QFontMetricsF &)
extern "C"
void C_ZN13QFontMetricsF4swapERS_(void *this_, QFontMetricsF & other) {
  ((QFontMetricsF*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:149
// [8] qreal ascent()
extern "C"
qreal C_ZNK13QFontMetricsF6ascentEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->ascent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:150
// [8] qreal capHeight()
extern "C"
qreal C_ZNK13QFontMetricsF9capHeightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->capHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:151
// [8] qreal descent()
extern "C"
qreal C_ZNK13QFontMetricsF7descentEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->descent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:152
// [8] qreal height()
extern "C"
qreal C_ZNK13QFontMetricsF6heightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->height();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:153
// [8] qreal leading()
extern "C"
qreal C_ZNK13QFontMetricsF7leadingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->leading();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:154
// [8] qreal lineSpacing()
extern "C"
qreal C_ZNK13QFontMetricsF11lineSpacingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->lineSpacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:155
// [8] qreal minLeftBearing()
extern "C"
qreal C_ZNK13QFontMetricsF14minLeftBearingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->minLeftBearing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:156
// [8] qreal minRightBearing()
extern "C"
qreal C_ZNK13QFontMetricsF15minRightBearingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->minRightBearing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:157
// [8] qreal maxWidth()
extern "C"
qreal C_ZNK13QFontMetricsF8maxWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->maxWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:159
// [8] qreal xHeight()
extern "C"
qreal C_ZNK13QFontMetricsF7xHeightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->xHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:160
// [8] qreal averageCharWidth()
extern "C"
qreal C_ZNK13QFontMetricsF16averageCharWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->averageCharWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:162
// [1] bool inFont(class QChar)
extern "C"
bool C_ZNK13QFontMetricsF6inFontE5QChar(void *this_, QChar arg0) {
  return (bool)((QFontMetricsF*)this_)->inFont(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:163
// [1] bool inFontUcs4(uint)
extern "C"
bool C_ZNK13QFontMetricsF10inFontUcs4Ej(void *this_, uint ucs4) {
  return (bool)((QFontMetricsF*)this_)->inFontUcs4(ucs4);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:165
// [8] qreal leftBearing(class QChar)
extern "C"
qreal C_ZNK13QFontMetricsF11leftBearingE5QChar(void *this_, QChar arg0) {
  return (qreal)((QFontMetricsF*)this_)->leftBearing(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:166
// [8] qreal rightBearing(class QChar)
extern "C"
qreal C_ZNK13QFontMetricsF12rightBearingE5QChar(void *this_, QChar arg0) {
  return (qreal)((QFontMetricsF*)this_)->rightBearing(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:167
// [8] qreal width(const class QString &)
extern "C"
qreal C_ZNK13QFontMetricsF5widthERK7QString(void *this_, const QString & string) {
  return (qreal)((QFontMetricsF*)this_)->width(string);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:169
// [8] qreal width(class QChar)
extern "C"
qreal C_ZNK13QFontMetricsF5widthE5QChar(void *this_, QChar arg0) {
  return (qreal)((QFontMetricsF*)this_)->width(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:171
// [32] QRectF boundingRect(const class QString &)
extern "C"
void* C_ZNK13QFontMetricsF12boundingRectERK7QString(void *this_, const QString & string) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(string);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:172
// [32] QRectF boundingRect(class QChar)
extern "C"
void* C_ZNK13QFontMetricsF12boundingRectE5QChar(void *this_, QChar arg0) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(arg0);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:173
// [32] QRectF boundingRect(const class QRectF &, int, const class QString &, int, int *)
extern "C"
void* C_ZNK13QFontMetricsF12boundingRectERK6QRectFiRK7QStringiPi(void *this_, const QRectF & r, int flags, const QString & string, int tabstops, int * tabarray) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(r, flags, string, tabstops, tabarray);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:174
// [16] QSizeF size(int, const class QString &, int, int *)
extern "C"
void* C_ZNK13QFontMetricsF4sizeEiRK7QStringiPi(void *this_, int flags, const QString & str, int tabstops, int * tabarray) {
  auto rv = ((QFontMetricsF*)this_)->size(flags, str, tabstops, tabarray);
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:176
// [32] QRectF tightBoundingRect(const class QString &)
extern "C"
void* C_ZNK13QFontMetricsF17tightBoundingRectERK7QString(void *this_, const QString & text) {
  auto rv = ((QFontMetricsF*)this_)->tightBoundingRect(text);
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:178
// [8] QString elidedText(const class QString &, Qt::TextElideMode, qreal, int)
extern "C"
void* C_ZNK13QFontMetricsF10elidedTextERK7QStringN2Qt13TextElideModeEdi(void *this_, const QString & text, Qt::TextElideMode mode, qreal width, int flags) {
  auto rv = ((QFontMetricsF*)this_)->elidedText(text, mode, width, flags);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:180
// [8] qreal underlinePos()
extern "C"
qreal C_ZNK13QFontMetricsF12underlinePosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->underlinePos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:181
// [8] qreal overlinePos()
extern "C"
qreal C_ZNK13QFontMetricsF11overlinePosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->overlinePos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:182
// [8] qreal strikeOutPos()
extern "C"
qreal C_ZNK13QFontMetricsF12strikeOutPosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->strikeOutPos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:183
// [8] qreal lineWidth()
extern "C"
qreal C_ZNK13QFontMetricsF9lineWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->lineWidth();
}
//  main block end
