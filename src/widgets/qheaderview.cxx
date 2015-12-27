// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtWidgets/qheaderview.h
// dst-file: /src/widgets/qheaderview.cxx
//

// header block begin =>
#include <qheaderview.h>

extern "C" {

int QHeaderView_Class_Size()
{
  return sizeof(QHeaderView);
}

// ~QHeaderView()
void dedtor_ZN11QHeaderViewD0Ev(QHeaderView* that)
{
  QHeaderView* rthis = (QHeaderView*)that;
  delete rthis;
}

// QHeaderView(Qt::Orientation, class QWidget *)
QHeaderView* dector_ZN11QHeaderViewC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent)
{
  // static_assert(sizeof(QHeaderView) == 32, "tyszerr");
  QHeaderView* rthis = new QHeaderView(orientation, parent);
  return rthis;
}

  // proto:  void QHeaderView::hideSection(int logicalIndex);
void demth_ZN11QHeaderView11hideSectionEi(void *that, int logicalIndex)
{
  QHeaderView *cthat = (QHeaderView *)that;
   cthat->hideSection(logicalIndex);
}

  // proto:  int QHeaderView::logicalIndexAt(const QPoint & pos);
int demth_ZNK11QHeaderView14logicalIndexAtERK6QPoint(void *that, const QPoint & pos)
{
  QHeaderView *cthat = (QHeaderView *)that;
  return cthat->logicalIndexAt(pos);
}

  // proto:  void QHeaderView::showSection(int logicalIndex);
void demth_ZN11QHeaderView11showSectionEi(void *that, int logicalIndex)
{
  QHeaderView *cthat = (QHeaderView *)that;
   cthat->showSection(logicalIndex);
}

  // proto:  int QHeaderView::logicalIndexAt(int x, int y);
int demth_ZNK11QHeaderView14logicalIndexAtEii(void *that, int x, int y)
{
  QHeaderView *cthat = (QHeaderView *)that;
  return cthat->logicalIndexAt(x, y);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
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
  // sectionMoved(int, int, int)
  void slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN11QHeaderView12sectionMovedEiii)(int arg0, int arg1, int arg2) = NULL;
public slots:
  // sectionResized(int, int, int)
  void slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN11QHeaderView14sectionResizedEiii)(int arg0, int arg1, int arg2) = NULL;
public slots:
  // sectionPressed(int)
  void slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionPressedEi)(int arg0) = NULL;
public slots:
  // sectionClicked(int)
  void slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionClickedEi)(int arg0) = NULL;
public slots:
  // sectionEntered(int)
  void slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionEnteredEi)(int arg0) = NULL;
public slots:
  // sectionDoubleClicked(int)
  void slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView20sectionDoubleClickedEi)(int arg0) = NULL;
public slots:
  // sectionCountChanged(int, int)
  void slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN11QHeaderView19sectionCountChangedEii)(int arg0, int arg1) = NULL;
public slots:
  // sectionHandleDoubleClicked(int)
  void slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi)(int arg0) = NULL;
public slots:
  // geometriesChanged()
  void slot_proxy_func__ZN11QHeaderView17geometriesChangedEv();
public:
  void (*slot_func__ZN11QHeaderView17geometriesChangedEv)() = NULL;
public slots:
  // sortIndicatorChanged(int, Qt::SortOrder)
  void slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1);
public:
  void (*slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE)(int arg0, Qt::SortOrder arg1) = NULL;
};
#include "src/widgets/qheaderview.moc"

extern "C" {
  QHeaderView_SlotProxy* QHeaderView_SlotProxy_new()
  {
    return new QHeaderView_SlotProxy();
  }
};

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN11QHeaderView12sectionMovedEiii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView12sectionMovedEiii(arg0, arg1, arg2);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView12sectionMovedEiii(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView12sectionMovedEiii = (decltype(that->slot_func__ZN11QHeaderView12sectionMovedEiii))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionMoved(int, int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView12sectionMovedEiii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN11QHeaderView14sectionResizedEiii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionResizedEiii(arg0, arg1, arg2);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionResizedEiii(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView14sectionResizedEiii = (decltype(that->slot_func__ZN11QHeaderView14sectionResizedEiii))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionResized(int, int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionResizedEiii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionPressedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionPressedEi(arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionPressedEi(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView14sectionPressedEi = (decltype(that->slot_func__ZN11QHeaderView14sectionPressedEi))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionPressed(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionPressedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionClickedEi(arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionClickedEi(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView14sectionClickedEi = (decltype(that->slot_func__ZN11QHeaderView14sectionClickedEi))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionEnteredEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionEnteredEi(arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionEnteredEi(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView14sectionEnteredEi = (decltype(that->slot_func__ZN11QHeaderView14sectionEnteredEi))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionEntered(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionEnteredEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView20sectionDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView20sectionDoubleClickedEi(arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView20sectionDoubleClickedEi(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView20sectionDoubleClickedEi = (decltype(that->slot_func__ZN11QHeaderView20sectionDoubleClickedEi))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView20sectionDoubleClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN11QHeaderView19sectionCountChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView19sectionCountChangedEii(arg0, arg1);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView19sectionCountChangedEii(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView19sectionCountChangedEii = (decltype(that->slot_func__ZN11QHeaderView19sectionCountChangedEii))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionCountChanged(int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView19sectionCountChangedEii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView26sectionHandleDoubleClickedEi(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi = (decltype(that->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionHandleDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView26sectionHandleDoubleClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView17geometriesChangedEv() {
  if (this->slot_func__ZN11QHeaderView17geometriesChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView17geometriesChangedEv();
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView17geometriesChangedEv(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView17geometriesChangedEv = (decltype(that->slot_func__ZN11QHeaderView17geometriesChangedEv))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(geometriesChanged()), that, SLOT(slot_proxy_func__ZN11QHeaderView17geometriesChangedEv()));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView17geometriesChangedEv(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1) {
  if (this->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(arg0, arg1);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(QObject* sender, void* fptr){
  auto that = new QHeaderView_SlotProxy();
  that->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE = (decltype(that->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE))fptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sortIndicatorChanged(int, Qt::SortOrder)), that, SLOT(slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

