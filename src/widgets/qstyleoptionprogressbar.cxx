//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionProgressBar is pure virtual: false
// QStyleOptionProgressBar has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleOptionProgressBar_t {
  QByteArrayData data[1];
  char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionProgressBar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionProgressBar_t qt_meta_stringdata_MyQStyleOptionProgressBar = {
   {
  QT_MOC_LITERAL(0, 0, 25), // "MyQStyleOptionProgressBar"
  },
  "MyQStyleOptionProgressBar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionProgressBar[] = {
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
class Q_DECL_EXPORT MyQStyleOptionProgressBar : public QStyleOptionProgressBar {
public:
  virtual ~MyQStyleOptionProgressBar() {}
// void QStyleOptionProgressBar()
MyQStyleOptionProgressBar() : QStyleOptionProgressBar() {}
// void QStyleOptionProgressBar(const QStyleOptionProgressBar &)
MyQStyleOptionProgressBar(const QStyleOptionProgressBar & other) : QStyleOptionProgressBar(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:342
// [-2] void QStyleOptionProgressBar()
extern "C" Q_DECL_EXPORT
void* C_ZN23QStyleOptionProgressBarC2Ev() {
  return  new QStyleOptionProgressBar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:343
// [-2] void QStyleOptionProgressBar(const QStyleOptionProgressBar &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QStyleOptionProgressBarC2ERKS_(QStyleOptionProgressBar* other) {
  return  new QStyleOptionProgressBar(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN23QStyleOptionProgressBarD2Ev(void *this_) {
  delete (QStyleOptionProgressBar*)(this_);
}
//  main block end
