//  header block begin
// /usr/include/qt/QtQuick/qsgsimplerectnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgsimplerectnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGSimpleRectNode is pure virtual: false
// QSGSimpleRectNode has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGSimpleRectNode_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGSimpleRectNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGSimpleRectNode_t qt_meta_stringdata_MyQSGSimpleRectNode = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSGSimpleRectNode"
  },
  "MyQSGSimpleRectNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGSimpleRectNode[] = {
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
class Q_DECL_EXPORT MyQSGSimpleRectNode : public QSGSimpleRectNode {
public:
  virtual ~MyQSGSimpleRectNode() {}
// void QSGSimpleRectNode(const QRectF &, const QColor &)
MyQSGSimpleRectNode(const QRectF & rect, const QColor & color) : QSGSimpleRectNode(rect, color) {}
// void QSGSimpleRectNode()
MyQSGSimpleRectNode() : QSGSimpleRectNode() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:51
// [-2] void QSGSimpleRectNode(const QRectF &, const QColor &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGSimpleRectNodeC2ERK6QRectFRK6QColor(QRectF* rect, QColor* color) {
  return  new QSGSimpleRectNode(*rect, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:52
// [-2] void QSGSimpleRectNode()
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGSimpleRectNodeC2Ev() {
  return  new QSGSimpleRectNode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:54
// [-2] void setRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNode7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGSimpleRectNode*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:55
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNode7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGSimpleRectNode*)this_)->setRect(x, y, w, h);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:56
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGSimpleRectNode4rectEv(void *this_) {
  auto rv = ((QSGSimpleRectNode*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:58
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNode8setColorERK6QColor(void *this_, QColor* color) {
  ((QSGSimpleRectNode*)this_)->setColor(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimplerectnode.h:59
// [16] QColor color()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGSimpleRectNode5colorEv(void *this_) {
  auto rv = ((QSGSimpleRectNode*)this_)->color();
return new QColor(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QSGSimpleRectNodeD2Ev(void *this_) {
  delete (QSGSimpleRectNode*)(this_);
}
//  main block end
