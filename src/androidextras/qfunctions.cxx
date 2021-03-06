
#include <QtCore>
#include <QtAndroidExtras>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:194
// [1] bool operator!=(const QAndroidJniObject &, const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
bool C_ZneRK17QAndroidJniObjectS1_(QAndroidJniObject* obj1, QAndroidJniObject* obj2) {
  return (bool)operator!=(*obj1, *obj2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjniobject.h:189
// [1] bool operator==(const QAndroidJniObject &, const QAndroidJniObject &)
extern "C" Q_DECL_EXPORT
bool C_ZeqRK17QAndroidJniObjectS1_(QAndroidJniObject* obj1, QAndroidJniObject* obj2) {
  return (bool)operator==(*obj1, *obj2);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:107
// [1] bool shouldShowRequestPermissionRationale(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtAndroid36shouldShowRequestPermissionRationaleERK7QString(QString* permission) {
  return (bool)QtAndroid::shouldShowRequestPermissionRationale(*permission);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:93
// [-2] void runOnAndroidThreadSync(const QtAndroid::Runnable &, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid22runOnAndroidThreadSyncERKSt8functionIFvvEEi(const QtAndroid::Runnable & runnable, int timeoutMs) {
  QtAndroid::runOnAndroidThreadSync(runnable, timeoutMs);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:105
// [-2] QtAndroid::PermissionResultMap requestPermissionsSync(const QStringList &, int)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid22requestPermissionsSyncERK11QStringListi(QStringList* permissions, int timeoutMs) {
  auto rv = QtAndroid::requestPermissionsSync(*permissions, timeoutMs);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:92
// [-2] void runOnAndroidThread(const QtAndroid::Runnable &)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid18runOnAndroidThreadERKSt8functionIFvvEE(const QtAndroid::Runnable & runnable) {
  QtAndroid::runOnAndroidThread(runnable);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:104
// [-2] void requestPermissions(const QStringList &, const QtAndroid::PermissionResultCallback &)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid18requestPermissionsERK11QStringListRKSt8functionIFvRK5QHashI7QStringNS_16PermissionResultEEEE(QStringList* permissions, const QtAndroid::PermissionResultCallback & callbackFunc) {
  QtAndroid::requestPermissions(*permissions, callbackFunc);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:65
// [-2] void startIntentSender(const QAndroidJniObject &, int, QAndroidActivityResultReceiver *)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid17startIntentSenderERK17QAndroidJniObjectiP30QAndroidActivityResultReceiver(QAndroidJniObject* intentSender, int receiverRequestCode, QAndroidActivityResultReceiver * resultReceiver) {
  QtAndroid::startIntentSender(*intentSender, receiverRequestCode, resultReceiver);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:63
// [4] int androidSdkVersion()
extern "C" Q_DECL_EXPORT
int C_ZN9QtAndroid17androidSdkVersionEv() {
  return (int)QtAndroid::androidSdkVersion();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:95
// [-2] void hideSplashScreen()
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid16hideSplashScreenEv() {
  QtAndroid::hideSplashScreen();
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:96
// [-2] void hideSplashScreen(int)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid16hideSplashScreenEi_1(int duration) {
  QtAndroid::hideSplashScreen(duration);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:106
// [4] QtAndroid::PermissionResult checkPermission(const QString &)
extern "C" Q_DECL_EXPORT
QtAndroid::PermissionResult C_ZN9QtAndroid15checkPermissionERK7QString(QString* permission) {
  return (QtAndroid::PermissionResult)QtAndroid::checkPermission(*permission);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:60
// [16] QAndroidJniObject androidActivity()
extern "C" Q_DECL_EXPORT
void* C_ZN9QtAndroid15androidActivityEv() {
  auto rv = QtAndroid::androidActivity();
return new QAndroidJniObject(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:61
// [16] QAndroidJniObject androidService()
extern "C" Q_DECL_EXPORT
void* C_ZN9QtAndroid14androidServiceEv() {
  auto rv = QtAndroid::androidService();
return new QAndroidJniObject(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:62
// [16] QAndroidJniObject androidContext()
extern "C" Q_DECL_EXPORT
void* C_ZN9QtAndroid14androidContextEv() {
  auto rv = QtAndroid::androidContext();
return new QAndroidJniObject(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:68
// [-2] void startActivity(const QAndroidJniObject &, int, QAndroidActivityResultReceiver *)
extern "C" Q_DECL_EXPORT
void C_ZN9QtAndroid13startActivityERK17QAndroidJniObjectiP30QAndroidActivityResultReceiver(QAndroidJniObject* intent, int receiverRequestCode, QAndroidActivityResultReceiver * resultReceiver) {
  QtAndroid::startActivity(*intent, receiverRequestCode, resultReceiver);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidfunctions.h:87
// [1] bool bindService(const QAndroidIntent &, const QAndroidServiceConnection &, QtAndroid::BindFlags)
extern "C" Q_DECL_EXPORT
bool C_ZN9QtAndroid11bindServiceERK14QAndroidIntentRK25QAndroidServiceConnection6QFlagsINS_8BindFlagEE(QAndroidIntent* serviceIntent, QAndroidServiceConnection* serviceConnection, QFlags<QtAndroid::BindFlag> flags) {
  return (bool)QtAndroid::bindService(*serviceIntent, *serviceConnection, flags);
}

//  main block end
