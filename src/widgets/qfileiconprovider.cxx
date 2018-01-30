//  header block begin
// /usr/include/qt/QtWidgets/qfileiconprovider.h
#include <qfileiconprovider.h>
#include <QtWidgets>

// QFileIconProvider is pure virtual: false
// QFileIconProvider has virtual projected: false
//  header block end

//  main block begin

class MyQFileIconProvider : public QFileIconProvider {
public:
  virtual ~MyQFileIconProvider() {}
// void QFileIconProvider()
MyQFileIconProvider() : QFileIconProvider() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:56
// [-2] void QFileIconProvider()
extern "C"
void* C_ZN17QFileIconProviderC2Ev() {
  return  new QFileIconProvider();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:57
// [-2] void ~QFileIconProvider()
extern "C"
void C_ZN17QFileIconProviderD2Ev(void *this_) {
  delete (QFileIconProvider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:65
// [8] QIcon icon(enum QFileIconProvider::IconType)
extern "C"
void* C_ZNK17QFileIconProvider4iconENS_8IconTypeE(void *this_, QFileIconProvider::IconType type) {
  auto rv = ((QFileIconProvider*)this_)->icon(type);
return new QIcon(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:66
// [8] QIcon icon(const class QFileInfo &)
extern "C"
void* C_ZNK17QFileIconProvider4iconERK9QFileInfo(void *this_, const QFileInfo & info) {
  auto rv = ((QFileIconProvider*)this_)->icon(info);
return new QIcon(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:67
// [8] QString type(const class QFileInfo &)
extern "C"
void* C_ZNK17QFileIconProvider4typeERK9QFileInfo(void *this_, const QFileInfo & info) {
  auto rv = ((QFileIconProvider*)this_)->type(info);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:70
// [4] QFileIconProvider::Options options()
extern "C"
void C_ZNK17QFileIconProvider7optionsEv(void *this_) {
  auto rv = ((QFileIconProvider*)this_)->options();
/*return rv;*/
}
//  main block end
