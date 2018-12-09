//  header block begin

#ifndef QT_MINIMAL
// since 0x040200
// /usr/include/qt/QtWidgets/qgraphicsitem.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicsitem.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsItemGroup is pure virtual: false
// QGraphicsItemGroup has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsItemGroup_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsItemGroup_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsItemGroup_t qt_meta_stringdata_MyQGraphicsItemGroup = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQGraphicsItemGroup"
  },
  "MyQGraphicsItemGroup"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsItemGroup[] = {
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
class Q_DECL_EXPORT MyQGraphicsItemGroup : public QGraphicsItemGroup {
public:
  virtual ~MyQGraphicsItemGroup() {}
// void QGraphicsItemGroup(QGraphicsItem *)
MyQGraphicsItemGroup(QGraphicsItem * parent) : QGraphicsItemGroup(parent) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1004
// [-2] void QGraphicsItemGroup(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGraphicsItemGroupC2EP13QGraphicsItem(QGraphicsItem * parent) {
  return  new QGraphicsItemGroup(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1005
// [-2] void ~QGraphicsItemGroup()
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsItemGroupD2Ev(void *this_) {
  delete (QGraphicsItemGroup*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1007
// [-2] void addToGroup(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsItemGroup10addToGroupEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemGroup*)this_)->addToGroup(item);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1008
// [-2] void removeFromGroup(QGraphicsItem *)
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsItemGroup15removeFromGroupEP13QGraphicsItem(void *this_, QGraphicsItem * item) {
  ((QGraphicsItemGroup*)this_)->removeFromGroup(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1010
// [32] QRectF boundingRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGraphicsItemGroup12boundingRectEv(void *this_) {
  auto rv = ((QGraphicsItemGroup*)this_)->boundingRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1011
// [-2] void paint(QPainter *, const QStyleOptionGraphicsItem *, QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN18QGraphicsItemGroup5paintEP8QPainterPK24QStyleOptionGraphicsItemP7QWidget(void *this_, QPainter * painter, const QStyleOptionGraphicsItem * option, QWidget * widget) {
  ((QGraphicsItemGroup*)this_)->paint(painter, option, widget);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1013
// [1] bool isObscuredBy(const QGraphicsItem *)
extern "C" Q_DECL_EXPORT
bool C_ZNK18QGraphicsItemGroup12isObscuredByEPK13QGraphicsItem(void *this_, const QGraphicsItem * item) {
  return (bool)((QGraphicsItemGroup*)this_)->isObscuredBy(item);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1014
// [8] QPainterPath opaqueArea()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGraphicsItemGroup10opaqueAreaEv(void *this_) {
  auto rv = ((QGraphicsItemGroup*)this_)->opaqueArea();
return new QPainterPath(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:1017
// [4] int type()
extern "C" Q_DECL_EXPORT
int C_ZNK18QGraphicsItemGroup4typeEv(void *this_) {
  return (int)((QGraphicsItemGroup*)this_)->type();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #ifndef QT_MINIMAL
//  footer block end
