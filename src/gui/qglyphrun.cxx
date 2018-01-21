//  header block begin
// /usr/include/qt/QtGui/qglyphrun.h
#include <qglyphrun.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qglyphrun.h:66
// void QGlyphRun()
extern "C"
void* C_ZN9QGlyphRunC1Ev() {
  return new QGlyphRun();
}
// /usr/include/qt/QtGui/qglyphrun.h:72
// void ~QGlyphRun()
extern "C"
void C_ZN9QGlyphRunD1Ev(void *this_) {
  delete (QGlyphRun*)(this_);
}
// inline
// /usr/include/qt/QtGui/qglyphrun.h:74
// void swap(class QGlyphRun &)
extern "C"
void C_ZN9QGlyphRun4swapERS_(void *this_, QGlyphRun & other) {
  ((QGlyphRun*)this_)->swap(other);
}
// /usr/include/qt/QtGui/qglyphrun.h:76
// QRawFont rawFont()
extern "C"
void C_ZNK9QGlyphRun7rawFontEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->rawFont();
}
// /usr/include/qt/QtGui/qglyphrun.h:77
// void setRawFont(const class QRawFont &)
extern "C"
void C_ZN9QGlyphRun10setRawFontERK8QRawFont(void *this_, const QRawFont & rawFont) {
  ((QGlyphRun*)this_)->setRawFont(rawFont);
}
// /usr/include/qt/QtGui/qglyphrun.h:79
// void setRawData(const quint32 *, const class QPointF *, int)
extern "C"
void C_ZN9QGlyphRun10setRawDataEPKjPK7QPointFi(void *this_, const quint32 * glyphIndexArray, const QPointF * glyphPositionArray, int size) {
  ((QGlyphRun*)this_)->setRawData(glyphIndexArray, glyphPositionArray, size);
}
// /usr/include/qt/QtGui/qglyphrun.h:83
// QVector<quint32> glyphIndexes()
extern "C"
void C_ZNK9QGlyphRun12glyphIndexesEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->glyphIndexes();
}
// /usr/include/qt/QtGui/qglyphrun.h:84
// void setGlyphIndexes(const QVector<quint32> &)
extern "C"
void C_ZN9QGlyphRun15setGlyphIndexesERK7QVectorIjE(void *this_, const QVector<quint32> & glyphIndexes) {
  ((QGlyphRun*)this_)->setGlyphIndexes(glyphIndexes);
}
// /usr/include/qt/QtGui/qglyphrun.h:86
// QVector<QPointF> positions()
extern "C"
void C_ZNK9QGlyphRun9positionsEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->positions();
}
// /usr/include/qt/QtGui/qglyphrun.h:87
// void setPositions(const QVector<class QPointF> &)
extern "C"
void C_ZN9QGlyphRun12setPositionsERK7QVectorI7QPointFE(void *this_, const QVector<QPointF> & positions) {
  ((QGlyphRun*)this_)->setPositions(positions);
}
// /usr/include/qt/QtGui/qglyphrun.h:89
// void clear()
extern "C"
void C_ZN9QGlyphRun5clearEv(void *this_) {
  ((QGlyphRun*)this_)->clear();
}
// /usr/include/qt/QtGui/qglyphrun.h:95
// void setOverline(_Bool)
extern "C"
void C_ZN9QGlyphRun11setOverlineEb(void *this_, bool overline) {
  ((QGlyphRun*)this_)->setOverline(overline);
}
// /usr/include/qt/QtGui/qglyphrun.h:96
// bool overline()
extern "C"
void C_ZNK9QGlyphRun8overlineEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->overline();
}
// /usr/include/qt/QtGui/qglyphrun.h:98
// void setUnderline(_Bool)
extern "C"
void C_ZN9QGlyphRun12setUnderlineEb(void *this_, bool underline) {
  ((QGlyphRun*)this_)->setUnderline(underline);
}
// /usr/include/qt/QtGui/qglyphrun.h:99
// bool underline()
extern "C"
void C_ZNK9QGlyphRun9underlineEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->underline();
}
// /usr/include/qt/QtGui/qglyphrun.h:101
// void setStrikeOut(_Bool)
extern "C"
void C_ZN9QGlyphRun12setStrikeOutEb(void *this_, bool strikeOut) {
  ((QGlyphRun*)this_)->setStrikeOut(strikeOut);
}
// /usr/include/qt/QtGui/qglyphrun.h:102
// bool strikeOut()
extern "C"
void C_ZNK9QGlyphRun9strikeOutEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->strikeOut();
}
// /usr/include/qt/QtGui/qglyphrun.h:104
// void setRightToLeft(_Bool)
extern "C"
void C_ZN9QGlyphRun14setRightToLeftEb(void *this_, bool on) {
  ((QGlyphRun*)this_)->setRightToLeft(on);
}
// /usr/include/qt/QtGui/qglyphrun.h:105
// bool isRightToLeft()
extern "C"
void C_ZNK9QGlyphRun13isRightToLeftEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->isRightToLeft();
}
// /usr/include/qt/QtGui/qglyphrun.h:107
// void setFlag(enum QGlyphRun::GlyphRunFlag, _Bool)
extern "C"
void C_ZN9QGlyphRun7setFlagENS_12GlyphRunFlagEb(void *this_, QGlyphRun::GlyphRunFlag flag, bool enabled) {
  ((QGlyphRun*)this_)->setFlag(flag, enabled);
}
// /usr/include/qt/QtGui/qglyphrun.h:108
// void setFlags(GlyphRunFlags)
extern "C"
void C_ZN9QGlyphRun8setFlagsE6QFlagsINS_12GlyphRunFlagEE(void *this_, QFlags<QGlyphRun::GlyphRunFlag> flags) {
  ((QGlyphRun*)this_)->setFlags(flags);
}
// /usr/include/qt/QtGui/qglyphrun.h:109
// GlyphRunFlags flags()
extern "C"
void C_ZNK9QGlyphRun5flagsEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->flags();
}
// /usr/include/qt/QtGui/qglyphrun.h:111
// void setBoundingRect(const class QRectF &)
extern "C"
void C_ZN9QGlyphRun15setBoundingRectERK6QRectF(void *this_, const QRectF & boundingRect) {
  ((QGlyphRun*)this_)->setBoundingRect(boundingRect);
}
// /usr/include/qt/QtGui/qglyphrun.h:112
// QRectF boundingRect()
extern "C"
void C_ZNK9QGlyphRun12boundingRectEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->boundingRect();
}
// /usr/include/qt/QtGui/qglyphrun.h:114
// bool isEmpty()
extern "C"
void C_ZNK9QGlyphRun7isEmptyEv(void *this_) {
  /*return*/ ((QGlyphRun*)this_)->isEmpty();
}
//  main block end
