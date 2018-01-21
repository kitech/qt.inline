//  header block begin
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h
#include <qdatawidgetmapper.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:57
// const QMetaObject * metaObject()
extern "C"
void C_ZNK17QDataWidgetMapper10metaObjectEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:64
// void QDataWidgetMapper(class QObject *)
extern "C"
void* C_ZN17QDataWidgetMapperC1EP7QObject(QObject * parent) {
  return new QDataWidgetMapper(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:65
// void ~QDataWidgetMapper()
extern "C"
void C_ZN17QDataWidgetMapperD1Ev(void *this_) {
  delete (QDataWidgetMapper*)(this_);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:67
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN17QDataWidgetMapper8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QDataWidgetMapper*)this_)->setModel(model);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:68
// QAbstractItemModel * model()
extern "C"
void C_ZNK17QDataWidgetMapper5modelEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->model();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:70
// void setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void C_ZN17QDataWidgetMapper15setItemDelegateEP21QAbstractItemDelegate(void *this_, QAbstractItemDelegate * delegate) {
  ((QDataWidgetMapper*)this_)->setItemDelegate(delegate);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:71
// QAbstractItemDelegate * itemDelegate()
extern "C"
void C_ZNK17QDataWidgetMapper12itemDelegateEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->itemDelegate();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:73
// void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN17QDataWidgetMapper12setRootIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QDataWidgetMapper*)this_)->setRootIndex(index);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:74
// QModelIndex rootIndex()
extern "C"
void C_ZNK17QDataWidgetMapper9rootIndexEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->rootIndex();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:76
// void setOrientation(Qt::Orientation)
extern "C"
void C_ZN17QDataWidgetMapper14setOrientationEN2Qt11OrientationE(void *this_, Qt::Orientation aOrientation) {
  ((QDataWidgetMapper*)this_)->setOrientation(aOrientation);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:77
// Qt::Orientation orientation()
extern "C"
void C_ZNK17QDataWidgetMapper11orientationEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:81
// void setSubmitPolicy(enum QDataWidgetMapper::SubmitPolicy)
extern "C"
void C_ZN17QDataWidgetMapper15setSubmitPolicyENS_12SubmitPolicyE(void *this_, QDataWidgetMapper::SubmitPolicy policy) {
  ((QDataWidgetMapper*)this_)->setSubmitPolicy(policy);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:82
// QDataWidgetMapper::SubmitPolicy submitPolicy()
extern "C"
void C_ZNK17QDataWidgetMapper12submitPolicyEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->submitPolicy();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:84
// void addMapping(class QWidget *, int)
extern "C"
void C_ZN17QDataWidgetMapper10addMappingEP7QWidgeti(void *this_, QWidget * widget, int section) {
  ((QDataWidgetMapper*)this_)->addMapping(widget, section);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:85
// void addMapping(class QWidget *, int, const class QByteArray &)
extern "C"
void C_ZN17QDataWidgetMapper10addMappingEP7QWidgetiRK10QByteArray(void *this_, QWidget * widget, int section, const QByteArray & propertyName) {
  ((QDataWidgetMapper*)this_)->addMapping(widget, section, propertyName);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:86
// void removeMapping(class QWidget *)
extern "C"
void C_ZN17QDataWidgetMapper13removeMappingEP7QWidget(void *this_, QWidget * widget) {
  ((QDataWidgetMapper*)this_)->removeMapping(widget);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:87
// int mappedSection(class QWidget *)
extern "C"
void C_ZNK17QDataWidgetMapper13mappedSectionEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QDataWidgetMapper*)this_)->mappedSection(widget);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:88
// QByteArray mappedPropertyName(class QWidget *)
extern "C"
void C_ZNK17QDataWidgetMapper18mappedPropertyNameEP7QWidget(void *this_, QWidget * widget) {
  /*return*/ ((QDataWidgetMapper*)this_)->mappedPropertyName(widget);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:89
// QWidget * mappedWidgetAt(int)
extern "C"
void C_ZNK17QDataWidgetMapper14mappedWidgetAtEi(void *this_, int section) {
  /*return*/ ((QDataWidgetMapper*)this_)->mappedWidgetAt(section);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:90
// void clearMapping()
extern "C"
void C_ZN17QDataWidgetMapper12clearMappingEv(void *this_) {
  ((QDataWidgetMapper*)this_)->clearMapping();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:92
// int currentIndex()
extern "C"
void C_ZNK17QDataWidgetMapper12currentIndexEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->currentIndex();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:95
// void revert()
extern "C"
void C_ZN17QDataWidgetMapper6revertEv(void *this_) {
  ((QDataWidgetMapper*)this_)->revert();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:96
// bool submit()
extern "C"
void C_ZN17QDataWidgetMapper6submitEv(void *this_) {
  /*return*/ ((QDataWidgetMapper*)this_)->submit();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:98
// void toFirst()
extern "C"
void C_ZN17QDataWidgetMapper7toFirstEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toFirst();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:99
// void toLast()
extern "C"
void C_ZN17QDataWidgetMapper6toLastEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toLast();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:100
// void toNext()
extern "C"
void C_ZN17QDataWidgetMapper6toNextEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toNext();
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:101
// void toPrevious()
extern "C"
void C_ZN17QDataWidgetMapper10toPreviousEv(void *this_) {
  ((QDataWidgetMapper*)this_)->toPrevious();
}
// virtual
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:102
// void setCurrentIndex(int)
extern "C"
void C_ZN17QDataWidgetMapper15setCurrentIndexEi(void *this_, int index) {
  ((QDataWidgetMapper*)this_)->setCurrentIndex(index);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:103
// void setCurrentModelIndex(const class QModelIndex &)
extern "C"
void C_ZN17QDataWidgetMapper20setCurrentModelIndexERK11QModelIndex(void *this_, const QModelIndex & index) {
  ((QDataWidgetMapper*)this_)->setCurrentModelIndex(index);
}
// /usr/include/qt/QtWidgets/qdatawidgetmapper.h:106
// void currentIndexChanged(int)
extern "C"
void C_ZN17QDataWidgetMapper19currentIndexChangedEi(void *this_, int index) {
  ((QDataWidgetMapper*)this_)->currentIndexChanged(index);
}
//  main block end
