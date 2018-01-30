//  header block begin
// /usr/include/qt/QtGui/qglyphrun.h
#include <qglyphrun.h>
#include <QtGui>

// QGlyphRun is pure virtual: false
// QGlyphRun has virtual projected: false
//  header block end

//  main block begin

class MyQGlyphRun : public QGlyphRun {
public:
  virtual ~MyQGlyphRun() {}
// void QGlyphRun()
MyQGlyphRun() : QGlyphRun() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:67
// [-2] void QGlyphRun()
extern "C"
void* C_ZN9QGlyphRunC2Ev() {
  return  new QGlyphRun();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:73
// [-2] void ~QGlyphRun()
extern "C"
void C_ZN9QGlyphRunD2Ev(void *this_) {
  delete (QGlyphRun*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:75
// [-2] void swap(class QGlyphRun &)
extern "C"
void C_ZN9QGlyphRun4swapERS_(void *this_, QGlyphRun & other) {
  ((QGlyphRun*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:77
// [8] QRawFont rawFont()
extern "C"
void* C_ZNK9QGlyphRun7rawFontEv(void *this_) {
  auto rv = ((QGlyphRun*)this_)->rawFont();
return new QRawFont(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:78
// [-2] void setRawFont(const class QRawFont &)
extern "C"
void C_ZN9QGlyphRun10setRawFontERK8QRawFont(void *this_, const QRawFont & rawFont) {
  ((QGlyphRun*)this_)->setRawFont(rawFont);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:80
// [-2] void setRawData(const quint32 *, const class QPointF *, int)
extern "C"
void C_ZN9QGlyphRun10setRawDataEPKjPK7QPointFi(void *this_, const quint32 * glyphIndexArray, const QPointF * glyphPositionArray, int size) {
  ((QGlyphRun*)this_)->setRawData(glyphIndexArray, glyphPositionArray, size);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:90
// [-2] void clear()
extern "C"
void C_ZN9QGlyphRun5clearEv(void *this_) {
  ((QGlyphRun*)this_)->clear();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:96
// [-2] void setOverline(_Bool)
extern "C"
void C_ZN9QGlyphRun11setOverlineEb(void *this_, bool overline) {
  ((QGlyphRun*)this_)->setOverline(overline);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:97
// [1] bool overline()
extern "C"
bool C_ZNK9QGlyphRun8overlineEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->overline();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:99
// [-2] void setUnderline(_Bool)
extern "C"
void C_ZN9QGlyphRun12setUnderlineEb(void *this_, bool underline) {
  ((QGlyphRun*)this_)->setUnderline(underline);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:100
// [1] bool underline()
extern "C"
bool C_ZNK9QGlyphRun9underlineEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->underline();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:102
// [-2] void setStrikeOut(_Bool)
extern "C"
void C_ZN9QGlyphRun12setStrikeOutEb(void *this_, bool strikeOut) {
  ((QGlyphRun*)this_)->setStrikeOut(strikeOut);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:103
// [1] bool strikeOut()
extern "C"
bool C_ZNK9QGlyphRun9strikeOutEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->strikeOut();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:105
// [-2] void setRightToLeft(_Bool)
extern "C"
void C_ZN9QGlyphRun14setRightToLeftEb(void *this_, bool on) {
  ((QGlyphRun*)this_)->setRightToLeft(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:106
// [1] bool isRightToLeft()
extern "C"
bool C_ZNK9QGlyphRun13isRightToLeftEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->isRightToLeft();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:108
// [-2] void setFlag(enum QGlyphRun::GlyphRunFlag, _Bool)
extern "C"
void C_ZN9QGlyphRun7setFlagENS_12GlyphRunFlagEb(void *this_, QGlyphRun::GlyphRunFlag flag, bool enabled) {
  ((QGlyphRun*)this_)->setFlag(flag, enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:109
// [-2] void setFlags(QGlyphRun::GlyphRunFlags)
extern "C"
void C_ZN9QGlyphRun8setFlagsE6QFlagsINS_12GlyphRunFlagEE(void *this_, QFlags<QGlyphRun::GlyphRunFlag> flags) {
  ((QGlyphRun*)this_)->setFlags(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:110
// [-2] QGlyphRun::GlyphRunFlags flags()
extern "C"
void C_ZNK9QGlyphRun5flagsEv(void *this_) {
  auto rv = ((QGlyphRun*)this_)->flags();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:112
// [-2] void setBoundingRect(const class QRectF &)
extern "C"
void C_ZN9QGlyphRun15setBoundingRectERK6QRectF(void *this_, const QRectF & boundingRect) {
  ((QGlyphRun*)this_)->setBoundingRect(boundingRect);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:113
// [32] QRectF boundingRect()
extern "C"
void* C_ZNK9QGlyphRun12boundingRectEv(void *this_) {
  auto rv = ((QGlyphRun*)this_)->boundingRect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:115
// [1] bool isEmpty()
extern "C"
bool C_ZNK9QGlyphRun7isEmptyEv(void *this_) {
  return (bool)((QGlyphRun*)this_)->isEmpty();
}
//  main block end
