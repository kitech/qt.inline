//  header block begin
// /usr/include/qt/QtCore/qfileselector.h
#include <qfileselector.h>
#include <QtCore>

// QFileSelector is pure virtual: false
//  header block end

//  main block begin

class MyQFileSelector : public QFileSelector {
public:
MyQFileSelector(QObject * parent) : QFileSelector(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK13QFileSelector10metaObjectEv(void *this_) {
  return (void*)((QFileSelector*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:53
// [-2] void QFileSelector(class QObject *)
extern "C"
void* C_ZN13QFileSelectorC1EP7QObject(QObject * parent) {
  (MyQFileSelector*)(0);
  return  new MyQFileSelector(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:54
// [-2] void ~QFileSelector()
extern "C"
void C_ZN13QFileSelectorD1Ev(void *this_) {
  delete (QFileSelector*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:56
// [8] QString select(const class QString &)
extern "C"
void* C_ZNK13QFileSelector6selectERK7QString(void *this_, const QString & filePath) {
  auto rv = ((QFileSelector*)this_)->select(filePath);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:57
// [8] QUrl select(const class QUrl &)
extern "C"
void* C_ZNK13QFileSelector6selectERK4QUrl(void *this_, const QUrl & filePath) {
  auto rv = ((QFileSelector*)this_)->select(filePath);
return new QUrl(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:60
// [-2] void setExtraSelectors(const class QStringList &)
extern "C"
void C_ZN13QFileSelector17setExtraSelectorsERK11QStringList(void *this_, const QStringList & list) {
  ((QFileSelector*)this_)->setExtraSelectors(list);
}
//  main block end
