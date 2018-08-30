//  header block begin
// since 0x040100
// /usr/include/qt/QtGui/qpainterpath.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpainterpath.h>
#include <QtGui>
#include "callback_inherit.h"

// QPainterPathStroker is pure virtual: false
// QPainterPathStroker has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQPainterPathStroker_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQPainterPathStroker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQPainterPathStroker_t qt_meta_stringdata_MyQPainterPathStroker = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQPainterPathStroker"
  },
  "MyQPainterPathStroker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQPainterPathStroker[] = {
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
class Q_DECL_EXPORT MyQPainterPathStroker : public QPainterPathStroker {
public:
  virtual ~MyQPainterPathStroker() {}
// void QPainterPathStroker()
MyQPainterPathStroker() : QPainterPathStroker() {}
// void QPainterPathStroker(const QPen &)
MyQPainterPathStroker(const QPen & pen) : QPainterPathStroker(pen) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:246
// [-2] void QPainterPathStroker()
extern "C" Q_DECL_EXPORT
void* C_ZN19QPainterPathStrokerC2Ev() {
  return  new QPainterPathStroker();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qpainterpath.h:247
// [-2] void QPainterPathStroker(const QPen &)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN19QPainterPathStrokerC2ERK4QPen(QPen* pen) {
  return  new QPainterPathStroker(*pen);
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:248
// [-2] void ~QPainterPathStroker()
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStrokerD2Ev(void *this_) {
  delete (QPainterPathStroker*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:250
// [-2] void setWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker8setWidthEd(void *this_, qreal width) {
  ((QPainterPathStroker*)this_)->setWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:251
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QPainterPathStroker5widthEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:253
// [-2] void setCapStyle(Qt::PenCapStyle)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker11setCapStyleEN2Qt11PenCapStyleE(void *this_, Qt::PenCapStyle style) {
  ((QPainterPathStroker*)this_)->setCapStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:254
// [4] Qt::PenCapStyle capStyle()
extern "C" Q_DECL_EXPORT
Qt::PenCapStyle C_ZNK19QPainterPathStroker8capStyleEv(void *this_) {
  return (Qt::PenCapStyle)((QPainterPathStroker*)this_)->capStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:256
// [-2] void setJoinStyle(Qt::PenJoinStyle)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker12setJoinStyleEN2Qt12PenJoinStyleE(void *this_, Qt::PenJoinStyle style) {
  ((QPainterPathStroker*)this_)->setJoinStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:257
// [4] Qt::PenJoinStyle joinStyle()
extern "C" Q_DECL_EXPORT
Qt::PenJoinStyle C_ZNK19QPainterPathStroker9joinStyleEv(void *this_) {
  return (Qt::PenJoinStyle)((QPainterPathStroker*)this_)->joinStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:259
// [-2] void setMiterLimit(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker13setMiterLimitEd(void *this_, qreal length) {
  ((QPainterPathStroker*)this_)->setMiterLimit(length);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:260
// [8] qreal miterLimit()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QPainterPathStroker10miterLimitEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->miterLimit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:262
// [-2] void setCurveThreshold(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker17setCurveThresholdEd(void *this_, qreal threshold) {
  ((QPainterPathStroker*)this_)->setCurveThreshold(threshold);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:263
// [8] qreal curveThreshold()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QPainterPathStroker14curveThresholdEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->curveThreshold();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:265
// [-2] void setDashPattern(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker14setDashPatternEN2Qt8PenStyleE(void *this_, Qt::PenStyle arg0) {
  ((QPainterPathStroker*)this_)->setDashPattern(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:266
// [-2] void setDashPattern(const QVector<qreal> &)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker14setDashPatternERK7QVectorIdE(void *this_, QVector<double>* dashPattern) {
  ((QPainterPathStroker*)this_)->setDashPattern(*dashPattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:267
// [-2] QVector<qreal> dashPattern()
extern "C" Q_DECL_EXPORT
void C_ZNK19QPainterPathStroker11dashPatternEv(void *this_) {
  auto rv = ((QPainterPathStroker*)this_)->dashPattern();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:269
// [-2] void setDashOffset(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN19QPainterPathStroker13setDashOffsetEd(void *this_, qreal offset) {
  ((QPainterPathStroker*)this_)->setDashOffset(offset);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:270
// [8] qreal dashOffset()
extern "C" Q_DECL_EXPORT
qreal C_ZNK19QPainterPathStroker10dashOffsetEv(void *this_) {
  return (qreal)((QPainterPathStroker*)this_)->dashOffset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:272
// [8] QPainterPath createStroke(const QPainterPath &)
extern "C" Q_DECL_EXPORT
void* C_ZNK19QPainterPathStroker12createStrokeERK12QPainterPath(void *this_, QPainterPath* path) {
  auto rv = ((QPainterPathStroker*)this_)->createStroke(*path);
return new QPainterPath(rv);
}

//  main block end
