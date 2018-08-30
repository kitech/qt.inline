//  header block begin
// since 0x050300
// /usr/include/qt/QtCore/qobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QSignalBlocker is pure virtual: false
// QSignalBlocker has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSignalBlocker_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSignalBlocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSignalBlocker_t qt_meta_stringdata_MyQSignalBlocker = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQSignalBlocker"
  },
  "MyQSignalBlocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSignalBlocker[] = {
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
class Q_DECL_EXPORT MyQSignalBlocker : public QSignalBlocker {
public:
  virtual ~MyQSignalBlocker() {}
// void QSignalBlocker(QObject *)
MyQSignalBlocker(QObject * o) : QSignalBlocker(o) {}
// void QSignalBlocker(QObject &)
MyQSignalBlocker(QObject & o) : QSignalBlocker(o) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:548
// [-2] void QSignalBlocker(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSignalBlockerC2EP7QObject(QObject * o) {
  return  new QSignalBlocker(o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:549
// [-2] void QSignalBlocker(QObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN14QSignalBlockerC2ER7QObject(QObject* o) {
  return  new QSignalBlocker(*o);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:550
// [-2] void ~QSignalBlocker()
extern "C" Q_DECL_EXPORT
void C_ZN14QSignalBlockerD2Ev(void *this_) {
  delete (QSignalBlocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:557
// [-2] void reblock()
extern "C" Q_DECL_EXPORT
void C_ZN14QSignalBlocker7reblockEv(void *this_) {
  ((QSignalBlocker*)this_)->reblock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobject.h:558
// [-2] void unblock()
extern "C" Q_DECL_EXPORT
void C_ZN14QSignalBlocker7unblockEv(void *this_) {
  ((QSignalBlocker*)this_)->unblock();
}

//  main block end
