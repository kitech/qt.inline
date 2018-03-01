//  header block begin
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h
#ifndef protected
#define protected public
#endif
#include <qdatawidgetmapper.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QDataWidgetMapper is pure virtual: false
// QDataWidgetMapper has virtual projected: false
//  header block end

//  main block begin

class MyQDataWidgetMapper : public QDataWidgetMapper {
public:
  virtual ~MyQDataWidgetMapper() {}
// void QDataWidgetMapper(class QObject *)
MyQDataWidgetMapper(QObject * parent) : QDataWidgetMapper(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper10metaObjectEv(void *this_) {
  return (void*)((QDataWidgetMapper*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:64
// [-2] void QDataWidgetMapper(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QDataWidgetMapperC2EP7QObject(QObject * parent) {
  return  new QDataWidgetMapper(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:65
// [-2] void ~QDataWidgetMapper()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapperD2Ev(void *this_) {
  delete (QDataWidgetMapper*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:67
// [-2] void setModel(class QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QDataWidgetMapper*)this_)->setModel(model);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:68
// [8] QAbstractItemModel * model()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper5modelEv(void *this_) {
  return (void*)((QDataWidgetMapper*)this_)->model();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:70
// [-2] void setItemDelegate(class QAbstractItemDelegate *)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QDataWidgetMapper*)this_)->setItemDelegate(delegate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:71
// [8] QAbstractItemDelegate * itemDelegate()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper12itemDelegateEv(void *this_) {
  return (void*)((QDataWidgetMapper*)this_)->itemDelegate();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:73
// [-2] void setRootIndex(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QDataWidgetMapper*)this_)->setRootIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:74
// [24] QModelIndex rootIndex()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper9rootIndexEv(void *this_) {
  auto rv = ((QDataWidgetMapper*)this_)->rootIndex();
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:76
// [-2] void setOrientation(Qt::Orientation)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation aOrientation) {
  ((QDataWidgetMapper*)this_)->setOrientation(aOrientation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:77
// [4] Qt::Orientation orientation()
extern "C" Q_DECL_EXPORT
Qt::Orientation C_ZNK17QDataWidgetMapper11orientationEv(void *this_) {
  return (Qt::Orientation)((QDataWidgetMapper*)this_)->orientation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:81
// [-2] void setSubmitPolicy(enum QDataWidgetMapper::SubmitPolicy)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper15setSubmitPolicyENS_12SubmitPolicyE(void *this_, QDataWidgetMapper::SubmitPolicy policy) {
  ((QDataWidgetMapper*)this_)->setSubmitPolicy(policy);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:82
// [4] QDataWidgetMapper::SubmitPolicy submitPolicy()
extern "C" Q_DECL_EXPORT
QDataWidgetMapper::SubmitPolicy C_ZNK17QDataWidgetMapper12submitPolicyEv(void *this_) {
  return (QDataWidgetMapper::SubmitPolicy)((QDataWidgetMapper*)this_)->submitPolicy();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:84
// [-2] void addMapping(class QWidget *, int)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper10addMappingEP7QWidgeti(void *this_, QWidget * widget, int section) {
  ((QDataWidgetMapper*)this_)->addMapping(widget, section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:85
// [-2] void addMapping(class QWidget *, int, const class QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper10addMappingEP7QWidgetiRK10QByteArray(void *this_, QWidget * widget, int section, QByteArray* propertyName) {
  ((QDataWidgetMapper*)this_)->addMapping(widget, section, *propertyName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:86
// [-2] void removeMapping(class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper13removeMappingEP7QWidget(void *this_, QWidget * widget) {
  ((QDataWidgetMapper*)this_)->removeMapping(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:87
// [4] int mappedSection(class QWidget *)
extern "C" Q_DECL_EXPORT
int C_ZNK17QDataWidgetMapper13mappedSectionEP7QWidget(void *this_, QWidget * widget) {
  return (int)((QDataWidgetMapper*)this_)->mappedSection(widget);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:88
// [8] QByteArray mappedPropertyName(class QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper18mappedPropertyNameEP7QWidget(void *this_, QWidget * widget) {
  auto rv = ((QDataWidgetMapper*)this_)->mappedPropertyName(widget);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:89
// [8] QWidget * mappedWidgetAt(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK17QDataWidgetMapper14mappedWidgetAtEi(void *this_, int section) {
  return (void*)((QDataWidgetMapper*)this_)->mappedWidgetAt(section);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:90
// [-2] void clearMapping()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper12clearMappingEv(void *this_) {
  ((QDataWidgetMapper*)this_)->clearMapping();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:92
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK17QDataWidgetMapper12currentIndexEv(void *this_) {
  return (int)((QDataWidgetMapper*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:95
// [-2] void revert()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper6revertEv(void *this_) {
  ((QDataWidgetMapper*)this_)->revert();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:96
// [1] bool submit()
extern "C" Q_DECL_EXPORT
bool C_ZN17QDataWidgetMapper6submitEv(void *this_) {
  return (bool)((QDataWidgetMapper*)this_)->submit();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:98
// [-2] void toFirst()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper7toFirstEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toFirst();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:99
// [-2] void toLast()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper6toLastEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toLast();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:100
// [-2] void toNext()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper6toNextEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toNext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:101
// [-2] void toPrevious()
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper10toPreviousEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toPrevious();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:102
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper15setCurrentIndexEi(void *this_, int index) {
  ((QDataWidgetMapper*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:103
// [-2] void setCurrentModelIndex(const class QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper20setCurrentModelIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QDataWidgetMapper*)this_)->setCurrentModelIndex(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:106
// [-2] void currentIndexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN17QDataWidgetMapper19currentIndexChangedEi(void *this_, int index) {
  ((QDataWidgetMapper*)this_)->currentIndexChanged(index);
}

//  main block end
