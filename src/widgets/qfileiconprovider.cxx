//  header block begin
// /usr/include/qt/QtWidgets/qfileiconprovider.h
#ifndef protected
#define protected public
#endif
#include <qfileiconprovider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileIconProvider is pure virtual: false
// QFileIconProvider has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFileIconProvider : public QFileIconProvider {
public:
  virtual ~MyQFileIconProvider() {}
// void QFileIconProvider()
MyQFileIconProvider() : QFileIconProvider() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:56
// [-2] void QFileIconProvider()
extern "C" Q_DECL_EXPORT
void* C_ZN17QFileIconProviderC2Ev() {
  return  new QFileIconProvider();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:57
// [-2] void ~QFileIconProvider()
extern "C" Q_DECL_EXPORT
void C_ZN17QFileIconProviderD2Ev(void *this_) {
  delete (QFileIconProvider*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:65
// [8] QIcon icon(enum QFileIconProvider::IconType)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFileIconProvider4iconENS_8IconTypeE(void *this_, QFileIconProvider::IconType type_) {
  auto rv = ((QFileIconProvider*)this_)->icon(type_);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:66
// [8] QIcon icon(const class QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFileIconProvider4iconERK9QFileInfo(void *this_, QFileInfo* info) {
  auto rv = ((QFileIconProvider*)this_)->icon(*info);
return new QIcon(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:67
// [8] QString type(const class QFileInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QFileIconProvider4typeERK9QFileInfo(void *this_, QFileInfo* info) {
  auto rv = ((QFileIconProvider*)this_)->type(*info);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:69
// [-2] void setOptions(QFileIconProvider::Options)
extern "C" Q_DECL_EXPORT
void C_ZN17QFileIconProvider10setOptionsE6QFlagsINS_6OptionEE(void *this_, QFlags<QFileIconProvider::Option> options) {
  ((QFileIconProvider*)this_)->setOptions(options);
}

// Public Visibility=Default Availability=Available
// since 5.2
// /usr/include/qt/QtWidgets/qfileiconprovider.h:70
// [4] QFileIconProvider::Options options()
#if QT_VERSION >= 0x050200
extern "C" Q_DECL_EXPORT
QFileIconProvider::Options* C_ZNK17QFileIconProvider7optionsEv(void *this_) {
  auto rv = ((QFileIconProvider*)this_)->options();
return new QFileIconProvider::Options(rv);
}
#endif // QT_VERSION >= 0x050200

//  main block end
