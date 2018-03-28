//  header block begin
// /usr/include/qt/QtGui/qfontmetrics.h
#ifndef protected
#define protected public
#endif
#include <qfontmetrics.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontMetricsF is pure virtual: false
// QFontMetricsF has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFontMetricsF : public QFontMetricsF {
public:
  virtual ~MyQFontMetricsF() {}
// void QFontMetricsF(const QFont &)
MyQFontMetricsF(const QFont & arg0) : QFontMetricsF(arg0) {}
// void QFontMetricsF(const QFont &, QPaintDevice *)
MyQFontMetricsF(const QFont & arg0, QPaintDevice * pd) : QFontMetricsF(arg0, pd) {}
// void QFontMetricsF(const QFontMetrics &)
MyQFontMetricsF(const QFontMetrics & arg0) : QFontMetricsF(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:134
// [-2] void QFontMetricsF(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERK5QFont(QFont* arg0) {
  return  new QFontMetricsF(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:135
// [-2] void QFontMetricsF(const QFont &, QPaintDevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERK5QFontP12QPaintDevice(QFont* arg0, QPaintDevice * pd) {
  return  new QFontMetricsF(*arg0, pd);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:136
// [-2] void QFontMetricsF(const QFontMetrics &)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFC2ERK12QFontMetrics(QFontMetrics* arg0) {
  return  new QFontMetricsF(*arg0);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:138
// [-2] void ~QFontMetricsF()
extern "C" Q_DECL_EXPORT
void C_ZN13QFontMetricsFD2Ev(void *this_) {
  delete (QFontMetricsF*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:140
// [8] QFontMetricsF & operator=(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFaSERKS_(void *this_, QFontMetricsF* arg0) {
  auto& rv = ((QFontMetricsF*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:141
// [8] QFontMetricsF & operator=(const QFontMetrics &)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFaSERK12QFontMetrics(void *this_, QFontMetrics* arg0) {
  auto& rv = ((QFontMetricsF*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:143
// [8] QFontMetricsF & operator=(QFontMetricsF &&)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFontMetricsFaSEOS_(void *this_, QFontMetricsF && other) {
  auto& rv = ((QFontMetricsF*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qfontmetrics.h:147
// [-2] void swap(QFontMetricsF &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN13QFontMetricsF4swapERS_(void *this_, QFontMetricsF* other) {
  ((QFontMetricsF*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:149
// [8] qreal ascent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF6ascentEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->ascent();
}

// Public Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtGui/qfontmetrics.h:150
// [8] qreal capHeight()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF9capHeightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->capHeight();
}
#endif // QT_VERSION >= 0x050800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:151
// [8] qreal descent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF7descentEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->descent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:152
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF6heightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->height();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:153
// [8] qreal leading()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF7leadingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->leading();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:154
// [8] qreal lineSpacing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF11lineSpacingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->lineSpacing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:155
// [8] qreal minLeftBearing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF14minLeftBearingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->minLeftBearing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:156
// [8] qreal minRightBearing()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF15minRightBearingEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->minRightBearing();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:157
// [8] qreal maxWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF8maxWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->maxWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:159
// [8] qreal xHeight()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF7xHeightEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->xHeight();
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:160
// [8] qreal averageCharWidth()
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF16averageCharWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->averageCharWidth();
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:162
// [1] bool inFont(QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsF6inFontE5QChar(void *this_, QChar* arg0) {
  return (bool)((QFontMetricsF*)this_)->inFont(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:163
// [1] bool inFontUcs4(uint)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsF10inFontUcs4Ej(void *this_, uint ucs4) {
  return (bool)((QFontMetricsF*)this_)->inFontUcs4(ucs4);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:165
// [8] qreal leftBearing(QChar)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF11leftBearingE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->leftBearing(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:166
// [8] qreal rightBearing(QChar)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF12rightBearingE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->rightBearing(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:167
// [8] qreal width(const QString &)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF5widthERK7QString(void *this_, QString* string) {
  return (qreal)((QFontMetricsF*)this_)->width(*string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:169
// [8] qreal width(QChar)
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF5widthE5QChar(void *this_, QChar* arg0) {
  return (qreal)((QFontMetricsF*)this_)->width(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:171
// [32] QRectF boundingRect(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF12boundingRectERK7QString(void *this_, QString* string) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(*string);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:172
// [32] QRectF boundingRect(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF12boundingRectE5QChar(void *this_, QChar* arg0) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(*arg0);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:173
// [32] QRectF boundingRect(const QRectF &, int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF12boundingRectERK6QRectFiRK7QStringiPi(void *this_, QRectF* r, int flags, QString* string, int tabstops, int * tabarray) {
  auto rv = ((QFontMetricsF*)this_)->boundingRect(*r, flags, *string, tabstops, tabarray);
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:174
// [16] QSizeF size(int, const QString &, int, int *)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF4sizeEiRK7QStringiPi(void *this_, int flags, QString* str, int tabstops, int * tabarray) {
  auto rv = ((QFontMetricsF*)this_)->size(flags, *str, tabstops, tabarray);
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// since 4.3
// /usr/include/qt/QtGui/qfontmetrics.h:176
// [32] QRectF tightBoundingRect(const QString &)
#if QT_VERSION >= 0x040300
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF17tightBoundingRectERK7QString(void *this_, QString* text) {
  auto rv = ((QFontMetricsF*)this_)->tightBoundingRect(*text);
return new QRectF(rv);
}
#endif // QT_VERSION >= 0x040300

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtGui/qfontmetrics.h:178
// [8] QString elidedText(const QString &, Qt::TextElideMode, qreal, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFontMetricsF10elidedTextERK7QStringN2Qt13TextElideModeEdi(void *this_, QString* text, Qt::TextElideMode mode, qreal width, int flags) {
  auto rv = ((QFontMetricsF*)this_)->elidedText(*text, mode, width, flags);
return new QString(rv);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:180
// [8] qreal underlinePos()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF12underlinePosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->underlinePos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:181
// [8] qreal overlinePos()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF11overlinePosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->overlinePos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:182
// [8] qreal strikeOutPos()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF12strikeOutPosEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->strikeOutPos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:183
// [8] qreal lineWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QFontMetricsF9lineWidthEv(void *this_) {
  return (qreal)((QFontMetricsF*)this_)->lineWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:185
// [1] bool operator==(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsFeqERKS_(void *this_, QFontMetricsF* other) {
  return (bool)((QFontMetricsF*)this_)->operator==(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:186
// [1] bool operator!=(const QFontMetricsF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK13QFontMetricsFneERKS_(void *this_, QFontMetricsF* other) {
  return (bool)((QFontMetricsF*)this_)->operator!=(*other);
}

//  main block end
