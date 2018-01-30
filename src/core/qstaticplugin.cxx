//  header block begin
// /usr/include/qt/QtCore/qplugin.h
#include <qplugin.h>
#include <QtCore>

// QStaticPlugin is pure virtual: false
// QStaticPlugin has virtual projected: false
//  header block end

//  main block begin

class MyQStaticPlugin : public QStaticPlugin {
public:
  virtual ~MyQStaticPlugin() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qplugin.h:74
// [16] QJsonObject metaData()
extern "C"
void* C_ZNK13QStaticPlugin8metaDataEv(void *this_) {
  auto rv = ((QStaticPlugin*)this_)->metaData();
return new QJsonObject(rv);
}
//  main block end
