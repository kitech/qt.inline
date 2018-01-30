//  header block begin
// /usr/include/qt/QtCore/qtemporarydir.h
#include <qtemporarydir.h>
#include <QtCore>

// QTemporaryDir is pure virtual: false
// QTemporaryDir has virtual projected: false
//  header block end

//  main block begin

class MyQTemporaryDir : public QTemporaryDir {
public:
  virtual ~MyQTemporaryDir() {}
// void QTemporaryDir()
MyQTemporaryDir() : QTemporaryDir() {}
// void QTemporaryDir(const class QString &)
MyQTemporaryDir(const QString & templateName) : QTemporaryDir(templateName) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:56
// [-2] void QTemporaryDir()
extern "C"
void* C_ZN13QTemporaryDirC2Ev() {
  return  new QTemporaryDir();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:57
// [-2] void QTemporaryDir(const class QString &)
extern "C"
void* C_ZN13QTemporaryDirC2ERK7QString(const QString & templateName) {
  return  new QTemporaryDir(templateName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:58
// [-2] void ~QTemporaryDir()
extern "C"
void C_ZN13QTemporaryDirD2Ev(void *this_) {
  delete (QTemporaryDir*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:60
// [1] bool isValid()
extern "C"
bool C_ZNK13QTemporaryDir7isValidEv(void *this_) {
  return (bool)((QTemporaryDir*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:61
// [8] QString errorString()
extern "C"
void* C_ZNK13QTemporaryDir11errorStringEv(void *this_) {
  auto rv = ((QTemporaryDir*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:63
// [1] bool autoRemove()
extern "C"
bool C_ZNK13QTemporaryDir10autoRemoveEv(void *this_) {
  return (bool)((QTemporaryDir*)this_)->autoRemove();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:64
// [-2] void setAutoRemove(_Bool)
extern "C"
void C_ZN13QTemporaryDir13setAutoRemoveEb(void *this_, bool b) {
  ((QTemporaryDir*)this_)->setAutoRemove(b);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:65
// [1] bool remove()
extern "C"
bool C_ZN13QTemporaryDir6removeEv(void *this_) {
  return (bool)((QTemporaryDir*)this_)->remove();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:67
// [8] QString path()
extern "C"
void* C_ZNK13QTemporaryDir4pathEv(void *this_) {
  auto rv = ((QTemporaryDir*)this_)->path();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtemporarydir.h:68
// [8] QString filePath(const class QString &)
extern "C"
void* C_ZNK13QTemporaryDir8filePathERK7QString(void *this_, const QString & fileName) {
  auto rv = ((QTemporaryDir*)this_)->filePath(fileName);
return new QString(rv);
}
//  main block end
