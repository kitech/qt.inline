//  header block begin
// /usr/include/qt/QtCore/qsize.h
#include <qsize.h>
#include <QtCore>

// QSizeF is pure virtual: false
// QSizeF has virtual projected: false
//  header block end

//  main block begin

class MyQSizeF : public QSizeF {
public:
  virtual ~MyQSizeF() {}
// void QSizeF()
MyQSizeF() : QSizeF() {}
// void QSizeF(const class QSize &)
MyQSizeF(const QSize & sz) : QSizeF(sz) {}
// void QSizeF(qreal, qreal)
MyQSizeF(qreal w, qreal h) : QSizeF(w, h) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:218
// [-2] void QSizeF()
extern "C"
void* C_ZN6QSizeFC2Ev() {
  return  new QSizeF();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:219
// [-2] void QSizeF(const class QSize &)
extern "C"
void* C_ZN6QSizeFC2ERK5QSize(const QSize & sz) {
  return  new QSizeF(sz);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:220
// [-2] void QSizeF(qreal, qreal)
extern "C"
void* C_ZN6QSizeFC2Edd(qreal w, qreal h) {
  return  new QSizeF(w, h);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:222
// [1] bool isNull()
extern "C"
bool C_ZNK6QSizeF6isNullEv(void *this_) {
  return (bool)((QSizeF*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:223
// [1] bool isEmpty()
extern "C"
bool C_ZNK6QSizeF7isEmptyEv(void *this_) {
  return (bool)((QSizeF*)this_)->isEmpty();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:224
// [1] bool isValid()
extern "C"
bool C_ZNK6QSizeF7isValidEv(void *this_) {
  return (bool)((QSizeF*)this_)->isValid();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:226
// [8] qreal width()
extern "C"
qreal C_ZNK6QSizeF5widthEv(void *this_) {
  return (qreal)((QSizeF*)this_)->width();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:227
// [8] qreal height()
extern "C"
qreal C_ZNK6QSizeF6heightEv(void *this_) {
  return (qreal)((QSizeF*)this_)->height();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:228
// [-2] void setWidth(qreal)
extern "C"
void C_ZN6QSizeF8setWidthEd(void *this_, qreal w) {
  ((QSizeF*)this_)->setWidth(w);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:229
// [-2] void setHeight(qreal)
extern "C"
void C_ZN6QSizeF9setHeightEd(void *this_, qreal h) {
  ((QSizeF*)this_)->setHeight(h);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:230
// [-2] void transpose()
extern "C"
void C_ZN6QSizeF9transposeEv(void *this_) {
  ((QSizeF*)this_)->transpose();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:231
// [16] QSizeF transposed()
extern "C"
void* C_ZNK6QSizeF10transposedEv(void *this_) {
  auto rv = ((QSizeF*)this_)->transposed();
return new QSizeF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:233
// [-2] void scale(qreal, qreal, Qt::AspectRatioMode)
extern "C"
void C_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE(void *this_, qreal w, qreal h, Qt::AspectRatioMode mode) {
  ((QSizeF*)this_)->scale(w, h, mode);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:234
// [-2] void scale(const class QSizeF &, Qt::AspectRatioMode)
extern "C"
void C_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE(void *this_, const QSizeF & s, Qt::AspectRatioMode mode) {
  ((QSizeF*)this_)->scale(s, mode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:235
// [16] QSizeF scaled(qreal, qreal, Qt::AspectRatioMode)
extern "C"
void* C_ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE(void *this_, qreal w, qreal h, Qt::AspectRatioMode mode) {
  auto rv = ((QSizeF*)this_)->scaled(w, h, mode);
return new QSizeF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:236
// [16] QSizeF scaled(const class QSizeF &, Qt::AspectRatioMode)
extern "C"
void* C_ZNK6QSizeF6scaledERKS_N2Qt15AspectRatioModeE(void *this_, const QSizeF & s, Qt::AspectRatioMode mode) {
  auto rv = ((QSizeF*)this_)->scaled(s, mode);
return new QSizeF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:238
// [16] QSizeF expandedTo(const class QSizeF &)
extern "C"
void* C_ZNK6QSizeF10expandedToERKS_(void *this_, const QSizeF & arg0) {
  auto rv = ((QSizeF*)this_)->expandedTo(arg0);
return new QSizeF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:239
// [16] QSizeF boundedTo(const class QSizeF &)
extern "C"
void* C_ZNK6QSizeF9boundedToERKS_(void *this_, const QSizeF & arg0) {
  auto rv = ((QSizeF*)this_)->boundedTo(arg0);
return new QSizeF(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:241
// [8] qreal & rwidth()
extern "C"
void* C_ZN6QSizeF6rwidthEv(void *this_) {
  auto& rv = ((QSizeF*)this_)->rwidth();
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:242
// [8] qreal & rheight()
extern "C"
void* C_ZN6QSizeF7rheightEv(void *this_) {
  auto& rv = ((QSizeF*)this_)->rheight();
return &rv;
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:257
// [8] QSize toSize()
extern "C"
void* C_ZNK6QSizeF6toSizeEv(void *this_) {
  auto rv = ((QSizeF*)this_)->toSize();
return new QSize(rv);
}
//  main block end
