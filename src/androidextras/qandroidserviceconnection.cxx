//  header block begin
// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidserviceconnection.h
#ifndef protected
#define protected public
#endif
#include <qandroidserviceconnection.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidServiceConnection is pure virtual: true
// QAndroidServiceConnection has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQAndroidServiceConnection : public QAndroidServiceConnection {
public:
  virtual ~MyQAndroidServiceConnection() {}
// void QAndroidServiceConnection()
MyQAndroidServiceConnection() : QAndroidServiceConnection() {}
// void QAndroidServiceConnection(const QAndroidJniObject &)
MyQAndroidServiceConnection(const QAndroidJniObject & serviceConnection) : QAndroidServiceConnection(serviceConnection) {}
};

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
