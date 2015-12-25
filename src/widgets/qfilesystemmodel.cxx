// auto generated, do not modify.
// created: Fri Dec 25 23:55:48 2015
// src-file: /QtWidgets/qfilesystemmodel.h
// dst-file: /src/widgets/qfilesystemmodel.cxx
//

// header block begin =>
#include <qfilesystemmodel.h>

extern "C" {

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
QString* _ZNK16QFileSystemModel8fileNameERK11QModelIndex(void *that, const QModelIndex & index)
{
  QFileSystemModel *cthat = (QFileSystemModel *)that;
  auto recret = cthat->fileName(index);
  return new QString(recret);
}

  // proto:  QIcon QFileSystemModel::fileIcon(const QModelIndex & index);
QIcon* _ZNK16QFileSystemModel8fileIconERK11QModelIndex(void *that, const QModelIndex & index)
{
  QFileSystemModel *cthat = (QFileSystemModel *)that;
  auto recret = cthat->fileIcon(index);
  return new QIcon(recret);
}

  // proto:  QFileInfo QFileSystemModel::fileInfo(const QModelIndex & index);
QFileInfo* _ZNK16QFileSystemModel8fileInfoERK11QModelIndex(void *that, const QModelIndex & index)
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
// <= body block end

