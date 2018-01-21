//  header block begin
// /usr/include/qt/QtCore/qsize.h
#include <qsize.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qsize.h:51
// void QSize()
extern "C"
void* C_ZN5QSizeC1Ev() {
  return new QSize();
}
// inline
// /usr/include/qt/QtCore/qsize.h:52
// void QSize(int, int)
extern "C"
void* C_ZN5QSizeC1Eii(int w, int h) {
  return new QSize(w, h);
}
// inline
// /usr/include/qt/QtCore/qsize.h:54
// bool isNull()
extern "C"
void C_ZNK5QSize6isNullEv(void *this_) {
  /*return*/ ((QSize*)this_)->isNull();
}
// inline
// /usr/include/qt/QtCore/qsize.h:55
// bool isEmpty()
extern "C"
void C_ZNK5QSize7isEmptyEv(void *this_) {
  /*return*/ ((QSize*)this_)->isEmpty();
}
// inline
// /usr/include/qt/QtCore/qsize.h:56
// bool isValid()
extern "C"
void C_ZNK5QSize7isValidEv(void *this_) {
  /*return*/ ((QSize*)this_)->isValid();
}
// inline
// /usr/include/qt/QtCore/qsize.h:58
// int width()
extern "C"
void C_ZNK5QSize5widthEv(void *this_) {
  /*return*/ ((QSize*)this_)->width();
}
// inline
// /usr/include/qt/QtCore/qsize.h:59
// int height()
extern "C"
void C_ZNK5QSize6heightEv(void *this_) {
  /*return*/ ((QSize*)this_)->height();
}
// inline
// /usr/include/qt/QtCore/qsize.h:60
// void setWidth(int)
extern "C"
void C_ZN5QSize8setWidthEi(void *this_, int w) {
  ((QSize*)this_)->setWidth(w);
}
// inline
// /usr/include/qt/QtCore/qsize.h:61
// void setHeight(int)
extern "C"
void C_ZN5QSize9setHeightEi(void *this_, int h) {
  ((QSize*)this_)->setHeight(h);
}
// /usr/include/qt/QtCore/qsize.h:62
// void transpose()
extern "C"
void C_ZN5QSize9transposeEv(void *this_) {
  ((QSize*)this_)->transpose();
}
// inline
// /usr/include/qt/QtCore/qsize.h:63
// QSize transposed()
extern "C"
void C_ZNK5QSize10transposedEv(void *this_) {
  /*return*/ ((QSize*)this_)->transposed();
}
// inline
// /usr/include/qt/QtCore/qsize.h:65
// void scale(int, int, Qt::AspectRatioMode)
extern "C"
void C_ZN5QSize5scaleEiiN2Qt15AspectRatioModeE(void *this_, int w, int h, Qt::AspectRatioMode mode) {
  ((QSize*)this_)->scale(w, h, mode);
}
// inline
// /usr/include/qt/QtCore/qsize.h:66
// void scale(const class QSize &, Qt::AspectRatioMode)
extern "C"
void C_ZN5QSize5scaleERKS_N2Qt15AspectRatioModeE(void *this_, const QSize & s, Qt::AspectRatioMode mode) {
  ((QSize*)this_)->scale(s, mode);
}
// /usr/include/qt/QtCore/qsize.h:67
// QSize scaled(int, int, Qt::AspectRatioMode)
extern "C"
void C_ZNK5QSize6scaledEiiN2Qt15AspectRatioModeE(void *this_, int w, int h, Qt::AspectRatioMode mode) {
  /*return*/ ((QSize*)this_)->scaled(w, h, mode);
}
// /usr/include/qt/QtCore/qsize.h:68
// QSize scaled(const class QSize &, Qt::AspectRatioMode)
extern "C"
void C_ZNK5QSize6scaledERKS_N2Qt15AspectRatioModeE(void *this_, const QSize & s, Qt::AspectRatioMode mode) {
  /*return*/ ((QSize*)this_)->scaled(s, mode);
}
// inline
// /usr/include/qt/QtCore/qsize.h:70
// QSize expandedTo(const class QSize &)
extern "C"
void C_ZNK5QSize10expandedToERKS_(void *this_, const QSize & arg0) {
  /*return*/ ((QSize*)this_)->expandedTo(arg0);
}
// inline
// /usr/include/qt/QtCore/qsize.h:71
// QSize boundedTo(const class QSize &)
extern "C"
void C_ZNK5QSize9boundedToERKS_(void *this_, const QSize & arg0) {
  /*return*/ ((QSize*)this_)->boundedTo(arg0);
}
// inline
// /usr/include/qt/QtCore/qsize.h:73
// int & rwidth()
extern "C"
void C_ZN5QSize6rwidthEv(void *this_) {
  /*return*/ ((QSize*)this_)->rwidth();
}
// inline
// /usr/include/qt/QtCore/qsize.h:74
// int & rheight()
extern "C"
void C_ZN5QSize7rheightEv(void *this_) {
  /*return*/ ((QSize*)this_)->rheight();
}
//  main block end
