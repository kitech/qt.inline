//  header block begin

// since 0x050300
// /usr/include/qt/QtAndroidExtras/qandroidactivityresultreceiver.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidactivityresultreceiver.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidActivityResultReceiver is pure virtual: true
// QAndroidActivityResultReceiver has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAndroidActivityResultReceiver_t {
  QByteArrayData data[1];
  char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidActivityResultReceiver_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidActivityResultReceiver_t qt_meta_stringdata_MyQAndroidActivityResultReceiver = {
   {
  QT_MOC_LITERAL(0, 0, 32), // "MyQAndroidActivityResultReceiver"
  },
  "MyQAndroidActivityResultReceiver"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidActivityResultReceiver[] = {
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
class Q_DECL_EXPORT MyQAndroidActivityResultReceiver : public QAndroidActivityResultReceiver {
public:
  virtual ~MyQAndroidActivityResultReceiver() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void handleActivityResult(int, int, const QAndroidJniObject &)
  virtual void handleActivityResult(int receiverRequestCode, int resultCode, const QAndroidJniObject & data)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"handleActivityResult", &handled, 3, (uint64_t)receiverRequestCode, (uint64_t)resultCode, (uint64_t)&data, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAndroidActivityResultReceiver::handleActivityResult(receiverRequestCode, resultCode, data);
  }
  }

// void QAndroidActivityResultReceiver()
MyQAndroidActivityResultReceiver() : QAndroidActivityResultReceiver() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidactivityresultreceiver.h:54
// [-2] void handleActivityResult(int, int, const QAndroidJniObject &)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidactivityresultreceiver.h:52
// [-2] void QAndroidActivityResultReceiver()
extern "C" Q_DECL_EXPORT
void* C_ZN30QAndroidActivityResultReceiverC2Ev() {
  return 0; // new QAndroidActivityResultReceiver();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidactivityresultreceiver.h:53
// [-2] void ~QAndroidActivityResultReceiver()
extern "C" Q_DECL_EXPORT
void C_ZN30QAndroidActivityResultReceiverD2Ev(void *this_) {
  delete (QAndroidActivityResultReceiver*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidactivityresultreceiver.h:54
// [-2] void handleActivityResult(int, int, const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
void C_ZN30QAndroidActivityResultReceiver20handleActivityResultEiiRK17QAndroidJniObject(void *this_, int receiverRequestCode, int resultCode, QAndroidJniObject* data) {
  ((QAndroidActivityResultReceiver*)this_)->handleActivityResult(receiverRequestCode, resultCode, *data);
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
