//  header block begin
// /usr/include/qt/QtGui/qgenericpluginfactory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qgenericpluginfactory.h>
#include <QtGui>
#include "callback_inherit.h"

// QGenericPluginFactory is pure virtual: false
// QGenericPluginFactory has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQGenericPluginFactory_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGenericPluginFactory_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGenericPluginFactory_t qt_meta_stringdata_MyQGenericPluginFactory = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQGenericPluginFactory"
  },
  "MyQGenericPluginFactory"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGenericPluginFactory[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
// [8] QObject * create(const QString &, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QGenericPluginFactory6createERK7QStringS2_(QString* arg0, QString* arg1) {
  return (void*)QGenericPluginFactory::create(*arg0, *arg1);
}


extern "C" Q_DECL_EXPORT
void C_ZN21QGenericPluginFactoryD2Ev(void *this_) {
  delete (QGenericPluginFactory*)(this_);
}
//  main block end
