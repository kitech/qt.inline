//  header block begin

// since 0x050200
// /usr/include/qt/QtCore/qplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qplugin.h>
#include <QtCore>
#include "callback_inherit.h"

// QStaticPlugin is pure virtual: false
// QStaticPlugin has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStaticPlugin_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStaticPlugin_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStaticPlugin_t qt_meta_stringdata_MyQStaticPlugin = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQStaticPlugin"
  },
  "MyQStaticPlugin"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStaticPlugin[] = {
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
class Q_DECL_EXPORT MyQStaticPlugin : public QStaticPlugin {
public:
  virtual ~MyQStaticPlugin() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qplugin.h:74
// [16] QJsonObject metaData()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QStaticPlugin8metaDataEv(void *this_) {
  auto rv = ((QStaticPlugin*)this_)->metaData();
return new QJsonObject(rv);
}


extern "C" Q_DECL_EXPORT
void C_ZN13QStaticPluginD2Ev(void *this_) {
  delete (QStaticPlugin*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
