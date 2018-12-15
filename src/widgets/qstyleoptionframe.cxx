//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionFrame is pure virtual: false
// QStyleOptionFrame has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionFrame_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionFrame_t qt_meta_stringdata_MyQStyleOptionFrame = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQStyleOptionFrame"
  },
  "MyQStyleOptionFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionFrame[] = {
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
class Q_DECL_EXPORT MyQStyleOptionFrame : public QStyleOptionFrame {
public:
  virtual ~MyQStyleOptionFrame() {}
// void QStyleOptionFrame()
MyQStyleOptionFrame() : QStyleOptionFrame() {}
// void QStyleOptionFrame(const QStyleOptionFrame &)
MyQStyleOptionFrame(const QStyleOptionFrame & other) : QStyleOptionFrame(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:132
// [-2] void QStyleOptionFrame()
extern "C" Q_DECL_EXPORT
void* C_ZN17QStyleOptionFrameC2Ev() {
  return  new QStyleOptionFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:133
// [-2] void QStyleOptionFrame(const QStyleOptionFrame &)
extern "C" Q_DECL_EXPORT
void* C_ZN17QStyleOptionFrameC2ERKS_(QStyleOptionFrame* other) {
  return  new QStyleOptionFrame(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN17QStyleOptionFrameD2Ev(void *this_) {
  delete (QStyleOptionFrame*)(this_);
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
