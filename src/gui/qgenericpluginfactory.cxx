//  header block begin
// /usr/include/qt/QtGui/qgenericpluginfactory.h
#include <qgenericpluginfactory.h>
#include <QtGui>

// QGenericPluginFactory is pure virtual: false
//  header block end

//  main block begin

class MyQGenericPluginFactory : public QGenericPluginFactory {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qgenericpluginfactory.h:56
// [8] QObject * create(const class QString &, const class QString &)
extern "C"
void* C_ZN21QGenericPluginFactory6createERK7QStringS2_(const QString & arg0, const QString & arg1) {
  return (void*)QGenericPluginFactory::create(arg0, arg1);
}
//  main block end
