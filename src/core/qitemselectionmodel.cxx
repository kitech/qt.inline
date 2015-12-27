// auto generated, do not modify.
// created: Sun Dec 27 14:55:08 2015
// src-file: /QtCore/qitemselectionmodel.h
// dst-file: /src/core/qitemselectionmodel.cxx
//

// header block begin =>
#include <qitemselectionmodel.h>

extern "C" {

int QItemSelection_Class_Size()
{
  return sizeof(QItemSelection);
}

// QItemSelection()
QItemSelection* dector_ZN14QItemSelectionC1Ev()
{
  // static_assert(sizeof(QItemSelection) == 32, "tyszerr");
  QItemSelection* rthis = new QItemSelection();
  return rthis;
}

// QItemSelection(const class QModelIndex &, const class QModelIndex &)
QItemSelection* dector_ZN14QItemSelectionC1ERK11QModelIndexS2_(const QModelIndex & topLeft, const QModelIndex & bottomRight)
{
  // static_assert(sizeof(QItemSelection) == 32, "tyszerr");
  QItemSelection* rthis = new QItemSelection(topLeft, bottomRight);
  return rthis;
}

int QItemSelectionRange_Class_Size()
{
  return sizeof(QItemSelectionRange);
}

// QItemSelectionRange()
QItemSelectionRange* dector_ZN19QItemSelectionRangeC1Ev()
{
  // static_assert(sizeof(QItemSelectionRange) == 32, "tyszerr");
  QItemSelectionRange* rthis = new QItemSelectionRange();
  return rthis;
}

// QItemSelectionRange(const class QModelIndex &, const class QModelIndex &)
QItemSelectionRange* dector_ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(const QModelIndex & topLeft, const QModelIndex & bottomRight)
{
  // static_assert(sizeof(QItemSelectionRange) == 32, "tyszerr");
  QItemSelectionRange* rthis = new QItemSelectionRange(topLeft, bottomRight);
  return rthis;
}

// QItemSelectionRange(const class QModelIndex &)
QItemSelectionRange* dector_ZN19QItemSelectionRangeC1ERK11QModelIndex(const QModelIndex & index)
{
  // static_assert(sizeof(QItemSelectionRange) == 32, "tyszerr");
  QItemSelectionRange* rthis = new QItemSelectionRange(index);
  return rthis;
}

// QItemSelectionRange(const class QItemSelectionRange &)
QItemSelectionRange* dector_ZN19QItemSelectionRangeC1ERKS_(const QItemSelectionRange & other)
{
  // static_assert(sizeof(QItemSelectionRange) == 32, "tyszerr");
  QItemSelectionRange* rthis = new QItemSelectionRange(other);
  return rthis;
}

  // proto:  int QItemSelectionRange::left();
int demth_ZNK19QItemSelectionRange4leftEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->left();
}

  // proto:  bool QItemSelectionRange::contains(const QModelIndex & index);
bool demth_ZNK19QItemSelectionRange8containsERK11QModelIndex(void *that, const QModelIndex & index)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->contains(index);
}

  // proto:  int QItemSelectionRange::bottom();
int demth_ZNK19QItemSelectionRange6bottomEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->bottom();
}

  // proto:  bool QItemSelectionRange::isValid();
bool demth_ZNK19QItemSelectionRange7isValidEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->isValid();
}

  // proto:  const QAbstractItemModel * QItemSelectionRange::model();
const QAbstractItemModel * demth_ZNK19QItemSelectionRange5modelEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->model();
}

  // proto:  int QItemSelectionRange::height();
int demth_ZNK19QItemSelectionRange6heightEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->height();
}

  // proto:  int QItemSelectionRange::right();
int demth_ZNK19QItemSelectionRange5rightEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->right();
}

  // proto:  QModelIndex QItemSelectionRange::parent();
QModelIndex* demth_ZNK19QItemSelectionRange6parentEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto recret = cthat->parent();
  return new QModelIndex(recret);
}

  // proto:  void QItemSelectionRange::QItemSelectionRange();
void demth_ZN19QItemSelectionRangeC1Ev(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange();
}

  // proto:  int QItemSelectionRange::width();
int demth_ZNK19QItemSelectionRange5widthEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->width();
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight);
void demth_ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(void *that, const QModelIndex & topLeft, const QModelIndex & bottomRight)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(topLeft, bottomRight);
}

  // proto:  const QPersistentModelIndex & QItemSelectionRange::topLeft();
const QPersistentModelIndex * demth_ZNK19QItemSelectionRange7topLeftEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return &cthat->topLeft();
}

  // proto:  bool QItemSelectionRange::contains(int row, int column, const QModelIndex & parentIndex);
bool demth_ZNK19QItemSelectionRange8containsEiiRK11QModelIndex(void *that, int row, int column, const QModelIndex & parentIndex)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->contains(row, column, parentIndex);
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & index);
void demth_ZN19QItemSelectionRangeC1ERK11QModelIndex(void *that, const QModelIndex & index)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(index);
}

  // proto:  const QPersistentModelIndex & QItemSelectionRange::bottomRight();
const QPersistentModelIndex * demth_ZNK19QItemSelectionRange11bottomRightEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return &cthat->bottomRight();
}

  // proto:  int QItemSelectionRange::top();
int demth_ZNK19QItemSelectionRange3topEv(void *that)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->top();
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange & other);
void demth_ZN19QItemSelectionRangeC1ERKS_(void *that, const QItemSelectionRange & other)
{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(other);
}

int QItemSelectionModel_Class_Size()
{
  return sizeof(QItemSelectionModel);
}

// QItemSelectionModel(class QAbstractItemModel *)
QItemSelectionModel* dector_ZN19QItemSelectionModelC1EP18QAbstractItemModel(QAbstractItemModel * model)
{
  // static_assert(sizeof(QItemSelectionModel) == 32, "tyszerr");
  QItemSelectionModel* rthis = new QItemSelectionModel(model);
  return rthis;
}

// ~QItemSelectionModel()
void dedtor_ZN19QItemSelectionModelD0Ev(QItemSelectionModel* that)
{
  QItemSelectionModel* rthis = (QItemSelectionModel*)that;
  delete rthis;
}

// QItemSelectionModel(class QAbstractItemModel *, class QObject *)
QItemSelectionModel* dector_ZN19QItemSelectionModelC1EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent)
{
  // static_assert(sizeof(QItemSelectionModel) == 32, "tyszerr");
  QItemSelectionModel* rthis = new QItemSelectionModel(model, parent);
  return rthis;
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
  void (*slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_)(const QItemSelection & arg0, const QItemSelection & arg1) = NULL;
public slots:
  // currentChanged(const class QModelIndex &, const class QModelIndex &)
  void slot_proxy_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_)(const QModelIndex & arg0, const QModelIndex & arg1) = NULL;
public slots:
  // currentRowChanged(const class QModelIndex &, const class QModelIndex &)
  void slot_proxy_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_)(const QModelIndex & arg0, const QModelIndex & arg1) = NULL;
public slots:
  // currentColumnChanged(const class QModelIndex &, const class QModelIndex &)
  void slot_proxy_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1);
public:
  void (*slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_)(const QModelIndex & arg0, const QModelIndex & arg1) = NULL;
public slots:
  // modelChanged(class QAbstractItemModel *)
  void slot_proxy_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QAbstractItemModel * arg0);
public:
  void (*slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel)(QAbstractItemModel * arg0) = NULL;
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
    this->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(QObject* sender, void* fptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_))fptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(selectionChanged(const class QItemSelection &, const class QItemSelection &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(const QItemSelection & arg0, const QItemSelection & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1) {
  if (this->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_ != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(QObject* sender, void* fptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_))fptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(currentChanged(const class QModelIndex &, const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1) {
  if (this->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_ != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(QObject* sender, void* fptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_))fptr;
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
    this->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(arg0, arg1);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(QObject* sender, void* fptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_ = (decltype(that->slot_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_))fptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(currentColumnChanged(const class QModelIndex &, const class QModelIndex &)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(const QModelIndex & arg0, const QModelIndex & arg1)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QItemSelectionModel_SlotProxy::slot_proxy_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QAbstractItemModel * arg0) {
  if (this->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel != NULL) {
    // do smth...
    this->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(arg0);
  }
}
extern "C"
void* QItemSelectionModel_SlotProxy_connect__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QObject* sender, void* fptr){
  auto that = new QItemSelectionModel_SlotProxy();
  that->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel = (decltype(that->slot_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel))fptr;
  QObject::connect((QItemSelectionModel*)sender, SIGNAL(modelChanged(class QAbstractItemModel *)), that, SLOT(slot_proxy_func__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QAbstractItemModel * arg0)));
  return that;
}
extern "C"
void QItemSelectionModel_SlotProxy_disconnect__ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(QItemSelectionModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

