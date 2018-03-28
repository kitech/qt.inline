//  header block begin
// since 0x040200
// /usr/include/qt/QtGui/qdesktopservices.h
#ifndef protected
#define protected public
#endif
#include <qdesktopservices.h>
#include <QtGui>
#include "callback_inherit.h"

// QDesktopServices is pure virtual: false
// QDesktopServices has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQDesktopServices : public QDesktopServices {
public:
  virtual ~MyQDesktopServices() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdesktopservices.h:59
// [1] bool openUrl(const QUrl &)
extern "C" Q_DECL_EXPORT
bool C_ZN16QDesktopServices7openUrlERK4QUrl(QUrl* url) {
  return (bool)QDesktopServices::openUrl(*url);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdesktopservices.h:60
// [-2] void setUrlHandler(const QString &, QObject *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN16QDesktopServices13setUrlHandlerERK7QStringP7QObjectPKc(QString* scheme, QObject * receiver, const char * method) {
  QDesktopServices::setUrlHandler(*scheme, receiver, method);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qdesktopservices.h:61
// [-2] void unsetUrlHandler(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN16QDesktopServices15unsetUrlHandlerERK7QString(QString* scheme) {
  QDesktopServices::unsetUrlHandler(*scheme);
}


extern "C" Q_DECL_EXPORT
void C_ZN16QDesktopServicesD2Ev(void *this_) {
  delete (QDesktopServices*)(this_);
}
//  main block end
