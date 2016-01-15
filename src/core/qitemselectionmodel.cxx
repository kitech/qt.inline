#include <qabstractitemmodel.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qitemselectionmodel.h
// dst-file: /src/core/qitemselectionmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qitemselectionmodel.h>

extern "C" {

int QItemSelection_Class_Size()
{
  return sizeof(QItemSelection);
}

int QItemSelectionRange_Class_Size()
{
  return sizeof(QItemSelectionRange);
}

int QItemSelectionModel_Class_Size()
{
  return sizeof(QItemSelectionModel);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qitemselectionmodel_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 238, column 5>
//   // proto:  void QItemSelection::QItemSelection();
if (false) {
  auto f = []() {
    new QItemSelection();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 59, column 16>
//   // proto:  int QItemSelectionRange::left();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->left();
  };
}
// _ZNK19QItemSelectionRange4leftEv left()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 70, column 17>
//   // proto:  bool QItemSelectionRange::contains(const QModelIndex & index);
if (false) {
  auto f = [](const QModelIndex & arg1) {
    ((QItemSelectionRange*)0)->contains(arg1);
  };
}
// _ZNK19QItemSelectionRange8containsERK11QModelIndex contains(const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 60, column 16>
//   // proto:  int QItemSelectionRange::bottom();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->bottom();
  };
}
// _ZNK19QItemSelectionRange6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 121, column 17>
//   // proto:  bool QItemSelectionRange::isValid();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->isValid();
  };
}
// _ZNK19QItemSelectionRange7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 68, column 38>
//   // proto:  const QAbstractItemModel * QItemSelectionRange::model();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->model();
  };
}
// _ZNK19QItemSelectionRange5modelEv model()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 63, column 16>
//   // proto:  int QItemSelectionRange::height();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->height();
  };
}
// _ZNK19QItemSelectionRange6heightEv height()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 61, column 16>
//   // proto:  int QItemSelectionRange::right();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->right();
  };
}
// _ZNK19QItemSelectionRange5rightEv right()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 67, column 24>
//   // proto:  QModelIndex QItemSelectionRange::parent();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->parent();
  };
}
// _ZNK19QItemSelectionRange6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 51, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange();
if (false) {
  auto f = []() {
    new QItemSelectionRange();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 62, column 16>
//   // proto:  int QItemSelectionRange::width();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->width();
  };
}
// _ZNK19QItemSelectionRange5widthEv width()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 54, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight);
if (false) {
  auto f = [](const QModelIndex & arg1, const QModelIndex & arg2) {
    new QItemSelectionRange(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 65, column 41>
//   // proto:  const QPersistentModelIndex & QItemSelectionRange::topLeft();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->topLeft();
  };
}
// _ZNK19QItemSelectionRange7topLeftEv topLeft()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 77, column 17>
//   // proto:  bool QItemSelectionRange::contains(int row, int column, const QModelIndex & parentIndex);
if (false) {
  auto f = [](int arg1, int arg2, const QModelIndex & arg3) {
    ((QItemSelectionRange*)0)->contains(arg1, arg2, arg3);
  };
}
// _ZNK19QItemSelectionRange8containsEiiRK11QModelIndex contains(int, int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 55, column 21>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & index);
if (false) {
  auto f = [](const QModelIndex & arg1) {
    new QItemSelectionRange(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 66, column 41>
//   // proto:  const QPersistentModelIndex & QItemSelectionRange::bottomRight();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->bottomRight();
  };
}
// _ZNK19QItemSelectionRange11bottomRightEv bottomRight()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 58, column 16>
//   // proto:  int QItemSelectionRange::top();
if (false) {
  auto f = []() {
    ((QItemSelectionRange*)0)->top();
  };
}
// _ZNK19QItemSelectionRange3topEv top()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 52, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange & other);
if (false) {
  auto f = [](const QItemSelectionRange & arg1) {
    new QItemSelectionRange(arg1);
  };
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QItemSelectionModel_SlotProxy here
class QItemSelectionModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QItemSelectionModel_SlotProxy():QObject(){}

public slots:
  // selectionChanged(const class QItemSelection &, const class QItemSelection &)
  void slot_proxy_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(const QItemSelection & arg0, const QItemSelection & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_)(void* rsfptr, const QItemSelection & arg0, const QItemSelection & arg1) = NULL;
public slots:
  // currentRowChanged(const class QModelIndex &, const class QModelIndex &)
  void slot_proxy_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_)(void* rsfptr, const QModelIndex & arg0, const QModelIndex & arg1) = NULL;
public slots:
  // currentColumnChanged(const class QModelIndex &, const class QModelIndex &)
  void slot_proxy_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_)(void* rsfptr, const QModelIndex & arg0, const QModelIndex & arg1) = NULL;
public slots:
  // currentChanged(const class QModelIndex &, const class QModelIndex &)
  void slot_proxy_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_)(void* rsfptr, const QModelIndex & arg0, const QModelIndex & arg1) = NULL;
public slots:
  // modelChanged(class QAbstractItemModel *)
  void slot_proxy_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QAbstractItemModel * arg0);
public:
  void (*slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel)(void* rsfptr, QAbstractItemModel * arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/core/qitemselectionmodel.moc"

extern "C" {
  QItemSelectionModel_SlotProxy* QItemSelectionModel_SlotProxy_new()
  {
    return new QItemSelectionModel_SlotProxy();
  }
};

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(const QItemSelection & arg0, const QItemSelection & arg1) {
  if (this->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_ != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_))ffifptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(selectionChanged(const class QItemSelection &, const class QItemSelection &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(const QItemSelection & arg0, const QItemSelection & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1) {
  if (this->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_ != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_))ffifptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(currentRowChanged(const class QModelIndex &, const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1) {
  if (this->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_ != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_))ffifptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(currentColumnChanged(const class QModelIndex &, const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1) {
  if (this->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_ != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_))ffifptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(currentChanged(const class QModelIndex &, const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QAbstractItemModel * arg0) {
  if (this->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(this->rsfptr, arg0);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel = (decltype(that->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel))ffifptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(modelChanged(class QAbstractItemModel *)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QAbstractItemModel * arg0)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

