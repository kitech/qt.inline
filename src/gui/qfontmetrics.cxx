//  header block begin
// /usr/include/qt/QtGui/qfontmetrics.h
#include <qfontmetrics.h>
#include <QtGui>

// QFontMetrics is pure virtual: false
// QFontMetrics has virtual projected: false
//  header block end

//  main block begin

class MyQFontMetrics : public QFontMetrics {
public:
  virtual ~MyQFontMetrics() {}
// void QFontMetrics(const class QFont &)
MyQFontMetrics(const QFont & arg0) : QFontMetrics(arg0) {}
// void QFontMetrics(const class QFont &, class QPaintDevice *)
MyQFontMetrics(const QFont & arg0, QPaintDevice * pd) : QFontMetrics(arg0, pd) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:61
// [-2] void QFontMetrics(const class QFont &)
extern "C"
void* C_ZN12QFontMetricsC2ERK5QFont(const QFont & arg0) {
  return  new QFontMetrics(arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:62
// [-2] void QFontMetrics(const class QFont &, class QPaintDevice *)
extern "C"
void* C_ZN12QFontMetricsC2ERK5QFontP12QPaintDevice(const QFont & arg0, QPaintDevice * pd) {
  return  new QFontMetrics(arg0, pd);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:64
// [-2] void ~QFontMetrics()
extern "C"
void C_ZN12QFontMetricsD2Ev(void *this_) {
  delete (QFontMetrics*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:72
// [-2] void swap(class QFontMetrics &)
extern "C"
void C_ZN12QFontMetrics4swapERS_(void *this_, QFontMetrics & other) {
  ((QFontMetrics*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:75
// [4] int ascent()
extern "C"
int C_ZNK12QFontMetrics6ascentEv(void *this_) {
  return (int)((QFontMetrics*)this_)->ascent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:76
// [4] int capHeight()
extern "C"
int C_ZNK12QFontMetrics9capHeightEv(void *this_) {
  return (int)((QFontMetrics*)this_)->capHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:77
// [4] int descent()
extern "C"
int C_ZNK12QFontMetrics7descentEv(void *this_) {
  return (int)((QFontMetrics*)this_)->descent();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:78
// [4] int height()
extern "C"
int C_ZNK12QFontMetrics6heightEv(void *this_) {
  return (int)((QFontMetrics*)this_)->height();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:79
// [4] int leading()
extern "C"
int C_ZNK12QFontMetrics7leadingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->leading();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:80
// [4] int lineSpacing()
extern "C"
int C_ZNK12QFontMetrics11lineSpacingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->lineSpacing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:81
// [4] int minLeftBearing()
extern "C"
int C_ZNK12QFontMetrics14minLeftBearingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->minLeftBearing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:82
// [4] int minRightBearing()
extern "C"
int C_ZNK12QFontMetrics15minRightBearingEv(void *this_) {
  return (int)((QFontMetrics*)this_)->minRightBearing();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:83
// [4] int maxWidth()
extern "C"
int C_ZNK12QFontMetrics8maxWidthEv(void *this_) {
  return (int)((QFontMetrics*)this_)->maxWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:85
// [4] int xHeight()
extern "C"
int C_ZNK12QFontMetrics7xHeightEv(void *this_) {
  return (int)((QFontMetrics*)this_)->xHeight();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:86
// [4] int averageCharWidth()
extern "C"
int C_ZNK12QFontMetrics16averageCharWidthEv(void *this_) {
  return (int)((QFontMetrics*)this_)->averageCharWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:88
// [1] bool inFont(class QChar)
extern "C"
bool C_ZNK12QFontMetrics6inFontE5QChar(void *this_, QChar* arg0) {
  return (bool)((QFontMetrics*)this_)->inFont(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:89
// [1] bool inFontUcs4(uint)
extern "C"
bool C_ZNK12QFontMetrics10inFontUcs4Ej(void *this_, uint ucs4) {
  return (bool)((QFontMetrics*)this_)->inFontUcs4(ucs4);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:91
// [4] int leftBearing(class QChar)
extern "C"
int C_ZNK12QFontMetrics11leftBearingE5QChar(void *this_, QChar* arg0) {
  return (int)((QFontMetrics*)this_)->leftBearing(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:92
// [4] int rightBearing(class QChar)
extern "C"
int C_ZNK12QFontMetrics12rightBearingE5QChar(void *this_, QChar* arg0) {
  return (int)((QFontMetrics*)this_)->rightBearing(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:93
// [4] int width(const class QString &, int)
extern "C"
int C_ZNK12QFontMetrics5widthERK7QStringi(void *this_, const QString & arg0, int len) {
  return (int)((QFontMetrics*)this_)->width(arg0, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:94
// [4] int width(const class QString &, int, int)
extern "C"
int C_ZNK12QFontMetrics5widthERK7QStringii(void *this_, const QString & arg0, int len, int flags) {
  return (int)((QFontMetrics*)this_)->width(arg0, len, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:96
// [4] int width(class QChar)
extern "C"
int C_ZNK12QFontMetrics5widthE5QChar(void *this_, QChar* arg0) {
  return (int)((QFontMetrics*)this_)->width(*arg0);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:98
// [4] int charWidth(const class QString &, int)
extern "C"
int C_ZNK12QFontMetrics9charWidthERK7QStringi(void *this_, const QString & str, int pos) {
  return (int)((QFontMetrics*)this_)->charWidth(str, pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:101
// [16] QRect boundingRect(class QChar)
extern "C"
void* C_ZNK12QFontMetrics12boundingRectE5QChar(void *this_, QChar* arg0) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(*arg0);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:103
// [16] QRect boundingRect(const class QString &)
extern "C"
void* C_ZNK12QFontMetrics12boundingRectERK7QString(void *this_, const QString & text) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(text);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:104
// [16] QRect boundingRect(const class QRect &, int, const class QString &, int, int *)
extern "C"
void* C_ZNK12QFontMetrics12boundingRectERK5QRectiRK7QStringiPi(void *this_, const QRect & r, int flags, const QString & text, int tabstops, int * tabarray) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(r, flags, text, tabstops, tabarray);
return new QRect(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:105
// [16] QRect boundingRect(int, int, int, int, int, const class QString &, int, int *)
extern "C"
void* C_ZNK12QFontMetrics12boundingRectEiiiiiRK7QStringiPi(void *this_, int x, int y, int w, int h, int flags, const QString & text, int tabstops, int * tabarray) {
  auto rv = ((QFontMetrics*)this_)->boundingRect(x, y, w, h, flags, text, tabstops, tabarray);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:108
// [8] QSize size(int, const class QString &, int, int *)
extern "C"
void* C_ZNK12QFontMetrics4sizeEiRK7QStringiPi(void *this_, int flags, const QString & str, int tabstops, int * tabarray) {
  auto rv = ((QFontMetrics*)this_)->size(flags, str, tabstops, tabarray);
return new QSize(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:110
// [16] QRect tightBoundingRect(const class QString &)
extern "C"
void* C_ZNK12QFontMetrics17tightBoundingRectERK7QString(void *this_, const QString & text) {
  auto rv = ((QFontMetrics*)this_)->tightBoundingRect(text);
return new QRect(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:112
// [8] QString elidedText(const class QString &, Qt::TextElideMode, int, int)
extern "C"
void* C_ZNK12QFontMetrics10elidedTextERK7QStringN2Qt13TextElideModeEii(void *this_, const QString & text, Qt::TextElideMode mode, int width, int flags) {
  auto rv = ((QFontMetrics*)this_)->elidedText(text, mode, width, flags);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:114
// [4] int underlinePos()
extern "C"
int C_ZNK12QFontMetrics12underlinePosEv(void *this_) {
  return (int)((QFontMetrics*)this_)->underlinePos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:115
// [4] int overlinePos()
extern "C"
int C_ZNK12QFontMetrics11overlinePosEv(void *this_) {
  return (int)((QFontMetrics*)this_)->overlinePos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:116
// [4] int strikeOutPos()
extern "C"
int C_ZNK12QFontMetrics12strikeOutPosEv(void *this_) {
  return (int)((QFontMetrics*)this_)->strikeOutPos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:117
// [4] int lineWidth()
extern "C"
int C_ZNK12QFontMetrics9lineWidthEv(void *this_) {
  return (int)((QFontMetrics*)this_)->lineWidth();
}
//  main block end
