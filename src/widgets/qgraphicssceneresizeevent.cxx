//  header block begin

#ifndef QT_MINIMAL
#if QT_CONFIG(graphicsview)
// since 0x040400
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgraphicssceneevent.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsSceneResizeEvent is pure virtual: false
// QGraphicsSceneResizeEvent has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGraphicsSceneResizeEvent_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGraphicsSceneResizeEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGraphicsSceneResizeEvent_t qt_meta_stringdata_MyQGraphicsSceneResizeEvent = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQGraphicsSceneResizeEvent"
  },
  "MyQGraphicsSceneResizeEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGraphicsSceneResizeEvent[] = {
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
class Q_DECL_EXPORT MyQGraphicsSceneResizeEvent : public QGraphicsSceneResizeEvent {
public:
  virtual ~MyQGraphicsSceneResizeEvent() {}
// void QGraphicsSceneResizeEvent()
MyQGraphicsSceneResizeEvent() : QGraphicsSceneResizeEvent() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:297
// [-2] void QGraphicsSceneResizeEvent()
extern "C" Q_DECL_EXPORT
void* C_ZN25QGraphicsSceneResizeEventC2Ev() {
  return  new QGraphicsSceneResizeEvent();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:298
// [-2] void ~QGraphicsSceneResizeEvent()
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsSceneResizeEventD2Ev(void *this_) {
  delete (QGraphicsSceneResizeEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:300
// [16] QSizeF oldSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsSceneResizeEvent7oldSizeEv(void *this_) {
  auto rv = ((QGraphicsSceneResizeEvent*)this_)->oldSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:301
// [-2] void setOldSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsSceneResizeEvent10setOldSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsSceneResizeEvent*)this_)->setOldSize(*size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:303
// [16] QSizeF newSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QGraphicsSceneResizeEvent7newSizeEv(void *this_) {
  auto rv = ((QGraphicsSceneResizeEvent*)this_)->newSize();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicssceneevent.h:304
// [-2] void setNewSize(const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN25QGraphicsSceneResizeEvent10setNewSizeERK6QSizeF(void *this_, QSizeF* size) {
  ((QGraphicsSceneResizeEvent*)this_)->setNewSize(*size);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(graphicsview)
#endif // #ifndef QT_MINIMAL
//  footer block end
