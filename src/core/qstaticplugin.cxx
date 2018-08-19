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
