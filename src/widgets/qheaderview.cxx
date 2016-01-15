// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtWidgets/qheaderview.h
// dst-file: /src/widgets/qheaderview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qheaderview.h>

extern "C" {

int QHeaderView_Class_Size()
{
  return sizeof(QHeaderView);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qheaderview_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 102, column 17>
//   // proto:  void QHeaderView::hideSection(int logicalIndex);
if (false) {
  auto f = [](int arg1) {
    ((QHeaderView*)0)->hideSection(arg1);
  };
}
// _ZN11QHeaderView11hideSectionEi hideSection(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 87, column 16>
//   // proto:  int QHeaderView::logicalIndexAt(const QPoint & pos);
if (false) {
  auto f = [](const QPoint & arg1) {
    ((QHeaderView*)0)->logicalIndexAt(arg1);
  };
}
// _ZNK11QHeaderView14logicalIndexAtERK6QPoint logicalIndexAt(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 103, column 17>
//   // proto:  void QHeaderView::showSection(int logicalIndex);
if (false) {
  auto f = [](int arg1) {
    ((QHeaderView*)0)->showSection(arg1);
  };
}
// _ZN11QHeaderView11showSectionEi showSection(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 86, column 16>
//   // proto:  int QHeaderView::logicalIndexAt(int x, int y);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QHeaderView*)0)->logicalIndexAt(arg1, arg2);
  };
}
// _ZNK11QHeaderView14logicalIndexAtEii logicalIndexAt(int, int)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// QHeaderView_SlotProxy here
class QHeaderView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHeaderView_SlotProxy():QObject(){}

public slots:
  // sectionEntered(int)
  void slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionEnteredEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // geometriesChanged()
  void slot_proxy_func__ZN11QHeaderView17geometriesChangedEv();
public:
  void (*slot_func__ZN11QHeaderView17geometriesChangedEv)(void* rsfptr) = NULL;
public slots:
  // sectionClicked(int)
  void slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionMoved(int, int, int)
  void slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN11QHeaderView12sectionMovedEiii)(void* rsfptr, int arg0, int arg1, int arg2) = NULL;
public slots:
  // sectionPressed(int)
  void slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionPressedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionDoubleClicked(int)
  void slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView20sectionDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionHandleDoubleClicked(int)
  void slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionResized(int, int, int)
  void slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN11QHeaderView14sectionResizedEiii)(void* rsfptr, int arg0, int arg1, int arg2) = NULL;
public slots:
  // sectionCountChanged(int, int)
  void slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN11QHeaderView19sectionCountChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // sortIndicatorChanged(int, Qt::SortOrder)
  void slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1);
public:
  void (*slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE)(void* rsfptr, int arg0, Qt::SortOrder arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qheaderview.moc"

extern "C" {
  QHeaderView_SlotProxy* QHeaderView_SlotProxy_new()
  {
    return new QHeaderView_SlotProxy();
  }
};

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionEnteredEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionEnteredEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionEnteredEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionEnteredEi = (decltype(that->slot_func__ZN11QHeaderView14sectionEnteredEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionEntered(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionEnteredEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView17geometriesChangedEv() {
  if (this->slot_func__ZN11QHeaderView17geometriesChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView17geometriesChangedEv(this->rsfptr);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView17geometriesChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView17geometriesChangedEv = (decltype(that->slot_func__ZN11QHeaderView17geometriesChangedEv))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(geometriesChanged()), that, SLOT(slot_proxy_func__ZN11QHeaderView17geometriesChangedEv()));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView17geometriesChangedEv(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionClickedEi = (decltype(that->slot_func__ZN11QHeaderView14sectionClickedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN11QHeaderView12sectionMovedEiii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView12sectionMovedEiii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView12sectionMovedEiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView12sectionMovedEiii = (decltype(that->slot_func__ZN11QHeaderView12sectionMovedEiii))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionMoved(int, int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView12sectionMovedEiii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionPressedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionPressedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionPressedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionPressedEi = (decltype(that->slot_func__ZN11QHeaderView14sectionPressedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionPressed(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionPressedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView20sectionDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView20sectionDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView20sectionDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView20sectionDoubleClickedEi = (decltype(that->slot_func__ZN11QHeaderView20sectionDoubleClickedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView20sectionDoubleClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView26sectionHandleDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi = (decltype(that->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionHandleDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView26sectionHandleDoubleClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN11QHeaderView14sectionResizedEiii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionResizedEiii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionResizedEiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionResizedEiii = (decltype(that->slot_func__ZN11QHeaderView14sectionResizedEiii))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionResized(int, int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionResizedEiii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN11QHeaderView19sectionCountChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView19sectionCountChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView19sectionCountChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView19sectionCountChangedEii = (decltype(that->slot_func__ZN11QHeaderView19sectionCountChangedEii))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionCountChanged(int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView19sectionCountChangedEii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1) {
  if (this->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE = (decltype(that->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sortIndicatorChanged(int, Qt::SortOrder)), that, SLOT(slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

