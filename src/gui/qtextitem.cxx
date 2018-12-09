//  header block begin

// /usr/include/qt/QtGui/qpaintengine.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qpaintengine.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextItem is pure virtual: false
// QTextItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextItem_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextItem_t qt_meta_stringdata_MyQTextItem = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQTextItem"
  },
  "MyQTextItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextItem[] = {
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
class Q_DECL_EXPORT MyQTextItem : public QTextItem {
public:
  virtual ~MyQTextItem() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:75
// [8] qreal descent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTextItem7descentEv(void *this_) {
  return (qreal)((QTextItem*)this_)->descent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:76
// [8] qreal ascent()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTextItem6ascentEv(void *this_) {
  return (qreal)((QTextItem*)this_)->ascent();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:77
// [8] qreal width()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QTextItem5widthEv(void *this_) {
  return (qreal)((QTextItem*)this_)->width();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:79
// [4] QTextItem::RenderFlags renderFlags()
extern "C" Q_DECL_EXPORT
QTextItem::RenderFlags* C_ZNK9QTextItem11renderFlagsEv(void *this_) {
  auto rv = ((QTextItem*)this_)->renderFlags();
return new QTextItem::RenderFlags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:80
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextItem4textEv(void *this_) {
  auto rv = ((QTextItem*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:81
// [16] QFont font()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QTextItem4fontEv(void *this_) {
  auto rv = ((QTextItem*)this_)->font();
return new QFont(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN9QTextItemD2Ev(void *this_) {
  delete (QTextItem*)(this_);
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
