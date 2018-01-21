//  header block begin
// /usr/include/qt/QtCore/qsize.h
#include <qsize.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qsize.h:210
// void QSizeF()
extern "C"
void* C_ZN6QSizeFC1Ev() {
  return new QSizeF();
}
// inline
// /usr/include/qt/QtCore/qsize.h:211
// void QSizeF(const class QSize &)
extern "C"
void* C_ZN6QSizeFC1ERK5QSize(const QSize & sz) {
  return new QSizeF(sz);
}
// inline
// /usr/include/qt/QtCore/qsize.h:212
// void QSizeF(qreal, qreal)
extern "C"
void* C_ZN6QSizeFC1Edd(qreal w, qreal h) {
  return new QSizeF(w, h);
}
// inline
// /usr/include/qt/QtCore/qsize.h:214
// bool isNull()
extern "C"
void C_ZNK6QSizeF6isNullEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qsize.h:215
// bool isEmpty()
extern "C"
void C_ZNK6QSizeF7isEmptyEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->isEmpty();
}
// inline
// /usr/include/qt/QtCore/qsize.h:216
// bool isValid()
extern "C"
void C_ZNK6QSizeF7isValidEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->isValid();
}
// inline
// /usr/include/qt/QtCore/qsize.h:218
// qreal width()
extern "C"
void C_ZNK6QSizeF5widthEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->width();
}
// inline
// /usr/include/qt/QtCore/qsize.h:219
// qreal height()
extern "C"
void C_ZNK6QSizeF6heightEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->height();
}
// inline
// /usr/include/qt/QtCore/qsize.h:220
// void setWidth(qreal)
extern "C"
void C_ZN6QSizeF8setWidthEd(void *this_, qreal w) {
  ((QSizeF*)this_)->setWidth(w);
}
// inline
// /usr/include/qt/QtCore/qsize.h:221
// void setHeight(qreal)
extern "C"
void C_ZN6QSizeF9setHeightEd(void *this_, qreal h) {
  ((QSizeF*)this_)->setHeight(h);
}
// /usr/include/qt/QtCore/qsize.h:222
// void transpose()
extern "C"
void C_ZN6QSizeF9transposeEv(void *this_) {
  ((QSizeF*)this_)->transpose();
}
// inline
// /usr/include/qt/QtCore/qsize.h:223
// QSizeF transposed()
extern "C"
void C_ZNK6QSizeF10transposedEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->transposed();
}
// inline
// /usr/include/qt/QtCore/qsize.h:225
// void scale(qreal, qreal, Qt::AspectRatioMode)
extern "C"
void C_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE(void *this_, qreal w, qreal h, Qt::AspectRatioMode mode) {
  ((QSizeF*)this_)->scale(w, h, mode);
}
// inline
// /usr/include/qt/QtCore/qsize.h:226
// void scale(const class QSizeF &, Qt::AspectRatioMode)
extern "C"
void C_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE(void *this_, const QSizeF & s, Qt::AspectRatioMode mode) {
  ((QSizeF*)this_)->scale(s, mode);
}
// /usr/include/qt/QtCore/qsize.h:227
// QSizeF scaled(qreal, qreal, Qt::AspectRatioMode)
extern "C"
void C_ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE(void *this_, qreal w, qreal h, Qt::AspectRatioMode mode) {
  /*return*/ ((QSizeF*)this_)->scaled(w, h, mode);
}
// /usr/include/qt/QtCore/qsize.h:228
// QSizeF scaled(const class QSizeF &, Qt::AspectRatioMode)
extern "C"
void C_ZNK6QSizeF6scaledERKS_N2Qt15AspectRatioModeE(void *this_, const QSizeF & s, Qt::AspectRatioMode mode) {
  /*return*/ ((QSizeF*)this_)->scaled(s, mode);
}
// inline
// /usr/include/qt/QtCore/qsize.h:230
// QSizeF expandedTo(const class QSizeF &)
extern "C"
void C_ZNK6QSizeF10expandedToERKS_(void *this_, const QSizeF & arg0) {
  /*return*/ ((QSizeF*)this_)->expandedTo(arg0);
}
// inline
// /usr/include/qt/QtCore/qsize.h:231
// QSizeF boundedTo(const class QSizeF &)
extern "C"
void C_ZNK6QSizeF9boundedToERKS_(void *this_, const QSizeF & arg0) {
  /*return*/ ((QSizeF*)this_)->boundedTo(arg0);
}
// inline
// /usr/include/qt/QtCore/qsize.h:233
// qreal & rwidth()
extern "C"
void C_ZN6QSizeF6rwidthEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->rwidth();
}
// inline
// /usr/include/qt/QtCore/qsize.h:234
// qreal & rheight()
extern "C"
void C_ZN6QSizeF7rheightEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->rheight();
}
// inline
// /usr/include/qt/QtCore/qsize.h:249
// QSize toSize()
extern "C"
void C_ZNK6QSizeF6toSizeEv(void *this_) {
  /*return*/ ((QSizeF*)this_)->toSize();
}
//  main block end
