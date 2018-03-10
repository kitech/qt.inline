//  header block begin
// /usr/include/qt/QtGui/qgenericpluginfactory.h
#ifndef protected
#define protected public
#endif
#include <qgenericpluginfactory.h>
#include <QtGui>
#include "callback_inherit.h"

// QGenericPluginFactory is pure virtual: false
// QGenericPluginFactory has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGenericPluginFactory : public QGenericPluginFactory {
public:
  virtual ~MyQGenericPluginFactory() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericpluginfactory.h:55
// [8] QStringList keys()
extern "C" Q_DECL_EXPORT
void* C_ZN21QGenericPluginFactory4keysEv() {
  auto rv = QGenericPluginFactory::keys();
return new QStringList(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericpluginfactory.h:56
// [8] QObject * create(const class QString &, const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGenericPluginFactory6createERK7QStringS2_(QString* arg0, QString* arg1) {
  return (void*)QGenericPluginFactory::create(*arg0, *arg1);
}


extern "C" Q_DECL_EXPORT
void C_ZN21QGenericPluginFactoryD2Ev(void *this_) {
  delete (QGenericPluginFactory*)(this_);
}
//  main block end
