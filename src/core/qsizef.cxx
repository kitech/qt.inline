//  header block begin

// /usr/include/qt/QtCore/qsize.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsize.h>
#include <QtCore>
#include "callback_inherit.h"

// QSizeF is pure virtual: false
// QSizeF has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSizeF_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSizeF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSizeF_t qt_meta_stringdata_MyQSizeF = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQSizeF"
  },
  "MyQSizeF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSizeF[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSizeF : public QSizeF {
public:
  virtual ~MyQSizeF() {}
// void QSizeF()
MyQSizeF() : QSizeF() {}
// void QSizeF(const QSize &)
MyQSizeF(const QSize & sz) : QSizeF(sz) {}
// void QSizeF(qreal, qreal)
MyQSizeF(qreal w, qreal h) : QSizeF(w, h) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:218
// [-2] void QSizeF()
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFC2Ev() {
  return  new QSizeF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:219
// [-2] void QSizeF(const QSize &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFC2ERK5QSize(QSize* sz) {
  return  new QSizeF(*sz);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:220
// [-2] void QSizeF(qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFC2Edd(qreal w, qreal h) {
  return  new QSizeF(w, h);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:222
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QSizeF6isNullEv(void *this_) {
  return (bool)((QSizeF*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:223
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QSizeF7isEmptyEv(void *this_) {
  return (bool)((QSizeF*)this_)->isEmpty();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:224
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QSizeF7isValidEv(void *this_) {
  return (bool)((QSizeF*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:226
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QSizeF5widthEv(void *this_) {
  return (qreal)((QSizeF*)this_)->width();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:227
// [8] qreal height()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QSizeF6heightEv(void *this_) {
  return (qreal)((QSizeF*)this_)->height();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:228
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QSizeF8setWidthEd(void *this_, qreal w) {
  ((QSizeF*)this_)->setWidth(w);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:229
// [-2] void setHeight(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QSizeF9setHeightEd(void *this_, qreal h) {
  ((QSizeF*)this_)->setHeight(h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:230
// [-2] void transpose()
extern "C" Q_DECL_EXPORT
void C_ZN6QSizeF9transposeEv(void *this_) {
  ((QSizeF*)this_)->transpose();
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qsize.h:231
// [16] QSizeF transposed()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSizeF10transposedEv(void *this_) {
  auto rv = ((QSizeF*)this_)->transposed();
return new QSizeF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:233
// [-2] void scale(qreal, qreal, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QSizeF5scaleEddN2Qt15AspectRatioModeE(void *this_, qreal w, qreal h, Qt::AspectRatioMode mode) {
  ((QSizeF*)this_)->scale(w, h, mode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:234
// [-2] void scale(const QSizeF &, Qt::AspectRatioMode)
extern "C" Q_DECL_EXPORT
void C_ZN6QSizeF5scaleERKS_N2Qt15AspectRatioModeE(void *this_, QSizeF* s, Qt::AspectRatioMode mode) {
  ((QSizeF*)this_)->scale(*s, mode);
}

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qsize.h:235
// [16] QSizeF scaled(qreal, qreal, Qt::AspectRatioMode)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSizeF6scaledEddN2Qt15AspectRatioModeE(void *this_, qreal w, qreal h, Qt::AspectRatioMode mode) {
  auto rv = ((QSizeF*)this_)->scaled(w, h, mode);
return new QSizeF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qsize.h:236
// [16] QSizeF scaled(const QSizeF &, Qt::AspectRatioMode)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSizeF6scaledERKS_N2Qt15AspectRatioModeE(void *this_, QSizeF* s, Qt::AspectRatioMode mode) {
  auto rv = ((QSizeF*)this_)->scaled(*s, mode);
return new QSizeF(rv);
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:238
// [16] QSizeF expandedTo(const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSizeF10expandedToERKS_(void *this_, QSizeF* arg0) {
  auto rv = ((QSizeF*)this_)->expandedTo(*arg0);
return new QSizeF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:239
// [16] QSizeF boundedTo(const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSizeF9boundedToERKS_(void *this_, QSizeF* arg0) {
  auto rv = ((QSizeF*)this_)->boundedTo(*arg0);
return new QSizeF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:241
// [8] qreal & rwidth()
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeF6rwidthEv(void *this_) {
  auto& rv = ((QSizeF*)this_)->rwidth();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:242
// [8] qreal & rheight()
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeF7rheightEv(void *this_) {
  auto& rv = ((QSizeF*)this_)->rheight();
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:244
// [16] QSizeF & operator+=(const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFpLERKS_(void *this_, QSizeF* arg0) {
  auto& rv = ((QSizeF*)this_)->operator+=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:245
// [16] QSizeF & operator-=(const QSizeF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFmIERKS_(void *this_, QSizeF* arg0) {
  auto& rv = ((QSizeF*)this_)->operator-=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:246
// [16] QSizeF & operator*=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFmLEd(void *this_, qreal c) {
  auto& rv = ((QSizeF*)this_)->operator*=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:247
// [16] QSizeF & operator/=(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QSizeFdVEd(void *this_, qreal c) {
  auto& rv = ((QSizeF*)this_)->operator/=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsize.h:257
// [8] QSize toSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QSizeF6toSizeEv(void *this_) {
  auto rv = ((QSizeF*)this_)->toSize();
return new QSize(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN6QSizeFD2Ev(void *this_) {
  delete (QSizeF*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
