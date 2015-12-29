// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qtreeview.h
// dst-file: /src/widgets/qtreeview.cxx
//

// header block begin =>
#include <qtreeview.h>

extern "C" {

int QTreeView_Class_Size()
{
  return sizeof(QTreeView);
}

// QTreeView(class QWidget *)
QTreeView* dector_ZN9QTreeViewC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QTreeView) == 32, "tyszerr");
  QTreeView* rthis = new QTreeView(parent);
  return rthis;
}

// ~QTreeView()
void dedtor_ZN9QTreeViewD0Ev(QTreeView* that)
{
  QTreeView* rthis = (QTreeView*)that;
  delete rthis;
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
// QTreeView_SlotProxy here
class QTreeView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QTreeView_SlotProxy():QObject(){}

public slots:
  // collapsed(const class QModelIndex &)
  void slot_proxy_func__ZN9QTreeView9collapsedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN9QTreeView9collapsedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public slots:
  // expanded(const class QModelIndex &)
  void slot_proxy_func__ZN9QTreeView8expandedERK11QModelIndex(const QModelIndex & arg0);
public:
  void (*slot_func__ZN9QTreeView8expandedERK11QModelIndex)(void* rsfptr, const QModelIndex & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qtreeview.moc"

extern "C" {
  QTreeView_SlotProxy* QTreeView_SlotProxy_new()
  {
    return new QTreeView_SlotProxy();
  }
};

void QTreeView_SlotProxy::slot_proxy_func__ZN9QTreeView9collapsedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN9QTreeView9collapsedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN9QTreeView9collapsedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeView_SlotProxy_connect__ZN9QTreeView9collapsedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTreeView9collapsedERK11QModelIndex = (decltype(that->slot_func__ZN9QTreeView9collapsedERK11QModelIndex))ffifptr;
  QObject::connect((QTreeView*)sender, SIGNAL(collapsed(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN9QTreeView9collapsedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QTreeView_SlotProxy_disconnect__ZN9QTreeView9collapsedERK11QModelIndex(QTreeView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QTreeView_SlotProxy::slot_proxy_func__ZN9QTreeView8expandedERK11QModelIndex(const QModelIndex & arg0) {
  if (this->slot_func__ZN9QTreeView8expandedERK11QModelIndex != NULL) {
    // do smth...
    this->slot_func__ZN9QTreeView8expandedERK11QModelIndex(this->rsfptr, arg0);
  }
}
extern "C"
void* QTreeView_SlotProxy_connect__ZN9QTreeView8expandedERK11QModelIndex(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QTreeView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QTreeView8expandedERK11QModelIndex = (decltype(that->slot_func__ZN9QTreeView8expandedERK11QModelIndex))ffifptr;
  QObject::connect((QTreeView*)sender, SIGNAL(expanded(const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN9QTreeView8expandedERK11QModelIndex(const QModelIndex & arg0)));
  return that;
}
extern "C"
void QTreeView_SlotProxy_disconnect__ZN9QTreeView8expandedERK11QModelIndex(QTreeView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

