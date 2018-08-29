//  header block begin
// /usr/include/qt/QtCore/qline.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qline.h>
#include <QtCore>
#include "callback_inherit.h"

// QLineF is pure virtual: false
// QLineF has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQLineF_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLineF_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLineF_t qt_meta_stringdata_MyQLineF = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQLineF"
  },
  "MyQLineF"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLineF[] = {
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
class Q_DECL_EXPORT MyQLineF : public QLineF {
public:
  virtual ~MyQLineF() {}
// void QLineF()
MyQLineF() : QLineF() {}
// void QLineF(const QPointF &, const QPointF &)
MyQLineF(const QPointF & pt1, const QPointF & pt2) : QLineF(pt1, pt2) {}
// void QLineF(qreal, qreal, qreal, qreal)
MyQLineF(qreal x1, qreal y1, qreal x2, qreal y2) : QLineF(x1, y1, x2, y2) {}
// void QLineF(const QLine &)
MyQLineF(const QLine & line) : QLineF(line) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:219
// [-2] void QLineF()
extern "C" Q_DECL_EXPORT
void* C_ZN6QLineFC2Ev() {
  return  new QLineF();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:220
// [-2] void QLineF(const QPointF &, const QPointF &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLineFC2ERK7QPointFS2_(QPointF* pt1, QPointF* pt2) {
  return  new QLineF(*pt1, *pt2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:221
// [-2] void QLineF(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLineFC2Edddd(qreal x1, qreal y1, qreal x2, qreal y2) {
  return  new QLineF(x1, y1, x2, y2);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:222
// [-2] void QLineF(const QLine &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QLineFC2ERK5QLine(QLine* line) {
  return  new QLineF(*line);
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:224
// [32] QLineF fromPolar(qreal, qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN6QLineF9fromPolarEdd(qreal length, qreal angle) {
  auto rv = QLineF::fromPolar(length, angle);
return new QLineF(rv);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:226
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLineF6isNullEv(void *this_) {
  return (bool)((QLineF*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:228
// [16] QPointF p1()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF2p1Ev(void *this_) {
  auto rv = ((QLineF*)this_)->p1();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:229
// [16] QPointF p2()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF2p2Ev(void *this_) {
  auto rv = ((QLineF*)this_)->p2();
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:231
// [8] qreal x1()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF2x1Ev(void *this_) {
  return (qreal)((QLineF*)this_)->x1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:232
// [8] qreal y1()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF2y1Ev(void *this_) {
  return (qreal)((QLineF*)this_)->y1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:234
// [8] qreal x2()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF2x2Ev(void *this_) {
  return (qreal)((QLineF*)this_)->x2();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:235
// [8] qreal y2()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF2y2Ev(void *this_) {
  return (qreal)((QLineF*)this_)->y2();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:237
// [8] qreal dx()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF2dxEv(void *this_) {
  return (qreal)((QLineF*)this_)->dx();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:238
// [8] qreal dy()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF2dyEv(void *this_) {
  return (qreal)((QLineF*)this_)->dy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:240
// [8] qreal length()
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF6lengthEv(void *this_) {
  return (qreal)((QLineF*)this_)->length();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:241
// [-2] void setLength(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF9setLengthEd(void *this_, qreal len_) {
  ((QLineF*)this_)->setLength(len_);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:243
// [8] qreal angle()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF5angleEv(void *this_) {
  return (qreal)((QLineF*)this_)->angle();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:244
// [-2] void setAngle(qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF8setAngleEd(void *this_, qreal angle) {
  ((QLineF*)this_)->setAngle(angle);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:246
// [8] qreal angleTo(const QLineF &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF7angleToERKS_(void *this_, QLineF* l) {
  return (qreal)((QLineF*)this_)->angleTo(*l);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:248
// [32] QLineF unitVector()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF10unitVectorEv(void *this_) {
  auto rv = ((QLineF*)this_)->unitVector();
return new QLineF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:249
// [32] QLineF normalVector()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF12normalVectorEv(void *this_) {
  auto rv = ((QLineF*)this_)->normalVector();
return new QLineF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:252
// [4] QLineF::IntersectType intersect(const QLineF &, QPointF *)
extern "C" Q_DECL_EXPORT
QLineF::IntersectType C_ZNK6QLineF9intersectERKS_P7QPointF(void *this_, QLineF* l, QPointF * intersectionPoint) {
  return (QLineF::IntersectType)((QLineF*)this_)->intersect(*l, intersectionPoint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:254
// [8] qreal angle(const QLineF &)
extern "C" Q_DECL_EXPORT
qreal C_ZNK6QLineF5angleERKS_(void *this_, QLineF* l) {
  return (qreal)((QLineF*)this_)->angle(*l);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:256
// [16] QPointF pointAt(qreal)
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF7pointAtEd(void *this_, qreal t) {
  auto rv = ((QLineF*)this_)->pointAt(t);
return new QPointF(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:257
// [-2] void translate(const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF9translateERK7QPointF(void *this_, QPointF* p) {
  ((QLineF*)this_)->translate(*p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:258
// [-2] void translate(qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF9translateEdd(void *this_, qreal dx, qreal dy) {
  ((QLineF*)this_)->translate(dx, dy);
}

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:260
// [32] QLineF translated(const QPointF &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF10translatedERK7QPointF(void *this_, QPointF* p) {
  auto rv = ((QLineF*)this_)->translated(*p);
return new QLineF(rv);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:261
// [32] QLineF translated(qreal, qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF10translatedEdd(void *this_, qreal dx, qreal dy) {
  auto rv = ((QLineF*)this_)->translated(dx, dy);
return new QLineF(rv);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qline.h:263
// [16] QPointF center()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF6centerEv(void *this_) {
  auto rv = ((QLineF*)this_)->center();
return new QPointF(rv);
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:265
// [-2] void setP1(const QPointF &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF5setP1ERK7QPointF(void *this_, QPointF* p1) {
  ((QLineF*)this_)->setP1(*p1);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:266
// [-2] void setP2(const QPointF &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF5setP2ERK7QPointF(void *this_, QPointF* p2) {
  ((QLineF*)this_)->setP2(*p2);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:267
// [-2] void setPoints(const QPointF &, const QPointF &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF9setPointsERK7QPointFS2_(void *this_, QPointF* p1, QPointF* p2) {
  ((QLineF*)this_)->setPoints(*p1, *p2);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qline.h:268
// [-2] void setLine(qreal, qreal, qreal, qreal)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN6QLineF7setLineEdddd(void *this_, qreal x1, qreal y1, qreal x2, qreal y2) {
  ((QLineF*)this_)->setLine(x1, y1, x2, y2);
}
#endif // QT_VERSION >= 0x040400

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:270
// [1] bool operator==(const QLineF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLineFeqERKS_(void *this_, QLineF* d) {
  return (bool)((QLineF*)this_)->operator==(*d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:271
// [1] bool operator!=(const QLineF &)
extern "C" Q_DECL_EXPORT
bool C_ZNK6QLineFneERKS_(void *this_, QLineF* d) {
  return (bool)((QLineF*)this_)->operator!=(*d);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qline.h:273
// [16] QLine toLine()
extern "C" Q_DECL_EXPORT
void* C_ZNK6QLineF6toLineEv(void *this_) {
  auto rv = ((QLineF*)this_)->toLine();
return new QLine(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN6QLineFD2Ev(void *this_) {
  delete (QLineF*)(this_);
}
//  main block end
