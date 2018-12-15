//  header block begin

// since 0x040200
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionGraphicsItem is pure virtual: false
// QStyleOptionGraphicsItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionGraphicsItem_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionGraphicsItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionGraphicsItem_t qt_meta_stringdata_MyQStyleOptionGraphicsItem = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQStyleOptionGraphicsItem"
  },
  "MyQStyleOptionGraphicsItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionGraphicsItem[] = {
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
class Q_DECL_EXPORT MyQStyleOptionGraphicsItem : public QStyleOptionGraphicsItem {
public:
  virtual ~MyQStyleOptionGraphicsItem() {}
// void QStyleOptionGraphicsItem()
MyQStyleOptionGraphicsItem() : QStyleOptionGraphicsItem() {}
// void QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &)
MyQStyleOptionGraphicsItem(const QStyleOptionGraphicsItem & other) : QStyleOptionGraphicsItem(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:658
// [-2] void QStyleOptionGraphicsItem()
extern "C" Q_DECL_EXPORT
void* C_ZN24QStyleOptionGraphicsItemC2Ev() {
  return  new QStyleOptionGraphicsItem();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:659
// [-2] void QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem &)
extern "C" Q_DECL_EXPORT
void* C_ZN24QStyleOptionGraphicsItemC2ERKS_(QStyleOptionGraphicsItem* other) {
  return  new QStyleOptionGraphicsItem(*other);
}

// Public static Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtWidgets/qstyleoption.h:660
// [8] qreal levelOfDetailFromTransform(const QTransform &)
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
qreal C_ZN24QStyleOptionGraphicsItem26levelOfDetailFromTransformERK10QTransform(QTransform* worldTransform) {
  return (qreal)QStyleOptionGraphicsItem::levelOfDetailFromTransform(*worldTransform);
}
#endif // QT_VERSION >= 0x040600


extern "C" Q_DECL_EXPORT
void C_ZN24QStyleOptionGraphicsItemD2Ev(void *this_) {
  delete (QStyleOptionGraphicsItem*)(this_);
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
