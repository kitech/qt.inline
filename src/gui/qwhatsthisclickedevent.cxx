//  header block begin
// /usr/include/qt/QtGui/qevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qevent.h>
#include <QtGui>
#include "callback_inherit.h"

// QWhatsThisClickedEvent is pure virtual: false
// QWhatsThisClickedEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWhatsThisClickedEvent_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWhatsThisClickedEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWhatsThisClickedEvent_t qt_meta_stringdata_MyQWhatsThisClickedEvent = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQWhatsThisClickedEvent"
  },
  "MyQWhatsThisClickedEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWhatsThisClickedEvent[] = {
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
class Q_DECL_EXPORT MyQWhatsThisClickedEvent : public QWhatsThisClickedEvent {
public:
  virtual ~MyQWhatsThisClickedEvent() {}
// void QWhatsThisClickedEvent(const QString &)
MyQWhatsThisClickedEvent(const QString & href) : QWhatsThisClickedEvent(href) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:713
// [-2] void QWhatsThisClickedEvent(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN22QWhatsThisClickedEventC2ERK7QString(QString* href) {
  return  new QWhatsThisClickedEvent(*href);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:714
// [-2] void ~QWhatsThisClickedEvent()
extern "C" Q_DECL_EXPORT
void C_ZN22QWhatsThisClickedEventD2Ev(void *this_) {
  delete (QWhatsThisClickedEvent*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:716
// [8] QString href()
extern "C" Q_DECL_EXPORT
void* C_ZNK22QWhatsThisClickedEvent4hrefEv(void *this_) {
  auto rv = ((QWhatsThisClickedEvent*)this_)->href();
return new QString(rv);
}

//  main block end
