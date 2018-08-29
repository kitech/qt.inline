//  header block begin
// /usr/include/qt/QtCore/qcoreevent.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qcoreevent.h>
#include <QtCore>
#include "callback_inherit.h"

// QEvent is pure virtual: false
// QEvent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQEvent_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEvent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEvent_t qt_meta_stringdata_MyQEvent = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQEvent"
  },
  "MyQEvent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEvent[] = {
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
class Q_DECL_EXPORT MyQEvent : public QEvent {
public:
  virtual ~MyQEvent() {}
// void QEvent(QEvent::Type)
MyQEvent(QEvent::Type type_) : QEvent(type_) {}
// void QEvent(const QEvent &)
MyQEvent(const QEvent & other) : QEvent(other) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:297
// [-2] void QEvent(QEvent::Type)
extern "C" Q_DECL_EXPORT
void* C_ZN6QEventC2ENS_4TypeE(QEvent::Type type_) {
  return  new QEvent(type_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:298
// [-2] void QEvent(const QEvent &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QEventC2ERKS_(QEvent* other) {
  return  new QEvent(*other);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:299
// [-2] void ~QEvent()
extern "C" Q_DECL_EXPORT
void C_ZN6QEventD2Ev(void *this_) {
  delete (QEvent*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:300
// [24] QEvent & operator=(const QEvent &)
extern "C" Q_DECL_EXPORT
void* C_ZN6QEventaSERKS_(void *this_, QEvent* other) {
  auto& rv = ((QEvent*)this_)->operator=(*other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:301
// [4] QEvent::Type type()
extern "C" Q_DECL_EXPORT
QEvent::Type C_ZNK6QEvent4typeEv(void *this_) {
  return (QEvent::Type)((QEvent*)this_)->type();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:302
// [1] bool spontaneous()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QEvent11spontaneousEv(void *this_) {
  return (bool)((QEvent*)this_)->spontaneous();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:304
// [-2] void setAccepted(bool)
extern "C" Q_DECL_EXPORT
void C_ZN6QEvent11setAcceptedEb(void *this_, bool accepted) {
  ((QEvent*)this_)->setAccepted(accepted);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:305
// [1] bool isAccepted()
extern "C" Q_DECL_EXPORT
bool C_ZNK6QEvent10isAcceptedEv(void *this_) {
  return (bool)((QEvent*)this_)->isAccepted();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:307
// [-2] void accept()
extern "C" Q_DECL_EXPORT
void C_ZN6QEvent6acceptEv(void *this_) {
  ((QEvent*)this_)->accept();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcoreevent.h:308
// [-2] void ignore()
extern "C" Q_DECL_EXPORT
void C_ZN6QEvent6ignoreEv(void *this_) {
  ((QEvent*)this_)->ignore();
}

// Public static Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qcoreevent.h:310
// [4] int registerEventType(int)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
int C_ZN6QEvent17registerEventTypeEi(int hint) {
  return (int)QEvent::registerEventType(hint);
}
#endif // QT_VERSION >= 0x040400

//  main block end
