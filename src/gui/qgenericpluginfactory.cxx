// /usr/include/qt/QtGui/qgenericpluginfactory.h
#include <qgenericpluginfactory.h>
#include <QtGui>

// static
// /usr/include/qt/QtGui/qgenericpluginfactory.h:54
// QStringList keys()
extern "C"
void C_ZN21QGenericPluginFactory4keysEv() {
  /*return*/ QGenericPluginFactory::keys();
}
// static
// /usr/include/qt/QtGui/qgenericpluginfactory.h:55
// QObject * create(const class QString &, const class QString &)
extern "C"
void C_ZN21QGenericPluginFactory6createERK7QStringS2_(const QString & a0, const QString & a1) {
  /*return*/ QGenericPluginFactory::create(a0, a1);
}