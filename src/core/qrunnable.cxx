//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qrunnable.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qrunnable.h>
#include <QtCore>
#include "callback_inherit.h"

// QRunnable is pure virtual: true
// QRunnable has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQRunnable_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRunnable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRunnable_t qt_meta_stringdata_MyQRunnable = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQRunnable"
  },
  "MyQRunnable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRunnable[] = {
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
class Q_DECL_EXPORT MyQRunnable : public QRunnable {
public:
  virtual ~MyQRunnable() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void run()
  virtual void run()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"run", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QRunnable::run();
  }
  }

// void QRunnable()
MyQRunnable() : QRunnable() {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:58
// [-2] void run()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:58
// [-2] void run()
extern "C" Q_DECL_EXPORT
void C_ZN9QRunnable3runEv(void *this_) {
  ((QRunnable*)this_)->run();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:60
// [-2] void QRunnable()
extern "C" Q_DECL_EXPORT
void* C_ZN9QRunnableC2Ev() {
  return 0; // new QRunnable();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:61
// [-2] void ~QRunnable()
extern "C" Q_DECL_EXPORT
void C_ZN9QRunnableD2Ev(void *this_) {
  delete (QRunnable*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:63
// [1] bool autoDelete()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QRunnable10autoDeleteEv(void *this_) {
  return (bool)((QRunnable*)this_)->autoDelete();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qrunnable.h:64
// [-2] void setAutoDelete(bool)
extern "C" Q_DECL_EXPORT
void C_ZN9QRunnable13setAutoDeleteEb(void *this_, bool _autoDelete) {
  ((QRunnable*)this_)->setAutoDelete(_autoDelete);
}

//  main block end
