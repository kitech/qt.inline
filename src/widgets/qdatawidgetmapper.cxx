// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qdatawidgetmapper.h
// dst-file: /src/widgets/qdatawidgetmapper.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qdatawidgetmapper.h>


#include <qabstractitemmodel.h>
#include <qnamespace.h>
#include <qbytearray.h>
// <= header block end

// main block begin =>
void __keep_qdatawidgetmapper_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QDataWidgetMapper_Class_Size()
{
  return sizeof(QDataWidgetMapper);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 86, column 9>
//   // proto:  int QDataWidgetMapper::currentIndex();
// _ZNK17QDataWidgetMapper12currentIndexEv currentIndex()
extern "C"
int
C_ZNK17QDataWidgetMapper12currentIndexEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->currentIndex();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 79, column 10>
//   // proto:  void QDataWidgetMapper::addMapping(QWidget * widget, int section, const QByteArray & propertyName);
// _ZN17QDataWidgetMapper10addMappingEP7QWidgetiRK10QByteArray addMapping(class QWidget *, int, const class QByteArray &)
extern "C"
void
C_ZN17QDataWidgetMapper10addMappingEP7QWidgetiRK10QByteArray(void *qthis,
QWidget * arg1,
int arg2,
const QByteArray* arg3) {
  ((QDataWidgetMapper*)qthis)->addMapping(arg1,
arg2,
*((const QByteArray*)arg3));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 68, column 17>
//   // proto:  QModelIndex QDataWidgetMapper::rootIndex();
// _ZNK17QDataWidgetMapper9rootIndexEv rootIndex()
extern "C"
QModelIndex*
C_ZNK17QDataWidgetMapper9rootIndexEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->rootIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 96, column 18>
//   // proto:  void QDataWidgetMapper::setCurrentIndex(int index);
// _ZN17QDataWidgetMapper15setCurrentIndexEi setCurrentIndex(int)
extern "C"
void
C_ZN17QDataWidgetMapper15setCurrentIndexEi(void *qthis,
int arg1) {
  ((QDataWidgetMapper*)qthis)->setCurrentIndex(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 61, column 10>
//   // proto:  void QDataWidgetMapper::setModel(QAbstractItemModel * model);
// _ZN17QDataWidgetMapper8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN17QDataWidgetMapper8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QDataWidgetMapper*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 70, column 10>
//   // proto:  void QDataWidgetMapper::setOrientation(Qt::Orientation aOrientation);
// _ZN17QDataWidgetMapper14setOrientationEN2Qt11OrientationE setOrientation(Qt::Orientation)
extern "C"
void
C_ZN17QDataWidgetMapper14setOrientationEN2Qt11OrientationE(void *qthis,
Qt::Orientation* arg1) {
  ((QDataWidgetMapper*)qthis)->setOrientation(*((Qt::Orientation*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 76, column 18>
//   // proto:  QDataWidgetMapper::SubmitPolicy QDataWidgetMapper::submitPolicy();
// _ZNK17QDataWidgetMapper12submitPolicyEv submitPolicy()
extern "C"
QDataWidgetMapper::SubmitPolicy
C_ZNK17QDataWidgetMapper12submitPolicyEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->submitPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 83, column 14>
//   // proto:  QWidget * QDataWidgetMapper::mappedWidgetAt(int section);
// _ZNK17QDataWidgetMapper14mappedWidgetAtEi mappedWidgetAt(int)
extern "C"
void*
C_ZNK17QDataWidgetMapper14mappedWidgetAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->mappedWidgetAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 80, column 10>
//   // proto:  void QDataWidgetMapper::removeMapping(QWidget * widget);
// _ZN17QDataWidgetMapper13removeMappingEP7QWidget removeMapping(class QWidget *)
extern "C"
void
C_ZN17QDataWidgetMapper13removeMappingEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QDataWidgetMapper*)qthis)->removeMapping(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 92, column 10>
//   // proto:  void QDataWidgetMapper::toFirst();
// _ZN17QDataWidgetMapper7toFirstEv toFirst()
extern "C"
void
C_ZN17QDataWidgetMapper7toFirstEv(void *qthis) {
  ((QDataWidgetMapper*)qthis)->toFirst();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 100, column 10>
//   // proto:  void QDataWidgetMapper::currentIndexChanged(int index);
// _ZN17QDataWidgetMapper19currentIndexChangedEi currentIndexChanged(int)
extern "C"
void
C_ZN17QDataWidgetMapper19currentIndexChangedEi(void *qthis,
int arg1) {
  ((QDataWidgetMapper*)qthis)->currentIndexChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 95, column 10>
//   // proto:  void QDataWidgetMapper::toPrevious();
// _ZN17QDataWidgetMapper10toPreviousEv toPrevious()
extern "C"
void
C_ZN17QDataWidgetMapper10toPreviousEv(void *qthis) {
  ((QDataWidgetMapper*)qthis)->toPrevious();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 67, column 10>
//   // proto:  void QDataWidgetMapper::setRootIndex(const QModelIndex & index);
// _ZN17QDataWidgetMapper12setRootIndexERK11QModelIndex setRootIndex(const class QModelIndex &)
extern "C"
void
C_ZN17QDataWidgetMapper12setRootIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QDataWidgetMapper*)qthis)->setRootIndex(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 89, column 10>
//   // proto:  void QDataWidgetMapper::revert();
// _ZN17QDataWidgetMapper6revertEv revert()
extern "C"
void
C_ZN17QDataWidgetMapper6revertEv(void *qthis) {
  ((QDataWidgetMapper*)qthis)->revert();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 84, column 10>
//   // proto:  void QDataWidgetMapper::clearMapping();
// _ZN17QDataWidgetMapper12clearMappingEv clearMapping()
extern "C"
void
C_ZN17QDataWidgetMapper12clearMappingEv(void *qthis) {
  ((QDataWidgetMapper*)qthis)->clearMapping();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 71, column 21>
//   // proto:  Qt::Orientation QDataWidgetMapper::orientation();
// _ZNK17QDataWidgetMapper11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK17QDataWidgetMapper11orientationEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 81, column 9>
//   // proto:  int QDataWidgetMapper::mappedSection(QWidget * widget);
// _ZNK17QDataWidgetMapper13mappedSectionEP7QWidget mappedSection(class QWidget *)
extern "C"
int
C_ZNK17QDataWidgetMapper13mappedSectionEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->mappedSection(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 82, column 16>
//   // proto:  QByteArray QDataWidgetMapper::mappedPropertyName(QWidget * widget);
// _ZNK17QDataWidgetMapper18mappedPropertyNameEP7QWidget mappedPropertyName(class QWidget *)
extern "C"
QByteArray*
C_ZNK17QDataWidgetMapper18mappedPropertyNameEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->mappedPropertyName(arg1);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 64, column 10>
//   // proto:  void QDataWidgetMapper::setItemDelegate(QAbstractItemDelegate * delegate);
// _ZN17QDataWidgetMapper15setItemDelegateEP21QAbstractItemDelegate setItemDelegate(class QAbstractItemDelegate *)
extern "C"
void
C_ZN17QDataWidgetMapper15setItemDelegateEP21QAbstractItemDelegate(void *qthis,
QAbstractItemDelegate * arg1) {
  ((QDataWidgetMapper*)qthis)->setItemDelegate(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 97, column 10>
//   // proto:  void QDataWidgetMapper::setCurrentModelIndex(const QModelIndex & index);
// _ZN17QDataWidgetMapper20setCurrentModelIndexERK11QModelIndex setCurrentModelIndex(const class QModelIndex &)
extern "C"
void
C_ZN17QDataWidgetMapper20setCurrentModelIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QDataWidgetMapper*)qthis)->setCurrentModelIndex(*((const QModelIndex*)arg1));
}
//   // proto:  void QDataWidgetMapper::~QDataWidgetMapper();
extern "C"
void C_ZN17QDataWidgetMapperD2Ev(void *qthis) {
  delete (QDataWidgetMapper*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 78, column 10>
//   // proto:  void QDataWidgetMapper::addMapping(QWidget * widget, int section);
// _ZN17QDataWidgetMapper10addMappingEP7QWidgeti addMapping(class QWidget *, int)
extern "C"
void
C_ZN17QDataWidgetMapper10addMappingEP7QWidgeti(void *qthis,
QWidget * arg1,
int arg2) {
  ((QDataWidgetMapper*)qthis)->addMapping(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 58, column 14>
//   // proto:  void QDataWidgetMapper::QDataWidgetMapper(QObject * parent);
extern "C"
QDataWidgetMapper*
C_ZN17QDataWidgetMapperC2EP7QObject(QObject * arg1) {
  auto ret = new QDataWidgetMapper(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 75, column 10>
//   // proto:  void QDataWidgetMapper::setSubmitPolicy(QDataWidgetMapper::SubmitPolicy policy);
// _ZN17QDataWidgetMapper15setSubmitPolicyENS_12SubmitPolicyE setSubmitPolicy(enum QDataWidgetMapper::SubmitPolicy)
extern "C"
void
C_ZN17QDataWidgetMapper15setSubmitPolicyENS_12SubmitPolicyE(void *qthis,
QDataWidgetMapper::SubmitPolicy arg1) {
  ((QDataWidgetMapper*)qthis)->setSubmitPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 51, column 5>
//   // proto:  const QMetaObject * QDataWidgetMapper::metaObject();
// _ZNK17QDataWidgetMapper10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QDataWidgetMapper10metaObjectEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 93, column 10>
//   // proto:  void QDataWidgetMapper::toLast();
// _ZN17QDataWidgetMapper6toLastEv toLast()
extern "C"
void
C_ZN17QDataWidgetMapper6toLastEv(void *qthis) {
  ((QDataWidgetMapper*)qthis)->toLast();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 62, column 25>
//   // proto:  QAbstractItemModel * QDataWidgetMapper::model();
// _ZNK17QDataWidgetMapper5modelEv model()
extern "C"
void*
C_ZNK17QDataWidgetMapper5modelEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 65, column 28>
//   // proto:  QAbstractItemDelegate * QDataWidgetMapper::itemDelegate();
// _ZNK17QDataWidgetMapper12itemDelegateEv itemDelegate()
extern "C"
void*
C_ZNK17QDataWidgetMapper12itemDelegateEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->itemDelegate();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 90, column 10>
//   // proto:  bool QDataWidgetMapper::submit();
// _ZN17QDataWidgetMapper6submitEv submit()
extern "C"
bool
C_ZN17QDataWidgetMapper6submitEv(void *qthis) {
  auto ret =
  ((QDataWidgetMapper*)qthis)->submit();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qdatawidgetmapper.h', line 94, column 10>
//   // proto:  void QDataWidgetMapper::toNext();
// _ZN17QDataWidgetMapper6toNextEv toNext()
extern "C"
void
C_ZN17QDataWidgetMapper6toNextEv(void *qthis) {
  ((QDataWidgetMapper*)qthis)->toNext();
}
// <= ext block end

// body block begin =>
// QDataWidgetMapper_SlotProxy here
class QDataWidgetMapper_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QDataWidgetMapper_SlotProxy():QObject(){}

public slots:
  // currentIndexChanged(int)
  void slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0);
public:
  void (*slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi)(void* rsfptr, int arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qdatawidgetmapper.moc"

extern "C" {
  QDataWidgetMapper_SlotProxy* QDataWidgetMapper_SlotProxy_new()
  {
    return new QDataWidgetMapper_SlotProxy();
  }
};

void QDataWidgetMapper_SlotProxy::slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0) {
  if (this->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi != NULL) {
    // do smth...
    this->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QDataWidgetMapper_SlotProxy_connect__ZN17QDataWidgetMapper19currentIndexChangedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QDataWidgetMapper_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi = (decltype(that->slot_func__ZN17QDataWidgetMapper19currentIndexChangedEi))ffifptr;
  QObject::connect((QDataWidgetMapper*)sender, SIGNAL(currentIndexChanged(int)), that, SLOT(slot_proxy_func__ZN17QDataWidgetMapper19currentIndexChangedEi(int arg0)));
  return that;
}
extern "C"
void QDataWidgetMapper_SlotProxy_disconnect__ZN17QDataWidgetMapper19currentIndexChangedEi(QDataWidgetMapper_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

