//  header block begin
// /usr/include/qt/QtWidgets/qfileiconprovider.h
#include <qfileiconprovider.h>
#include <QtWidgets>

//  header block end

//  main block begin
// /usr/include/qt/QtWidgets/qfileiconprovider.h:55
// void QFileIconProvider()
extern "C"
void* C_ZN17QFileIconProviderC1Ev() {
  return new QFileIconProvider();
}
// virtual
// /usr/include/qt/QtWidgets/qfileiconprovider.h:56
// void ~QFileIconProvider()
extern "C"
void C_ZN17QFileIconProviderD1Ev(void *this_) {
  delete (QFileIconProvider*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qfileiconprovider.h:64
// QIcon icon(enum QFileIconProvider::IconType)
extern "C"
void C_ZNK17QFileIconProvider4iconENS_8IconTypeE(void *this_, QFileIconProvider::IconType type) {
  /*return*/ ((QFileIconProvider*)this_)->icon(type);
}
// virtual
// /usr/include/qt/QtWidgets/qfileiconprovider.h:65
// QIcon icon(const class QFileInfo &)
extern "C"
void C_ZNK17QFileIconProvider4iconERK9QFileInfo(void *this_, const QFileInfo & info) {
  /*return*/ ((QFileIconProvider*)this_)->icon(info);
}
// virtual
// /usr/include/qt/QtWidgets/qfileiconprovider.h:66
// QString type(const class QFileInfo &)
extern "C"
void C_ZNK17QFileIconProvider4typeERK9QFileInfo(void *this_, const QFileInfo & info) {
  /*return*/ ((QFileIconProvider*)this_)->type(info);
}
// /usr/include/qt/QtWidgets/qfileiconprovider.h:68
// void setOptions(Options)
extern "C"
void C_ZN17QFileIconProvider10setOptionsE6QFlagsINS_6OptionEE(void *this_, QFlags<QFileIconProvider::Option> options) {
  ((QFileIconProvider*)this_)->setOptions(options);
}
// /usr/include/qt/QtWidgets/qfileiconprovider.h:69
// Options options()
extern "C"
void C_ZNK17QFileIconProvider7optionsEv(void *this_) {
  /*return*/ ((QFileIconProvider*)this_)->options();
}
//  main block end
