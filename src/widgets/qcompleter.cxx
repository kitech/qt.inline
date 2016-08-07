// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qcompleter.h
// dst-file: /src/widgets/qcompleter.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qcompleter.h>


#include <qabstractitemmodel.h>
#include <qstring.h>
#include <qnamespace.h>
#include <qstringlist.h>
// <= header block end

// main block begin =>
void __keep_qcompleter_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QCompleter_Class_Size()
{
  return sizeof(QCompleter);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 107, column 10>
//   // proto:  void QCompleter::setCaseSensitivity(Qt::CaseSensitivity caseSensitivity);
// _ZN10QCompleter18setCaseSensitivityEN2Qt15CaseSensitivityE setCaseSensitivity(Qt::CaseSensitivity)
extern "C"
void
C_ZN10QCompleter18setCaseSensitivityEN2Qt15CaseSensitivityE(void *qthis,
Qt::CaseSensitivity* arg1) {
  ((QCompleter*)qthis)->setCaseSensitivity(*((Qt::CaseSensitivity*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 85, column 5>
//   // proto:  void QCompleter::QCompleter(QObject * parent);
extern "C"
QCompleter*
C_ZN10QCompleterC2EP7QObject(QObject * arg1) {
  auto ret = new QCompleter(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 61, column 5>
//   // proto:  const QMetaObject * QCompleter::metaObject();
// _ZNK10QCompleter10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QCompleter10metaObjectEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 104, column 24>
//   // proto:  QAbstractItemView * QCompleter::popup();
// _ZNK10QCompleter5popupEv popup()
extern "C"
void*
C_ZNK10QCompleter5popupEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->popup();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 137, column 10>
//   // proto:  void QCompleter::complete(const QRect & rect);
// _ZN10QCompleter8completeERK5QRect complete(const class QRect &)
extern "C"
void
C_ZN10QCompleter8completeERK5QRect(void *qthis,
const QRect* arg1) {
  ((QCompleter*)qthis)->complete(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 150, column 10>
//   // proto:  void QCompleter::activated(const QModelIndex & index);
// _ZN10QCompleter9activatedERK11QModelIndex activated(const class QModelIndex &)
extern "C"
void
C_ZN10QCompleter9activatedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QCompleter*)qthis)->activated(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 116, column 10>
//   // proto:  void QCompleter::setCompletionRole(int role);
// _ZN10QCompleter17setCompletionRoleEi setCompletionRole(int)
extern "C"
void
C_ZN10QCompleter17setCompletionRoleEi(void *qthis,
int arg1) {
  ((QCompleter*)qthis)->setCompletionRole(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 124, column 9>
//   // proto:  int QCompleter::completionCount();
// _ZNK10QCompleter15completionCountEv completionCount()
extern "C"
int
C_ZNK10QCompleter15completionCountEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->completionCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 88, column 5>
//   // proto:  void QCompleter::QCompleter(const QStringList & completions, QObject * parent);
extern "C"
QCompleter*
C_ZN10QCompleterC2ERK11QStringListP7QObject(const QStringList* arg1,
QObject * arg2) {
  auto ret = new QCompleter(*((const QStringList*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 128, column 17>
//   // proto:  QModelIndex QCompleter::currentIndex();
// _ZNK10QCompleter12currentIndexEv currentIndex()
extern "C"
QModelIndex*
C_ZNK10QCompleter12currentIndexEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->currentIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 99, column 20>
//   // proto:  QCompleter::CompletionMode QCompleter::completionMode();
// _ZNK10QCompleter14completionModeEv completionMode()
extern "C"
QCompleter::CompletionMode
C_ZNK10QCompleter14completionModeEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->completionMode();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 141, column 21>
//   // proto:  QString QCompleter::pathFromIndex(const QModelIndex & index);
// _ZNK10QCompleter13pathFromIndexERK11QModelIndex pathFromIndex(const class QModelIndex &)
extern "C"
QString*
C_ZNK10QCompleter13pathFromIndexERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QCompleter*)qthis)->pathFromIndex(*((const QModelIndex*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 108, column 25>
//   // proto:  Qt::CaseSensitivity QCompleter::caseSensitivity();
// _ZNK10QCompleter15caseSensitivityEv caseSensitivity()
extern "C"
Qt::CaseSensitivity
C_ZNK10QCompleter15caseSensitivityEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->caseSensitivity();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 152, column 10>
//   // proto:  void QCompleter::highlighted(const QModelIndex & index);
// _ZN10QCompleter11highlightedERK11QModelIndex highlighted(const class QModelIndex &)
extern "C"
void
C_ZN10QCompleter11highlightedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  ((QCompleter*)qthis)->highlighted(*((const QModelIndex*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 122, column 10>
//   // proto:  void QCompleter::setMaxVisibleItems(int maxItems);
// _ZN10QCompleter18setMaxVisibleItemsEi setMaxVisibleItems(int)
extern "C"
void
C_ZN10QCompleter18setMaxVisibleItemsEi(void *qthis,
int arg1) {
  ((QCompleter*)qthis)->setMaxVisibleItems(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 114, column 10>
//   // proto:  int QCompleter::completionColumn();
// _ZNK10QCompleter16completionColumnEv completionColumn()
extern "C"
int
C_ZNK10QCompleter16completionColumnEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->completionColumn();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 121, column 9>
//   // proto:  int QCompleter::maxVisibleItems();
// _ZNK10QCompleter15maxVisibleItemsEv maxVisibleItems()
extern "C"
int
C_ZNK10QCompleter15maxVisibleItemsEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->maxVisibleItems();
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QCompleter::~QCompleter();
extern "C"
void C_ZN10QCompleterD2Ev(void *qthis) {
  delete (QCompleter*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 138, column 10>
//   // proto:  void QCompleter::setWrapAround(bool wrap);
// _ZN10QCompleter13setWrapAroundEb setWrapAround(_Bool)
extern "C"
void
C_ZN10QCompleter13setWrapAroundEb(void *qthis,
bool arg1) {
  ((QCompleter*)qthis)->setWrapAround(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 142, column 25>
//   // proto:  QStringList QCompleter::splitPath(const QString & path);
// _ZNK10QCompleter9splitPathERK7QString splitPath(const class QString &)
extern "C"
QStringList*
C_ZNK10QCompleter9splitPathERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QCompleter*)qthis)->splitPath(*((const QString*)arg1));
  return new QStringList(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 96, column 25>
//   // proto:  QAbstractItemModel * QCompleter::model();
// _ZNK10QCompleter5modelEv model()
extern "C"
void*
C_ZNK10QCompleter5modelEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 129, column 13>
//   // proto:  QString QCompleter::currentCompletion();
// _ZNK10QCompleter17currentCompletionEv currentCompletion()
extern "C"
QString*
C_ZNK10QCompleter17currentCompletionEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->currentCompletion();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 111, column 18>
//   // proto:  QCompleter::ModelSorting QCompleter::modelSorting();
// _ZNK10QCompleter12modelSortingEv modelSorting()
extern "C"
QCompleter::ModelSorting
C_ZNK10QCompleter12modelSortingEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->modelSorting();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 113, column 10>
//   // proto:  void QCompleter::setCompletionColumn(int column);
// _ZN10QCompleter19setCompletionColumnEi setCompletionColumn(int)
extern "C"
void
C_ZN10QCompleter19setCompletionColumnEi(void *qthis,
int arg1) {
  ((QCompleter*)qthis)->setCompletionColumn(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 98, column 10>
//   // proto:  void QCompleter::setCompletionMode(QCompleter::CompletionMode mode);
// _ZN10QCompleter17setCompletionModeENS_14CompletionModeE setCompletionMode(enum QCompleter::CompletionMode)
extern "C"
void
C_ZN10QCompleter17setCompletionModeENS_14CompletionModeE(void *qthis,
QCompleter::CompletionMode arg1) {
  ((QCompleter*)qthis)->setCompletionMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 151, column 10>
//   // proto:  void QCompleter::highlighted(const QString & text);
// _ZN10QCompleter11highlightedERK7QString highlighted(const class QString &)
extern "C"
void
C_ZN10QCompleter11highlightedERK7QString(void *qthis,
const QString* arg1) {
  ((QCompleter*)qthis)->highlighted(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 136, column 10>
//   // proto:  void QCompleter::setCompletionPrefix(const QString & prefix);
// _ZN10QCompleter19setCompletionPrefixERK7QString setCompletionPrefix(const class QString &)
extern "C"
void
C_ZN10QCompleter19setCompletionPrefixERK7QString(void *qthis,
const QString* arg1) {
  ((QCompleter*)qthis)->setCompletionPrefix(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 101, column 10>
//   // proto:  void QCompleter::setFilterMode(Qt::MatchFlags filterMode);
// _ZN10QCompleter13setFilterModeE6QFlagsIN2Qt9MatchFlagEE setFilterMode(Qt::MatchFlags)
extern "C"
void
C_ZN10QCompleter13setFilterModeE6QFlagsIN2Qt9MatchFlagEE(void *qthis,
Qt::MatchFlags* arg1) {
  ((QCompleter*)qthis)->setFilterMode(*((Qt::MatchFlags*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 131, column 25>
//   // proto:  QAbstractItemModel * QCompleter::completionModel();
// _ZNK10QCompleter15completionModelEv completionModel()
extern "C"
void*
C_ZNK10QCompleter15completionModelEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->completionModel();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 125, column 10>
//   // proto:  bool QCompleter::setCurrentRow(int row);
// _ZN10QCompleter13setCurrentRowEi setCurrentRow(int)
extern "C"
bool
C_ZN10QCompleter13setCurrentRowEi(void *qthis,
int arg1) {
  auto ret =
  ((QCompleter*)qthis)->setCurrentRow(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 126, column 9>
//   // proto:  int QCompleter::currentRow();
// _ZNK10QCompleter10currentRowEv currentRow()
extern "C"
int
C_ZNK10QCompleter10currentRowEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->currentRow();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 149, column 10>
//   // proto:  void QCompleter::activated(const QString & text);
// _ZN10QCompleter9activatedERK7QString activated(const class QString &)
extern "C"
void
C_ZN10QCompleter9activatedERK7QString(void *qthis,
const QString* arg1) {
  ((QCompleter*)qthis)->activated(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 110, column 10>
//   // proto:  void QCompleter::setModelSorting(QCompleter::ModelSorting sorting);
// _ZN10QCompleter15setModelSortingENS_12ModelSortingE setModelSorting(enum QCompleter::ModelSorting)
extern "C"
void
C_ZN10QCompleter15setModelSortingENS_12ModelSortingE(void *qthis,
QCompleter::ModelSorting arg1) {
  ((QCompleter*)qthis)->setModelSorting(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 95, column 10>
//   // proto:  void QCompleter::setModel(QAbstractItemModel * c);
// _ZN10QCompleter8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN10QCompleter8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QCompleter*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 119, column 10>
//   // proto:  bool QCompleter::wrapAround();
// _ZNK10QCompleter10wrapAroundEv wrapAround()
extern "C"
bool
C_ZNK10QCompleter10wrapAroundEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->wrapAround();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 86, column 5>
//   // proto:  void QCompleter::QCompleter(QAbstractItemModel * model, QObject * parent);
extern "C"
QCompleter*
C_ZN10QCompleterC2EP18QAbstractItemModelP7QObject(QAbstractItemModel * arg1,
QObject * arg2) {
  auto ret = new QCompleter(arg1,
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 105, column 10>
//   // proto:  void QCompleter::setPopup(QAbstractItemView * popup);
// _ZN10QCompleter8setPopupEP17QAbstractItemView setPopup(class QAbstractItemView *)
extern "C"
void
C_ZN10QCompleter8setPopupEP17QAbstractItemView(void *qthis,
QAbstractItemView * arg1) {
  ((QCompleter*)qthis)->setPopup(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 102, column 20>
//   // proto:  Qt::MatchFlags QCompleter::filterMode();
// _ZNK10QCompleter10filterModeEv filterMode()
extern "C"
QFlags<Qt::MatchFlag>*
C_ZNK10QCompleter10filterModeEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->filterMode();
  return new QFlags<Qt::MatchFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 93, column 14>
//   // proto:  QWidget * QCompleter::widget();
// _ZNK10QCompleter6widgetEv widget()
extern "C"
void*
C_ZNK10QCompleter6widgetEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->widget();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 117, column 10>
//   // proto:  int QCompleter::completionRole();
// _ZNK10QCompleter14completionRoleEv completionRole()
extern "C"
int
C_ZNK10QCompleter14completionRoleEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->completionRole();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 133, column 13>
//   // proto:  QString QCompleter::completionPrefix();
// _ZNK10QCompleter16completionPrefixEv completionPrefix()
extern "C"
QString*
C_ZNK10QCompleter16completionPrefixEv(void *qthis) {
  auto ret =
  ((QCompleter*)qthis)->completionPrefix();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qcompleter.h', line 92, column 10>
//   // proto:  void QCompleter::setWidget(QWidget * widget);
// _ZN10QCompleter9setWidgetEP7QWidget setWidget(class QWidget *)
extern "C"
void
C_ZN10QCompleter9setWidgetEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QCompleter*)qthis)->setWidget(arg1);
}
// <= ext block end

// body block begin =>
// QCompleter_SlotProxy here
class QCompleter_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QCompleter_SlotProxy():QObject(){}

public slots:
  // highlighted(const class QModelIndex &)
  void slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN10QCompleter11highlightedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // activated(const class QString &)
  void slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QCompleter9activatedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // activated(const class QModelIndex &)
  void slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN10QCompleter9activatedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // highlighted(const class QString &)
  void slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QCompleter11highlightedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qcompleter.moc"

extern "C" {
  QCompleter_SlotProxy* QCompleter_SlotProxy_new()
  {
    return new QCompleter_SlotProxy();
  }
};

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN10QCompleter11highlightedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter11highlightedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter11highlightedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter11highlightedERK11QModelIndex = (decltype(that->slot_func__ZN10QCompleter11highlightedERK11QModelIndex))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(highlighted(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN10QCompleter11highlightedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter11highlightedERK11QModelIndex(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QCompleter9activatedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter9activatedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter9activatedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter9activatedERK7QString = (decltype(that->slot_func__ZN10QCompleter9activatedERK7QString))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(activated(const class QString &)), that, SLOT(slot_proxy_func__ZN10QCompleter9activatedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter9activatedERK7QString(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN10QCompleter9activatedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter9activatedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter9activatedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter9activatedERK11QModelIndex = (decltype(that->slot_func__ZN10QCompleter9activatedERK11QModelIndex))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(activated(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN10QCompleter9activatedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter9activatedERK11QModelIndex(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QCompleter_SlotProxy::slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QCompleter11highlightedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QCompleter11highlightedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QCompleter_SlotProxy_connect__ZN10QCompleter11highlightedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QCompleter_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QCompleter11highlightedERK7QString = (decltype(that->slot_func__ZN10QCompleter11highlightedERK7QString))ffifptr;
  QObject::connect((QCompleter*)sender, SIGNAL(highlighted(const class QString &)), that, SLOT(slot_proxy_func__ZN10QCompleter11highlightedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QCompleter_SlotProxy_disconnect__ZN10QCompleter11highlightedERK7QString(QCompleter_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

