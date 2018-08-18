//  header block begin
// since 0x050200
// /usr/include/qt/QtCore/qfileselector.h
#ifndef protected
#define protected public
#endif
#include <qfileselector.h>
#include <QtCore>
#include "callback_inherit.h"

// QFileSelector is pure virtual: false
// QFileSelector has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQFileSelector : public QFileSelector {
public:
  virtual ~MyQFileSelector() {}
// void QFileSelector(QObject *)
MyQFileSelector(QObject * parent) : QFileSelector(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector10metaObjectEv(void *this_) {
  return (void*)((QFileSelector*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelector11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QFileSelector*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN13QFileSelector11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QFileSelector*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelector2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSelector::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:51
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelector6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QFileSelector::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:53
// [-2] void QFileSelector(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN13QFileSelectorC2EP7QObject(QObject * parent) {
  return  new QFileSelector(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:54
// [-2] void ~QFileSelector()
extern "C" Q_DECL_EXPORT
void C_ZN13QFileSelectorD2Ev(void *this_) {
  delete (QFileSelector*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:56
// [8] QString select(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector6selectERK7QString(void *this_, QString* filePath) {
  auto rv = ((QFileSelector*)this_)->select(*filePath);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:57
// [8] QUrl select(const QUrl &)
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector6selectERK4QUrl(void *this_, QUrl* filePath) {
  auto rv = ((QFileSelector*)this_)->select(*filePath);
return new QUrl(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:59
// [8] QStringList extraSelectors()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector14extraSelectorsEv(void *this_) {
  auto rv = ((QFileSelector*)this_)->extraSelectors();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:60
// [-2] void setExtraSelectors(const QStringList &)
extern "C" Q_DECL_EXPORT
void C_ZN13QFileSelector17setExtraSelectorsERK11QStringList(void *this_, QStringList* list) {
  ((QFileSelector*)this_)->setExtraSelectors(*list);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qfileselector.h:62
// [8] QStringList allSelectors()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QFileSelector12allSelectorsEv(void *this_) {
  auto rv = ((QFileSelector*)this_)->allSelectors();
return new QStringList(rv);
}

//  main block end
