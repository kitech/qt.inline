//  header block begin

// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionTabWidgetFrame is pure virtual: false
// QStyleOptionTabWidgetFrame has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStyleOptionTabWidgetFrame_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionTabWidgetFrame_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionTabWidgetFrame_t qt_meta_stringdata_MyQStyleOptionTabWidgetFrame = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQStyleOptionTabWidgetFrame"
  },
  "MyQStyleOptionTabWidgetFrame"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionTabWidgetFrame[] = {
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
class Q_DECL_EXPORT MyQStyleOptionTabWidgetFrame : public QStyleOptionTabWidgetFrame {
public:
  virtual ~MyQStyleOptionTabWidgetFrame() {}
// void QStyleOptionTabWidgetFrame()
MyQStyleOptionTabWidgetFrame() : QStyleOptionTabWidgetFrame() {}
// void QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame &)
MyQStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame & other) : QStyleOptionTabWidgetFrame(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:171
// [-2] void QStyleOptionTabWidgetFrame()
extern "C" Q_DECL_EXPORT
void* C_ZN26QStyleOptionTabWidgetFrameC2Ev() {
  return  new QStyleOptionTabWidgetFrame();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:172
// [-2] void QStyleOptionTabWidgetFrame(const QStyleOptionTabWidgetFrame &)
extern "C" Q_DECL_EXPORT
void* C_ZN26QStyleOptionTabWidgetFrameC2ERKS_(QStyleOptionTabWidgetFrame* other) {
  return  new QStyleOptionTabWidgetFrame(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN26QStyleOptionTabWidgetFrameD2Ev(void *this_) {
  delete (QStyleOptionTabWidgetFrame*)(this_);
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
