//  header block begin
// /usr/include/qt/QtGui/qgenericpluginfactory.h
#include <qgenericpluginfactory.h>
#include <QtGui>

// QGenericPluginFactory is pure virtual: false
// QGenericPluginFactory has virtual projected: false
//  header block end

//  main block begin

class MyQGenericPluginFactory : public QGenericPluginFactory {
public:
  virtual ~MyQGenericPluginFactory() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericpluginfactory.h:56
// [8] QObject * create(const class QString &, const class QString &)
extern "C"
void* C_ZN21QGenericPluginFactory6createERK7QStringS2_(QString* arg0, QString* arg1) {
  return (void*)QGenericPluginFactory::create(*arg0, *arg1);
}

extern "C"
void C_ZN21QGenericPluginFactoryD2Ev(void *this_) {
  delete (QGenericPluginFactory*)(this_);
}
//  main block end
