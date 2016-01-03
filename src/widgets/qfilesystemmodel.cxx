// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtWidgets/qfilesystemmodel.h
// dst-file: /src/widgets/qfilesystemmodel.cxx
//

// header block begin =>
#include <qfilesystemmodel.h>

extern "C" {

int QFileSystemModel_Class_Size()
{
  return sizeof(QFileSystemModel);
}

// ~QFileSystemModel()
void dedtor_ZN16QFileSystemModelD0Ev(QFileSystemModel* that)
{
  QFileSystemModel* rthis = (QFileSystemModel*)that;
  delete rthis;
}

// QFileSystemModel(class QObject *)
QFileSystemModel* dector_ZN16QFileSystemModelC1EP7QObject(QObject * parent)
{
  // static_assert(sizeof(QFileSystemModel) == 32, "tyszerr");
  QFileSystemModel* rthis = new QFileSystemModel(parent);
  return rthis;
}

  // proto:  QString QFileSystemModel::fileName(const QModelIndex & index);
QString* demth_ZNK16QFileSystemModel8fileNameERK11QModelIndex(void *that, const QModelIndex & index)
{
  QFileSystemModel *cthat = (QFileSystemModel *)that;
  auto recret = cthat->fileName(index);
  return new QString(recret);
}

  // proto:  QIcon QFileSystemModel::fileIcon(const QModelIndex & index);
QIcon* demth_ZNK16QFileSystemModel8fileIconERK11QModelIndex(void *that, const QModelIndex & index)
{
  QFileSystemModel *cthat = (QFileSystemModel *)that;
  auto recret = cthat->fileIcon(index);
  return new QIcon(recret);
}

  // proto:  QFileInfo QFileSystemModel::fileInfo(const QModelIndex & index);
QFileInfo* demth_ZNK16QFileSystemModel8fileInfoERK11QModelIndex(void *that, const QModelIndex & index)
{
  QFileSystemModel *cthat = (QFileSystemModel *)that;
  auto recret = cthat->fileInfo(index);
  return new QFileInfo(recret);
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
// QFileSystemModel_SlotProxy here
class QFileSystemModel_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFileSystemModel_SlotProxy():QObject(){}

public slots:
  // directoryLoaded(const class QString &)
  void slot_proxy_func__ZN16QFileSystemModel15directoryLoadedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // rootPathChanged(const class QString &)
  void slot_proxy_func__ZN16QFileSystemModel15rootPathChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // fileRenamed(const class QString &, const class QString &, const class QString &)
  void slot_proxy_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(const QString & arg0, const QString & arg1, const QString & arg2);
public:
  void (*slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_)(void* rsfptr, const QString & arg0, const QString & arg1, const QString & arg2) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qfilesystemmodel.moc"

extern "C" {
  QFileSystemModel_SlotProxy* QFileSystemModel_SlotProxy_new()
  {
    return new QFileSystemModel_SlotProxy();
  }
};

void QFileSystemModel_SlotProxy::slot_proxy_func__ZN16QFileSystemModel15directoryLoadedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileSystemModel_SlotProxy_connect__ZN16QFileSystemModel15directoryLoadedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileSystemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString = (decltype(that->slot_func__ZN16QFileSystemModel15directoryLoadedERK7QString))ffifptr;
  QObject::connect((QFileSystemModel*)sender, SIGNAL(directoryLoaded(const class QString &)), that, SLOT(slot_proxy_func__ZN16QFileSystemModel15directoryLoadedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileSystemModel_SlotProxy_disconnect__ZN16QFileSystemModel15directoryLoadedERK7QString(QFileSystemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileSystemModel_SlotProxy::slot_proxy_func__ZN16QFileSystemModel15rootPathChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QFileSystemModel_SlotProxy_connect__ZN16QFileSystemModel15rootPathChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileSystemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString = (decltype(that->slot_func__ZN16QFileSystemModel15rootPathChangedERK7QString))ffifptr;
  QObject::connect((QFileSystemModel*)sender, SIGNAL(rootPathChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN16QFileSystemModel15rootPathChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QFileSystemModel_SlotProxy_disconnect__ZN16QFileSystemModel15rootPathChangedERK7QString(QFileSystemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QFileSystemModel_SlotProxy::slot_proxy_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(const QString & arg0, const QString & arg1, const QString & arg2) {
  if (this->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_ != NULL) {
    // do smth...
    this->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QFileSystemModel_SlotProxy_connect__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QFileSystemModel_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_ = (decltype(that->slot_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_))ffifptr;
  QObject::connect((QFileSystemModel*)sender, SIGNAL(fileRenamed(const class QString &, const class QString &, const class QString &)), that, SLOT(slot_proxy_func__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(const QString & arg0, const QString & arg1, const QString & arg2)));
  return that;
}
extern "C"
void QFileSystemModel_SlotProxy_disconnect__ZN16QFileSystemModel11fileRenamedERK7QStringS2_S2_(QFileSystemModel_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

