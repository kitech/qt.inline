//  header block begin
// /usr/include/qt/QtCore/qitemselectionmodel.h
#include <qitemselectionmodel.h>
#include <QtCore>

// QItemSelectionModel is pure virtual: false
// QItemSelectionModel has virtual projected: true
//  header block end

//  main block begin
// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:212
// [-2] void emitSelectionChanged(const class QItemSelection &, const class QItemSelection &)
extern "C"
void* callback_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_ = 0;
extern "C" void set_callback_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_(void*cbfn)
{ callback_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_ = cbfn; }

class MyQItemSelectionModel : public QItemSelectionModel {
public:
  virtual ~MyQItemSelectionModel() {}
// void QItemSelectionModel(class QAbstractItemModel *)
MyQItemSelectionModel(QAbstractItemModel * model) : QItemSelectionModel(model) {}
// void QItemSelectionModel(class QAbstractItemModel *, class QObject *)
MyQItemSelectionModel(QAbstractItemModel * model, QObject * parent) : QItemSelectionModel(model, parent) {}
// void emitSelectionChanged(const class QItemSelection &, const class QItemSelection &)
  virtual void emitSelectionChanged(const QItemSelection & newSelection, const QItemSelection & oldSelection) {
    if (callback_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_ != 0) {
      // callback_ZN19QItemSelectionModel20emitSelectionChangedERK14QItemSelectionS2_(newSelection, oldSelection);
    }
    QItemSelectionModel::emitSelectionChanged(newSelection, oldSelection);
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:139
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK19QItemSelectionModel10metaObjectEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:167
// [-2] void QItemSelectionModel(class QAbstractItemModel *)
extern "C"
void* C_ZN19QItemSelectionModelC2EP18QAbstractItemModel(QAbstractItemModel * model) {
  auto _nilp = (MyQItemSelectionModel*)(0);
  return  new MyQItemSelectionModel(model);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:168
// [-2] void QItemSelectionModel(class QAbstractItemModel *, class QObject *)
extern "C"
void* C_ZN19QItemSelectionModelC2EP18QAbstractItemModelP7QObject(QAbstractItemModel * model, QObject * parent) {
  auto _nilp = (MyQItemSelectionModel*)(0);
  return  new MyQItemSelectionModel(model, parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:169
// [-2] void ~QItemSelectionModel()
extern "C"
void C_ZN19QItemSelectionModelD2Ev(void *this_) {
  delete (QItemSelectionModel*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:171
// [24] QModelIndex currentIndex()
extern "C"
void* C_ZNK19QItemSelectionModel12currentIndexEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->currentIndex();
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:173
// [1] bool isSelected(const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionModel10isSelectedERK11QModelIndex(void *this_, const QModelIndex & index) {
  return (bool)((QItemSelectionModel*)this_)->isSelected(index);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:174
// [1] bool isRowSelected(int, const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionModel13isRowSelectedEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  return (bool)((QItemSelectionModel*)this_)->isRowSelected(row, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:175
// [1] bool isColumnSelected(int, const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionModel16isColumnSelectedEiRK11QModelIndex(void *this_, int column, const QModelIndex & parent) {
  return (bool)((QItemSelectionModel*)this_)->isColumnSelected(column, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:177
// [1] bool rowIntersectsSelection(int, const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionModel22rowIntersectsSelectionEiRK11QModelIndex(void *this_, int row, const QModelIndex & parent) {
  return (bool)((QItemSelectionModel*)this_)->rowIntersectsSelection(row, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:178
// [1] bool columnIntersectsSelection(int, const class QModelIndex &)
extern "C"
bool C_ZNK19QItemSelectionModel25columnIntersectsSelectionEiRK11QModelIndex(void *this_, int column, const QModelIndex & parent) {
  return (bool)((QItemSelectionModel*)this_)->columnIntersectsSelection(column, parent);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:180
// [1] bool hasSelection()
extern "C"
bool C_ZNK19QItemSelectionModel12hasSelectionEv(void *this_) {
  return (bool)((QItemSelectionModel*)this_)->hasSelection();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:185
// [8] const QItemSelection selection()
extern "C"
void* C_ZNK19QItemSelectionModel9selectionEv(void *this_) {
  auto rv = ((QItemSelectionModel*)this_)->selection();
return new QItemSelection(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:188
// [8] const QAbstractItemModel * model()
extern "C"
void* C_ZNK19QItemSelectionModel5modelEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->model();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:189
// [8] QAbstractItemModel * model()
extern "C"
void* C_ZN19QItemSelectionModel5modelEv(void *this_) {
  return (void*)((QItemSelectionModel*)this_)->model();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:191
// [-2] void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN19QItemSelectionModel8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->setModel(model);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:194
// [-2] void setCurrentIndex(const class QModelIndex &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN19QItemSelectionModel15setCurrentIndexERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->setCurrentIndex(index, command);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:195
// [-2] void select(const class QModelIndex &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN19QItemSelectionModel6selectERK11QModelIndex6QFlagsINS_13SelectionFlagEE(void *this_, const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(index, command);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:196
// [-2] void select(const class QItemSelection &, class QItemSelectionModel::SelectionFlags)
extern "C"
void C_ZN19QItemSelectionModel6selectERK14QItemSelection6QFlagsINS_13SelectionFlagEE(void *this_, const QItemSelection & selection, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QItemSelectionModel*)this_)->select(selection, command);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:197
// [-2] void clear()
extern "C"
void C_ZN19QItemSelectionModel5clearEv(void *this_) {
  ((QItemSelectionModel*)this_)->clear();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:198
// [-2] void reset()
extern "C"
void C_ZN19QItemSelectionModel5resetEv(void *this_) {
  ((QItemSelectionModel*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:200
// [-2] void clearSelection()
extern "C"
void C_ZN19QItemSelectionModel14clearSelectionEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearSelection();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:201
// [-2] void clearCurrentIndex()
extern "C"
void C_ZN19QItemSelectionModel17clearCurrentIndexEv(void *this_) {
  ((QItemSelectionModel*)this_)->clearCurrentIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:204
// [-2] void selectionChanged(const class QItemSelection &, const class QItemSelection &)
extern "C"
void C_ZN19QItemSelectionModel16selectionChangedERK14QItemSelectionS2_(void *this_, const QItemSelection & selected, const QItemSelection & deselected) {
  ((QItemSelectionModel*)this_)->selectionChanged(selected, deselected);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:205
// [-2] void currentChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN19QItemSelectionModel14currentChangedERK11QModelIndexS2_(void *this_, const QModelIndex & current, const QModelIndex & previous) {
  ((QItemSelectionModel*)this_)->currentChanged(current, previous);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:206
// [-2] void currentRowChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN19QItemSelectionModel17currentRowChangedERK11QModelIndexS2_(void *this_, const QModelIndex & current, const QModelIndex & previous) {
  ((QItemSelectionModel*)this_)->currentRowChanged(current, previous);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:207
// [-2] void currentColumnChanged(const class QModelIndex &, const class QModelIndex &)
extern "C"
void C_ZN19QItemSelectionModel20currentColumnChangedERK11QModelIndexS2_(void *this_, const QModelIndex & current, const QModelIndex & previous) {
  ((QItemSelectionModel*)this_)->currentColumnChanged(current, previous);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qitemselectionmodel.h:208
// [-2] void modelChanged(class QAbstractItemModel *)
extern "C"
void C_ZN19QItemSelectionModel12modelChangedEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QItemSelectionModel*)this_)->modelChanged(model);
}
//  main block end
