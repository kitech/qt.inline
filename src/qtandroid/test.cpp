#include <QtAndroidExtras>

extern "C" Q_DECL_EXPORT
QAndroidJniObject* QtAndroid_androidActivity() {
    return new QAndroidJniObject(QtAndroid::androidActivity());
}

extern "C" Q_DECL_EXPORT
QAndroidJniObject* QtAndroid_androidContext() {
    return new QAndroidJniObject(QtAndroid::androidContext());
}

extern "C" Q_DECL_EXPORT
int QtAndroid_androidSdkVersion() {
    return QtAndroid::androidSdkVersion();
}

extern "C" Q_DECL_EXPORT
QAndroidJniObject* QtAndroid_androidService() {
    return new QAndroidJniObject(QtAndroid::androidService());
}

extern "C" Q_DECL_EXPORT
bool QtAndroid_bindService(const QAndroidIntent *serviceIntent, QAndroidServiceConnection *serviceConnection, int flags) {
    return QtAndroid::bindService(*serviceIntent, *serviceConnection, QtAndroid::BindFlags(flags));
}

extern "C" Q_DECL_EXPORT
int QtAndroid_checkPermission(const QString *permission) {
    return int(QtAndroid::checkPermission(*permission));
}

extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThread(const QtAndroid::Runnable *runnable) {
    QtAndroid::runOnAndroidThread(*runnable);
}

extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThreadSync(const QtAndroid::Runnable *runnable, int timeoutMs) {
    QtAndroid::runOnAndroidThreadSync(*runnable, timeoutMs);
}

extern "C" Q_DECL_EXPORT
bool QtAndroid_shouldShowRequestPermissionRationale(const QString *permission) {
    return QtAndroid::shouldShowRequestPermissionRationale(*permission);
}

extern "C" Q_DECL_EXPORT
void QtAndroid_startActivity(const QAndroidJniObject *intent, int receiverRequestCode, QAndroidActivityResultReceiver *resultReceiver) {
    QtAndroid::startActivity(*intent, receiverRequestCode, resultReceiver);
}

extern "C" Q_DECL_EXPORT
void QtAndroid_startIntentSender(const QAndroidJniObject *intentSender, int receiverRequestCode, QAndroidActivityResultReceiver *resultReceiver) {
    QtAndroid::startIntentSender(*intentSender, receiverRequestCode, resultReceiver);
}

