// auto generated, do not modify.
// created: Tue Dec 29 23:36:58 2015
// src-file: /QtWidgets/qlistview.h
// dst-file: /src/widgets/qlistview.cxx
//

// header block begin =>
#include <qlistview.h>

extern "C" {

int QListView_Class_Size()
{
  return sizeof(QListView);
}

// QListView(class QWidget *)
QListView* dector_ZN9QListViewC1EP7QWidget(QWidget * parent)
{
  // static_assert(sizeof(QListView) == 32, "tyszerr");
  QListView* rthis = new QListView(parent);
  return rthis;
}

// ~QListView()
void dedtor_ZN9QListViewD0Ev(QListView* that)
{
  QListView* rthis = (QListView*)that;
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
// QListView_SlotProxy here
class QListView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QListView_SlotProxy():QObject(){}

public slots:
  // indexesMoved(const QModelIndexList &)
  void slot_proxy_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(const QModelIndexList & arg0);
public:
  void (*slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE)(void* rsfptr, const QModelIndexList & arg0) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qlistview.moc"

extern "C" {
  QListView_SlotProxy* QListView_SlotProxy_new()
  {
    return new QListView_SlotProxy();
  }
};

void QListView_SlotProxy::slot_proxy_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(const QModelIndexList & arg0) {
  if (this->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE != NULL) {
    // do smth...
    this->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(this->rsfptr, arg0);
  }
}
extern "C"
void* QListView_SlotProxy_connect__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QListView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE = (decltype(that->slot_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE))ffifptr;
  QObject::connect((QListView*)sender, SIGNAL(indexesMoved(const QModelIndexList &)), that, SLOT(slot_proxy_func__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(const QModelIndexList & arg0)));
  return that;
}
extern "C"
void QListView_SlotProxy_disconnect__ZN9QListView12indexesMovedERK5QListI11QModelIndexE(QListView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

