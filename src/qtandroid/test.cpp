#include <QtAndroidExtras>

/////// heavy wrapper, not just binding
extern "C" Q_DECL_EXPORT
void C_AndroidKeepScreenOnRaw(uint64_t ion, uint64_t a1) {
    bool on = ion == 1 ? true : false;

    QAndroidJniObject activity = QtAndroid::androidActivity();
    if (activity.isValid()) {
        QAndroidJniObject window =
            activity.callObjectMethod("getWindow", "()Landroid/view/Window;");

        if (window.isValid()) {
            const int FLAG_KEEP_SCREEN_ON = 128;
            if (on) {
                window.callMethod<void>("addFlags", "(I)V", FLAG_KEEP_SCREEN_ON);
            } else {
                window.callMethod<void>("clearFlags", "(I)V", FLAG_KEEP_SCREEN_ON);
            }
        }
    }
    QAndroidJniEnvironment env;
    if (env->ExceptionCheck()) {
        env->ExceptionClear();
    }
}

extern "C" Q_DECL_EXPORT
void C_AndroidKeepScreenOn(uint64_t ion, uint64_t a1) {
    QtAndroid::runOnAndroidThread([ion,a1]{
            C_AndroidKeepScreenOnRaw(ion, a1);
        });
}

extern "C" Q_DECL_EXPORT
void C_AndroidShowToast(uint64_t message_, uint64_t duration) {
    char *msg = (char*)message_;
    QString message = QString(msg);
    free(msg);
    QAndroidJniObject javaString = QAndroidJniObject::fromString(message);
    QAndroidJniObject toast = QAndroidJniObject::callStaticObjectMethod("android/widget/Toast", "makeText",
                                                                        "(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;",
                                                                        QtAndroid::androidActivity().object(),
                                                                        javaString.object(),
                                                                        jint(duration));
    toast.callMethod<void>("show");
}

///////
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

#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool QtAndroid_bindService(const QAndroidIntent *serviceIntent, QAndroidServiceConnection *serviceConnection, int flags) {
    return QtAndroid::bindService(*serviceIntent, *serviceConnection, QtAndroid::BindFlags(flags));
}
#endif

#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int QtAndroid_checkPermission(const QString *permission) {
    return int(QtAndroid::checkPermission(*permission));
}
#endif

extern "C" Q_DECL_EXPORT
void QtAndroid_hideSplashScreen() {
    QtAndroid::hideSplashScreen();
}

#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void QtAndroid_hideSplashScreen_2(int duration) {
    QtAndroid::hideSplashScreen(duration);
}
#endif

/*
extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThread(const QtAndroid::Runnable *runnable) {
    QtAndroid::runOnAndroidThread(*runnable);
}

extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThreadSync(const QtAndroid::Runnable *runnable, int timeoutMs) {
    QtAndroid::runOnAndroidThreadSync(*runnable, timeoutMs);
}
*/
// depcreated
extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThread(uint64_t cbno, void (*runnable)(uint64_t)) {
    QtAndroid::runOnAndroidThread([cbno,runnable](){ runnable(cbno); });
}

extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThread2(void (*runnable)(uint64_t, uint64_t), uint64_t a0, uint64_t a1) {
    QtAndroid::runOnAndroidThread([runnable,a0,a1](){ runnable(a0, a1); });
}

extern "C" Q_DECL_EXPORT
void QtAndroid_runOnAndroidThreadSync(uint64_t cbno, void (*runnable)(uint64_t), int timeoutMs) {
    QtAndroid::runOnAndroidThreadSync([cbno, runnable](){ runnable(cbno); }, timeoutMs);
}

#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
bool QtAndroid_shouldShowRequestPermissionRationale(const QString *permission) {
    return QtAndroid::shouldShowRequestPermissionRationale(*permission);
}
#endif

extern "C" Q_DECL_EXPORT
void QtAndroid_startActivity(const QAndroidJniObject *intent, int receiverRequestCode, QAndroidActivityResultReceiver *resultReceiver) {
    QtAndroid::startActivity(*intent, receiverRequestCode, resultReceiver);
}

extern "C" Q_DECL_EXPORT
void QtAndroid_startIntentSender(const QAndroidJniObject *intentSender, int receiverRequestCode, QAndroidActivityResultReceiver *resultReceiver) {
    QtAndroid::startIntentSender(*intentSender, receiverRequestCode, resultReceiver);
}

