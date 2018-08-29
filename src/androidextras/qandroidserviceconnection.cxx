//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidserviceconnection.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidServiceConnection is pure virtual: true
// QAndroidServiceConnection has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAndroidServiceConnection_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidServiceConnection_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidServiceConnection_t qt_meta_stringdata_MyQAndroidServiceConnection = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQAndroidServiceConnection"
  },
  "MyQAndroidServiceConnection"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidServiceConnection[] = {
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
class Q_DECL_EXPORT MyQAndroidServiceConnection : public QAndroidServiceConnection {
public:
  virtual ~MyQAndroidServiceConnection() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void onServiceConnected(const QString &, const QAndroidBinder &)
  virtual void onServiceConnected(const QString & name, const QAndroidBinder & serviceBinder)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onServiceConnected", &handled, 2, (uint64_t)&name, (uint64_t)&serviceBinder, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAndroidServiceConnection::onServiceConnected(name, serviceBinder);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void onServiceDisconnected(const QString &)
  virtual void onServiceDisconnected(const QString & name)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"onServiceDisconnected", &handled, 1, (uint64_t)&name, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QAndroidServiceConnection::onServiceDisconnected(name);
  }
  }

// void QAndroidServiceConnection()
MyQAndroidServiceConnection() : QAndroidServiceConnection() {}
// void QAndroidServiceConnection(const QAndroidJniObject &)
MyQAndroidServiceConnection(const QAndroidJniObject & serviceConnection) : QAndroidServiceConnection(serviceConnection) {}
};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:55
// [-2] void onServiceConnected(const QString &, const QAndroidBinder &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:56
// [-2] void onServiceDisconnected(const QString &)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:51
// [-2] void QAndroidServiceConnection()
extern "C" Q_DECL_EXPORT
void* C_ZN25QAndroidServiceConnectionC2Ev() {
  return 0; // new QAndroidServiceConnection();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:52
// [-2] void QAndroidServiceConnection(const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
void* C_ZN25QAndroidServiceConnectionC2ERK17QAndroidJniObject(QAndroidJniObject* serviceConnection) {
  return 0; // new QAndroidServiceConnection(*serviceConnection);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:53
// [-2] void ~QAndroidServiceConnection()
extern "C" Q_DECL_EXPORT
void C_ZN25QAndroidServiceConnectionD2Ev(void *this_) {
  delete (QAndroidServiceConnection*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:55
// [-2] void onServiceConnected(const QString &, const QAndroidBinder &)
extern "C" Q_DECL_EXPORT
void C_ZN25QAndroidServiceConnection18onServiceConnectedERK7QStringRK14QAndroidBinder(void *this_, QString* name, QAndroidBinder* serviceBinder) {
  ((QAndroidServiceConnection*)this_)->onServiceConnected(*name, *serviceBinder);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:56
// [-2] void onServiceDisconnected(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN25QAndroidServiceConnection21onServiceDisconnectedERK7QString(void *this_, QString* name) {
  ((QAndroidServiceConnection*)this_)->onServiceDisconnected(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h:58
// [16] QAndroidJniObject handle()
extern "C" Q_DECL_EXPORT
void* C_ZNK25QAndroidServiceConnection6handleEv(void *this_) {
  auto rv = ((QAndroidServiceConnection*)this_)->handle();
return new QAndroidJniObject(rv);
}

//  main block end
