// auto generated, do not modify.
// created: Thu Dec 24 22:25:43 2015
// src-file: /QtCore/qitemselectionmodel.h
// dst-file: /src/core/qitemselectionmodel.cxx
//

// header block begin =>
#include <qitemselectionmodel.h>

extern "C" {

  // proto:  int QItemSelectionRange::left();
int _ZNK19QItemSelectionRange4leftEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->left();
}

  // proto:  bool QItemSelectionRange::contains(const QModelIndex & index);
bool _ZNK19QItemSelectionRange8containsERK11QModelIndex(void *that, const QModelIndex & index)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->contains(index);
}

  // proto:  int QItemSelectionRange::bottom();
int _ZNK19QItemSelectionRange6bottomEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->bottom();
}

  // proto:  bool QItemSelectionRange::isValid();
bool _ZNK19QItemSelectionRange7isValidEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->isValid();
}

  // proto:  const QAbstractItemModel * QItemSelectionRange::model();
const QAbstractItemModel * _ZNK19QItemSelectionRange5modelEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->model();
}

  // proto:  int QItemSelectionRange::height();
int _ZNK19QItemSelectionRange6heightEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->height();
}

  // proto:  int QItemSelectionRange::right();
int _ZNK19QItemSelectionRange5rightEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->right();
}

  // proto:  QModelIndex QItemSelectionRange::parent();
QModelIndex* _ZNK19QItemSelectionRange6parentEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto recret = cthat->parent();
  return new QModelIndex(recret);
}

  // proto:  void QItemSelectionRange::QItemSelectionRange();
void _ZN19QItemSelectionRangeC1Ev(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange();
}

  // proto:  int QItemSelectionRange::width();
int _ZNK19QItemSelectionRange5widthEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->width();
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight);
void _ZN19QItemSelectionRangeC1ERK11QModelIndexS2_(void *that, const QModelIndex & topLeft, const QModelIndex & bottomRight)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(topLeft, bottomRight);
}

  // proto:  const QPersistentModelIndex & QItemSelectionRange::topLeft();
const QPersistentModelIndex * _ZNK19QItemSelectionRange7topLeftEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return &cthat->topLeft();
}

  // proto:  bool QItemSelectionRange::contains(int row, int column, const QModelIndex & parentIndex);
bool _ZNK19QItemSelectionRange8containsEiiRK11QModelIndex(void *that, int row, int column, const QModelIndex & parentIndex)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->contains(row, column, parentIndex);
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & index);
void _ZN19QItemSelectionRangeC1ERK11QModelIndex(void *that, const QModelIndex & index)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(index);
}

  // proto:  const QPersistentModelIndex & QItemSelectionRange::bottomRight();
const QPersistentModelIndex * _ZNK19QItemSelectionRange11bottomRightEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return &cthat->bottomRight();
}

  // proto:  int QItemSelectionRange::top();
int _ZNK19QItemSelectionRange3topEv(void *that)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  return cthat->top();
}

  // proto:  void QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange & other);
void _ZN19QItemSelectionRangeC1ERKS_(void *that, const QItemSelectionRange & other)

{
  QItemSelectionRange *cthat = (QItemSelectionRange *)that;
  auto _o = new(that) QItemSelectionRange(other);
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

