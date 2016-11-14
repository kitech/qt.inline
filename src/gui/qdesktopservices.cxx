// /usr/include/qt/QtGui/qdesktopservices.h
#include <qdesktopservices.h>
#include <QtGui>

// static
// /usr/include/qt/QtGui/qdesktopservices.h:58
// bool openUrl(const class QUrl &)
extern "C"
void C_ZN16QDesktopServices7openUrlERK4QUrl(const QUrl & url) {
  /*return*/ QDesktopServices::openUrl(url);
}
// static
// /usr/include/qt/QtGui/qdesktopservices.h:59
// void setUrlHandler(const class QString &, class QObject *, const char *)
extern "C"
void C_ZN16QDesktopServices13setUrlHandlerERK7QStringP7QObjectPKc(const QString & scheme, QObject * receiver, const char * method) {
  QDesktopServices::setUrlHandler(scheme, receiver, method);
}
// static
// /usr/include/qt/QtGui/qdesktopservices.h:60
// void unsetUrlHandler(const class QString &)
extern "C"
void C_ZN16QDesktopServices15unsetUrlHandlerERK7QString(const QString & scheme) {
  QDesktopServices::unsetUrlHandler(scheme);
}