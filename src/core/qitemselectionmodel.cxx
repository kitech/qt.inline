// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtCore/qitemselectionmodel.h
// dst-file: /src/core/qitemselectionmodel.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qitemselectionmodel.h>


#include <qabstractitemmodel.h>
// <= header block end

// main block begin =>
void __keep_qitemselectionmodel_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 238, column 5>
//   // proto:  void QItemSelection::QItemSelection();
if (true) {
  auto f = []() {
    new QItemSelection();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 59, column 16>
//   // proto:  int QItemSelectionRange::left();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->left();
    flythis.left();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange4leftEv left()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 70, column 17>
//   // proto:  bool QItemSelectionRange::contains(const QModelIndex & index);
if (true) {
  auto f = [](QItemSelectionRange flythis, const QModelIndex & arg1) {
    ((QItemSelectionRange*)0)->contains(arg1);
    flythis.contains(arg1);
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange8containsERK11QModelIndex contains(const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 60, column 16>
//   // proto:  int QItemSelectionRange::bottom();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->bottom();
    flythis.bottom();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange6bottomEv bottom()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 121, column 17>
//   // proto:  bool QItemSelectionRange::isValid();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 68, column 38>
//   // proto:  const QAbstractItemModel * QItemSelectionRange::model();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->model();
    flythis.model();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange5modelEv model()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 63, column 16>
//   // proto:  int QItemSelectionRange::height();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->height();
    flythis.height();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange6heightEv height()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 61, column 16>
//   // proto:  int QItemSelectionRange::right();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->right();
    flythis.right();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange5rightEv right()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 67, column 24>
//   // proto:  QModelIndex QItemSelectionRange::parent();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->parent();
    flythis.parent();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 51, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange();
if (true) {
  auto f = []() {
    new QItemSelectionRange();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 62, column 16>
//   // proto:  int QItemSelectionRange::width();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->width();
    flythis.width();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange5widthEv width()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 54, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight);
if (true) {
  auto f = [](const QModelIndex & arg1, const QModelIndex & arg2) {
    new QItemSelectionRange(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 65, column 41>
//   // proto:  const QPersistentModelIndex & QItemSelectionRange::topLeft();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->topLeft();
    flythis.topLeft();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange7topLeftEv topLeft()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 77, column 17>
//   // proto:  bool QItemSelectionRange::contains(int row, int column, const QModelIndex & parentIndex);
if (true) {
  auto f = [](QItemSelectionRange flythis, int arg1, int arg2, const QModelIndex & arg3) {
    ((QItemSelectionRange*)0)->contains(arg1, arg2, arg3);
    flythis.contains(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange8containsEiiRK11QModelIndex contains(int, int, const class QModelIndex &)
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 55, column 21>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & index);
if (true) {
  auto f = [](const QModelIndex & arg1) {
    new QItemSelectionRange(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 66, column 41>
//   // proto:  const QPersistentModelIndex & QItemSelectionRange::bottomRight();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->bottomRight();
    flythis.bottomRight();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange11bottomRightEv bottomRight()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 58, column 16>
//   // proto:  int QItemSelectionRange::top();
if (true) {
  auto f = [](QItemSelectionRange flythis) {
    ((QItemSelectionRange*)0)->top();
    flythis.top();
  };
  if (f == nullptr){}
}
// _ZNK19QItemSelectionRange3topEv top()
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 52, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange & other);
if (true) {
  auto f = [](const QItemSelectionRange & arg1) {
    new QItemSelectionRange(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QItemSelection_Class_Size()
{
  return sizeof(QItemSelection);
}

extern "C"
int QItemSelectionRange_Class_Size()
{
  return sizeof(QItemSelectionRange);
}

extern "C"
int QItemSelectionModel_Class_Size()
{
  return sizeof(QItemSelectionModel);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 244, column 17>
//   // proto: static void QItemSelection::split(const QItemSelectionRange & range, const QItemSelectionRange & other, QItemSelection * result);
// _ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_ split(const class QItemSelectionRange &, const class QItemSelectionRange &, class QItemSelection *)
extern "C"
void
C_ZN14QItemSelection5splitERK19QItemSelectionRangeS2_PS_(const QItemSelectionRange* arg1,
const QItemSelectionRange* arg2,
QItemSelection * arg3) {
  QItemSelection::split(*((const QItemSelectionRange*)arg1),
*((const QItemSelectionRange*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 242, column 21>
//   // proto:  QModelIndexList QItemSelection::indexes();
// _ZNK14QItemSelection7indexesEv indexes()
extern "C"
QList<QModelIndex>*
C_ZNK14QItemSelection7indexesEv(void *qthis) {
  auto ret =
  ((QItemSelection*)qthis)->indexes();
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 243, column 10>
//   // proto:  void QItemSelection::merge(const QItemSelection & other, QItemSelectionModel::SelectionFlags command);
// _ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE merge(const class QItemSelection &, class QItemSelectionModel::SelectionFlags)
extern "C"
void
C_ZN14QItemSelection5mergeERKS_6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *qthis,
const QItemSelection* arg1,
QItemSelectionModel::SelectionFlags* arg2) {
  ((QItemSelection*)qthis)->merge(*((const QItemSelection*)arg1),
*((QItemSelectionModel::SelectionFlags*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 238, column 5>
//   // proto:  void QItemSelection::QItemSelection();
extern "C"
QItemSelection*
C_ZN14QItemSelectionC2Ev() {
  auto ret = new QItemSelection();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 241, column 10>
//   // proto:  bool QItemSelection::contains(const QModelIndex & index);
// _ZNK14QItemSelection8containsERK11QModelIndex contains(const class QModelIndex &)
extern "C"
bool
C_ZNK14QItemSelection8containsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QItemSelection*)qthis)->contains(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 240, column 10>
//   // proto:  void QItemSelection::select(const QModelIndex & topLeft, const QModelIndex & bottomRight);
// _ZN14QItemSelection6selectERK11QModelIndexS2_ select(const class QModelIndex &, const class QModelIndex &)
extern "C"
void
C_ZN14QItemSelection6selectERK11QModelIndexS2_(void *qthis,
const QModelIndex* arg1,
const QModelIndex* arg2) {
  ((QItemSelection*)qthis)->select(*((const QModelIndex*)arg1),
*((const QModelIndex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 239, column 5>
//   // proto:  void QItemSelection::QItemSelection(const QModelIndex & topLeft, const QModelIndex & bottomRight);
extern "C"
QItemSelection*
C_ZN14QItemSelectionC2ERK11QModelIndexS2_(const QModelIndex* arg1,
const QModelIndex* arg2) {
  auto ret = new QItemSelection(*((const QModelIndex*)arg1), *((const QModelIndex*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 59, column 16>
//   // proto:  int QItemSelectionRange::left();
// _ZNK19QItemSelectionRange4leftEv left()
extern "C"
int
C_ZNK19QItemSelectionRange4leftEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->left();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 70, column 17>
//   // proto:  bool QItemSelectionRange::contains(const QModelIndex & index);
// _ZNK19QItemSelectionRange8containsERK11QModelIndex contains(const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionRange8containsERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QItemSelectionRange*)qthis)->contains(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 89, column 25>
//   // proto:  QItemSelectionRange QItemSelectionRange::intersected(const QItemSelectionRange & other);
// _ZNK19QItemSelectionRange11intersectedERKS_ intersected(const class QItemSelectionRange &)
extern "C"
QItemSelectionRange*
C_ZNK19QItemSelectionRange11intersectedERKS_(void *qthis,
const QItemSelectionRange* arg1) {
  auto ret =
  ((QItemSelectionRange*)qthis)->intersected(*((const QItemSelectionRange*)arg1));
  return new QItemSelectionRange(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 60, column 16>
//   // proto:  int QItemSelectionRange::bottom();
// _ZNK19QItemSelectionRange6bottomEv bottom()
extern "C"
int
C_ZNK19QItemSelectionRange6bottomEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->bottom();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 129, column 21>
//   // proto:  QModelIndexList QItemSelectionRange::indexes();
// _ZNK19QItemSelectionRange7indexesEv indexes()
extern "C"
QList<QModelIndex>*
C_ZNK19QItemSelectionRange7indexesEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->indexes();
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 121, column 17>
//   // proto:  bool QItemSelectionRange::isValid();
// _ZNK19QItemSelectionRange7isValidEv isValid()
extern "C"
bool
C_ZNK19QItemSelectionRange7isValidEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 68, column 38>
//   // proto:  const QAbstractItemModel * QItemSelectionRange::model();
// _ZNK19QItemSelectionRange5modelEv model()
extern "C"
void*
C_ZNK19QItemSelectionRange5modelEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 63, column 16>
//   // proto:  int QItemSelectionRange::height();
// _ZNK19QItemSelectionRange6heightEv height()
extern "C"
int
C_ZNK19QItemSelectionRange6heightEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->height();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 61, column 16>
//   // proto:  int QItemSelectionRange::right();
// _ZNK19QItemSelectionRange5rightEv right()
extern "C"
int
C_ZNK19QItemSelectionRange5rightEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->right();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 67, column 24>
//   // proto:  QModelIndex QItemSelectionRange::parent();
// _ZNK19QItemSelectionRange6parentEv parent()
extern "C"
QModelIndex*
C_ZNK19QItemSelectionRange6parentEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->parent();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 51, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange();
extern "C"
QItemSelectionRange*
C_ZN19QItemSelectionRangeC2Ev() {
  auto ret = new QItemSelectionRange();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 62, column 16>
//   // proto:  int QItemSelectionRange::width();
// _ZNK19QItemSelectionRange5widthEv width()
extern "C"
int
C_ZNK19QItemSelectionRange5widthEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->width();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 54, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & topLeft, const QModelIndex & bottomRight);
extern "C"
QItemSelectionRange*
C_ZN19QItemSelectionRangeC2ERK11QModelIndexS2_(const QModelIndex* arg1,
const QModelIndex* arg2) {
  auto ret = new QItemSelectionRange(*((const QModelIndex*)arg1), *((const QModelIndex*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 65, column 41>
//   // proto:  const QPersistentModelIndex & QItemSelectionRange::topLeft();
// _ZNK19QItemSelectionRange7topLeftEv topLeft()
extern "C"
QPersistentModelIndex*
C_ZNK19QItemSelectionRange7topLeftEv(void *qthis) {
  auto& ret =
  ((QItemSelectionRange*)qthis)->topLeft();
  return new QPersistentModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 77, column 17>
//   // proto:  bool QItemSelectionRange::contains(int row, int column, const QModelIndex & parentIndex);
// _ZNK19QItemSelectionRange8containsEiiRK11QModelIndex contains(int, int, const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionRange8containsEiiRK11QModelIndex(void *qthis,
int arg1,
int arg2,
const QModelIndex* arg3) {
  auto ret =
  ((QItemSelectionRange*)qthis)->contains(arg1,
arg2,
*((const QModelIndex*)arg3));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 55, column 21>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QModelIndex & index);
extern "C"
QItemSelectionRange*
C_ZN19QItemSelectionRangeC2ERK11QModelIndex(const QModelIndex* arg1) {
  auto ret = new QItemSelectionRange(*((const QModelIndex*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 84, column 10>
//   // proto:  bool QItemSelectionRange::intersects(const QItemSelectionRange & other);
// _ZNK19QItemSelectionRange10intersectsERKS_ intersects(const class QItemSelectionRange &)
extern "C"
bool
C_ZNK19QItemSelectionRange10intersectsERKS_(void *qthis,
const QItemSelectionRange* arg1) {
  auto ret =
  ((QItemSelectionRange*)qthis)->intersects(*((const QItemSelectionRange*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 66, column 41>
//   // proto:  const QPersistentModelIndex & QItemSelectionRange::bottomRight();
// _ZNK19QItemSelectionRange11bottomRightEv bottomRight()
extern "C"
QPersistentModelIndex*
C_ZNK19QItemSelectionRange11bottomRightEv(void *qthis) {
  auto& ret =
  ((QItemSelectionRange*)qthis)->bottomRight();
  return new QPersistentModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 58, column 16>
//   // proto:  int QItemSelectionRange::top();
// _ZNK19QItemSelectionRange3topEv top()
extern "C"
int
C_ZNK19QItemSelectionRange3topEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->top();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 127, column 10>
//   // proto:  bool QItemSelectionRange::isEmpty();
// _ZNK19QItemSelectionRange7isEmptyEv isEmpty()
extern "C"
bool
C_ZNK19QItemSelectionRange7isEmptyEv(void *qthis) {
  auto ret =
  ((QItemSelectionRange*)qthis)->isEmpty();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 52, column 12>
//   // proto:  void QItemSelectionRange::QItemSelectionRange(const QItemSelectionRange & other);
extern "C"
QItemSelectionRange*
C_ZN19QItemSelectionRangeC2ERKS_(const QItemSelectionRange* arg1) {
  auto ret = new QItemSelectionRange(*((const QItemSelectionRange*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 213, column 10>
//   // proto:  void QItemSelectionModel::currentColumnChanged(const QModelIndex & current, const QModelIndex & previous);
// _ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_ currentColumnChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void
C_ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(void *qthis,
const QModelIndex* arg1,
const QModelIndex* arg2) {
  ((QItemSelectionModel*)qthis)->currentColumnChanged(*((const QModelIndex*)arg1),
*((const QModelIndex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 145, column 5>
//   // proto:  const QMetaObject * QItemSelectionModel::metaObject();
// _ZNK19QItemSelectionModel10metaObjectEv metaObject()
extern "C"
void*
C_ZNK19QItemSelectionModel10metaObjectEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 211, column 10>
//   // proto:  void QItemSelectionModel::currentChanged(const QModelIndex & current, const QModelIndex & previous);
// _ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_ currentChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void
C_ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void *qthis,
const QModelIndex* arg1,
const QModelIndex* arg2) {
  ((QItemSelectionModel*)qthis)->currentChanged(*((const QModelIndex*)arg1),
*((const QModelIndex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 214, column 10>
//   // proto:  void QItemSelectionModel::modelChanged(QAbstractItemModel * model);
// _ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel modelChanged(class QAbstractItemModel *)
extern "C"
void
C_ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QItemSelectionModel*)qthis)->modelChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 191, column 26>
//   // proto:  const QItemSelection QItemSelectionModel::selection();
// _ZNK19QItemSelectionModel9selectionEv selection()
extern "C"
QItemSelection*
C_ZNK19QItemSelectionModel9selectionEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->selection();
  return new QItemSelection(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 179, column 22>
//   // proto:  bool QItemSelectionModel::isSelected(const QModelIndex & index);
// _ZNK19QItemSelectionModel10isSelectedERK11QModelIndex isSelected(const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void *qthis,
const QModelIndex* arg1) {
  auto ret =
  ((QItemSelectionModel*)qthis)->isSelected(*((const QModelIndex*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 201, column 18>
//   // proto:  void QItemSelectionModel::select(const QModelIndex & index, QItemSelectionModel::SelectionFlags command);
// _ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE select(const class QModelIndex &, class QItemSelectionModel::SelectionFlags)
extern "C"
void
C_ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *qthis,
const QModelIndex* arg1,
QItemSelectionModel::SelectionFlags* arg2) {
  ((QItemSelectionModel*)qthis)->select(*((const QModelIndex*)arg1),
*((QItemSelectionModel::SelectionFlags*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 200, column 18>
//   // proto:  void QItemSelectionModel::setCurrentIndex(const QModelIndex & index, QItemSelectionModel::SelectionFlags command);
// _ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE setCurrentIndex(const class QModelIndex &, class QItemSelectionModel::SelectionFlags)
extern "C"
void
C_ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *qthis,
const QModelIndex* arg1,
QItemSelectionModel::SelectionFlags* arg2) {
  ((QItemSelectionModel*)qthis)->setCurrentIndex(*((const QModelIndex*)arg1),
*((QItemSelectionModel::SelectionFlags*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 210, column 10>
//   // proto:  void QItemSelectionModel::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected);
// _ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_ selectionChanged(const class QItemSelection &, const class QItemSelection &)
extern "C"
void
C_ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(void *qthis,
const QItemSelection* arg1,
const QItemSelection* arg2) {
  ((QItemSelectionModel*)qthis)->selectionChanged(*((const QItemSelection*)arg1),
*((const QItemSelection*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 206, column 10>
//   // proto:  void QItemSelectionModel::clearSelection();
// _ZN19QItemSelectionModel14clearSelectionEv clearSelection()
extern "C"
void
C_ZN19QItemSelectionModel14clearSelectionEv(void *qthis) {
  ((QItemSelectionModel*)qthis)->clearSelection();
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 177, column 17>
//   // proto:  QModelIndex QItemSelectionModel::currentIndex();
// _ZNK19QItemSelectionModel12currentIndexEv currentIndex()
extern "C"
QModelIndex*
C_ZNK19QItemSelectionModel12currentIndexEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->currentIndex();
  return new QModelIndex(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 197, column 10>
//   // proto:  void QItemSelectionModel::setModel(QAbstractItemModel * model);
// _ZN19QItemSelectionModel8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN19QItemSelectionModel8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QItemSelectionModel*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 183, column 22>
//   // proto:  bool QItemSelectionModel::rowIntersectsSelection(int row, const QModelIndex & parent);
// _ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex rowIntersectsSelection(int, const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QItemSelectionModel*)qthis)->rowIntersectsSelection(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 173, column 14>
//   // proto:  void QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model);
extern "C"
QItemSelectionModel*
C_ZN19QItemSelectionModelC2EP18QAbstractItemModel(QAbstractItemModel * arg1) {
  auto ret = new QItemSelectionModel(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 204, column 18>
//   // proto:  void QItemSelectionModel::reset();
// _ZN19QItemSelectionModel5resetEv reset()
extern "C"
void
C_ZN19QItemSelectionModel5resetEv(void *qthis) {
  ((QItemSelectionModel*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 207, column 18>
//   // proto:  void QItemSelectionModel::clearCurrentIndex();
// _ZN19QItemSelectionModel17clearCurrentIndexEv clearCurrentIndex()
extern "C"
void
C_ZN19QItemSelectionModel17clearCurrentIndexEv(void *qthis) {
  ((QItemSelectionModel*)qthis)->clearCurrentIndex();
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 188, column 21>
//   // proto:  QModelIndexList QItemSelectionModel::selectedIndexes();
// _ZNK19QItemSelectionModel15selectedIndexesEv selectedIndexes()
extern "C"
QList<QModelIndex>*
C_ZNK19QItemSelectionModel15selectedIndexesEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->selectedIndexes();
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 190, column 33>
//   // proto:  QModelIndexList QItemSelectionModel::selectedColumns(int row);
// _ZNK19QItemSelectionModel15selectedColumnsEi selectedColumns(int)
extern "C"
QList<QModelIndex>*
C_ZNK19QItemSelectionModel15selectedColumnsEi(void *qthis,
int arg1) {
  auto ret =
  ((QItemSelectionModel*)qthis)->selectedColumns(arg1);
  return new QList<QModelIndex>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 194, column 31>
//   // proto:  const QAbstractItemModel * QItemSelectionModel::model();
// _ZNK19QItemSelectionModel5modelEv model()
extern "C"
void*
C_ZNK19QItemSelectionModel5modelEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 181, column 22>
//   // proto:  bool QItemSelectionModel::isColumnSelected(int column, const QModelIndex & parent);
// _ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex isColumnSelected(int, const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QItemSelectionModel*)qthis)->isColumnSelected(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 184, column 22>
//   // proto:  bool QItemSelectionModel::columnIntersectsSelection(int column, const QModelIndex & parent);
// _ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex columnIntersectsSelection(int, const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QItemSelectionModel*)qthis)->columnIntersectsSelection(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QItemSelectionModel::~QItemSelectionModel();
extern "C"
void C_ZN19QItemSelectionModelD2Ev(void *qthis) {
  delete (QItemSelectionModel*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 180, column 22>
//   // proto:  bool QItemSelectionModel::isRowSelected(int row, const QModelIndex & parent);
// _ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex isRowSelected(int, const class QModelIndex &)
extern "C"
bool
C_ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void *qthis,
int arg1,
const QModelIndex* arg2) {
  auto ret =
  ((QItemSelectionModel*)qthis)->isRowSelected(arg1,
*((const QModelIndex*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 174, column 14>
//   // proto:  void QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model, QObject * parent);
extern "C"
QItemSelectionModel*
C_ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject(QAbstractItemModel * arg1,
QObject * arg2) {
  auto ret = new QItemSelectionModel(arg1, arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 203, column 18>
//   // proto:  void QItemSelectionModel::clear();
// _ZN19QItemSelectionModel5clearEv clear()
extern "C"
void
C_ZN19QItemSelectionModel5clearEv(void *qthis) {
  ((QItemSelectionModel*)qthis)->clear();
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 212, column 10>
//   // proto:  void QItemSelectionModel::currentRowChanged(const QModelIndex & current, const QModelIndex & previous);
// _ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_ currentRowChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void
C_ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(void *qthis,
const QModelIndex* arg1,
const QModelIndex* arg2) {
  ((QItemSelectionModel*)qthis)->currentRowChanged(*((const QModelIndex*)arg1),
*((const QModelIndex*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 202, column 18>
//   // proto:  void QItemSelectionModel::select(const QItemSelection & selection, QItemSelectionModel::SelectionFlags command);
// _ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE select(const class QItemSelection &, class QItemSelectionModel::SelectionFlags)
extern "C"
void
C_ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE(void *qthis,
const QItemSelection* arg1,
QItemSelectionModel::SelectionFlags* arg2) {
  ((QItemSelectionModel*)qthis)->select(*((const QItemSelection*)arg1),
*((QItemSelectionModel::SelectionFlags*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 186, column 10>
//   // proto:  bool QItemSelectionModel::hasSelection();
// _ZNK19QItemSelectionModel12hasSelectionEv hasSelection()
extern "C"
bool
C_ZNK19QItemSelectionModel12hasSelectionEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->hasSelection();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 195, column 25>
//   // proto:  QAbstractItemModel * QItemSelectionModel::model();
// _ZN19QItemSelectionModel5modelEv model()
extern "C"
void*
C_ZN19QItemSelectionModel5modelEv(void *qthis) {
  auto ret =
  ((QItemSelectionModel*)qthis)->model();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qitemselectionmodel.h', line 189, column 33>
//   // proto:  QModelIndexList QItemSelectionModel::selectedRows(int column);
// _ZNK19QItemSelectionModel12selectedRowsEi selectedRows(int)
extern "C"
QList<QModelIndex>*
C_ZNK19QItemSelectionModel12selectedRowsEi(void *qthis,
int arg1) {
  auto ret =
  ((QItemSelectionModel*)qthis)->selectedRows(arg1);
  return new QList<QModelIndex>(ret); // 5
}
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

