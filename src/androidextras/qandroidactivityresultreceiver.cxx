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
