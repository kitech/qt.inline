// /usr/include/qt/QtCore/qtemporarydir.h
#include <qtemporarydir.h>
#include <QtCore>

// /usr/include/qt/QtCore/qtemporarydir.h:56
// void QTemporaryDir()
extern "C"
void* C_ZN13QTemporaryDirC1Ev() {
  return new QTemporaryDir();
}
// /usr/include/qt/QtCore/qtemporarydir.h:57
// void QTemporaryDir(const class QString &)
extern "C"
void* C_ZN13QTemporaryDirC1ERK7QString(const QString & templateName) {
  return new QTemporaryDir(templateName);
}
// /usr/include/qt/QtCore/qtemporarydir.h:58
// void ~QTemporaryDir()
extern "C"
void C_ZN13QTemporaryDirD1Ev(void *this_) {
  delete (QTemporaryDir*)(this_);
}
// /usr/include/qt/QtCore/qtemporarydir.h:60
// bool isValid()
extern "C"
void C_ZNK13QTemporaryDir7isValidEv(void *this_) {
  /*return*/ ((QTemporaryDir*)this_)->isValid();
}
// /usr/include/qt/QtCore/qtemporarydir.h:61
// QString errorString()
extern "C"
void C_ZNK13QTemporaryDir11errorStringEv(void *this_) {
  /*return*/ ((QTemporaryDir*)this_)->errorString();
}
// /usr/include/qt/QtCore/qtemporarydir.h:63
// bool autoRemove()
extern "C"
void C_ZNK13QTemporaryDir10autoRemoveEv(void *this_) {
  /*return*/ ((QTemporaryDir*)this_)->autoRemove();
}
// /usr/include/qt/QtCore/qtemporarydir.h:64
// void setAutoRemove(_Bool)
extern "C"
void C_ZN13QTemporaryDir13setAutoRemoveEb(void *this_, bool b) {
  ((QTemporaryDir*)this_)->setAutoRemove(b);
}
// /usr/include/qt/QtCore/qtemporarydir.h:65
// bool remove()
extern "C"
void C_ZN13QTemporaryDir6removeEv(void *this_) {
  /*return*/ ((QTemporaryDir*)this_)->remove();
}
// /usr/include/qt/QtCore/qtemporarydir.h:67
// QString path()
extern "C"
void C_ZNK13QTemporaryDir4pathEv(void *this_) {
  /*return*/ ((QTemporaryDir*)this_)->path();
}