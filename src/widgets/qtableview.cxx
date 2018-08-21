//  header block begin
// /usr/include/qt/QtWidgets/qtableview.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtableview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableView is pure virtual: false
// QTableView has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTableView : public QTableView {
public:
  virtual ~MyQTableView() {}
// void QTableView(QWidget *)
MyQTableView(QWidget * parent) : QTableView(parent) {}
// Protected Visibility=Default Availability=Available
// [-2] void rowMoved(int, int, int)
  virtual void rowMoved(int row, int oldIndex, int newIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowMoved", &handled, 3, (uint64_t)row, (uint64_t)oldIndex, (uint64_t)newIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::rowMoved(row, oldIndex, newIndex);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void columnMoved(int, int, int)
  virtual void columnMoved(int column, int oldIndex, int newIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnMoved", &handled, 3, (uint64_t)column, (uint64_t)oldIndex, (uint64_t)newIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::columnMoved(column, oldIndex, newIndex);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void rowResized(int, int, int)
  virtual void rowResized(int row, int oldHeight, int newHeight) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowResized", &handled, 3, (uint64_t)row, (uint64_t)oldHeight, (uint64_t)newHeight, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::rowResized(row, oldHeight, newHeight);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void columnResized(int, int, int)
  virtual void columnResized(int column, int oldWidth, int newWidth) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnResized", &handled, 3, (uint64_t)column, (uint64_t)oldWidth, (uint64_t)newWidth, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::columnResized(column, oldWidth, newWidth);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void rowCountChanged(int, int)
  virtual void rowCountChanged(int oldCount, int newCount) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowCountChanged", &handled, 2, (uint64_t)oldCount, (uint64_t)newCount, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::rowCountChanged(oldCount, newCount);
  }
  }

// Protected Visibility=Default Availability=Available
// [-2] void columnCountChanged(int, int)
  virtual void columnCountChanged(int oldCount, int newCount) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"columnCountChanged", &handled, 2, (uint64_t)oldCount, (uint64_t)newCount, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::columnCountChanged(oldCount, newCount);
  }
  }

// void QTableView(QTableViewPrivate &, QWidget *)
MyQTableView(QTableViewPrivate & arg0, QWidget * parent) : QTableView(arg0, parent) {}
// Protected virtual Visibility=Default Availability=Available
// [-2] void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [192] QStyleOptionViewItem viewOptions()
  virtual QStyleOptionViewItem viewOptions() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewOptions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QStyleOptionViewItem*)(irv);
      // Record Record QStyleOptionViewItem
    } else {
    return QTableView::viewOptions();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void paintEvent(QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::paintEvent(e);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void timerEvent(QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::timerEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int horizontalOffset()
  virtual int horizontalOffset() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::horizontalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int verticalOffset()
  virtual int verticalOffset() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::verticalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // Record Record QModelIndex
    } else {
    return QTableView::moveCursor(cursorAction, modifiers);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::setSelection(rect, command);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // Record Record QRegion
    } else {
    return QTableView::visualRegionForSelection(selection);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QModelIndexList selectedIndexes()
  virtual QModelIndexList selectedIndexes() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectedIndexes", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndexList*)(irv);
      // Typedef Record QList<QModelIndex>
    } else {
    return QTableView::selectedIndexes();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::updateGeometries();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [8] QSize viewportSizeHint()
  virtual QSize viewportSizeHint() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // Record Record QSize
    } else {
    return QTableView::viewportSizeHint();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int sizeHintForRow(int)
  virtual int sizeHintForRow(int row) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForRow", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::sizeHintForRow(row);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [4] int sizeHintForColumn(int)
  virtual int sizeHintForColumn(int column) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sizeHintForColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return QTableView::sizeHintForColumn(column);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void verticalScrollbarAction(int)
  virtual void verticalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::verticalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::horizontalScrollbarAction(action);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [1] bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QTableView::isIndexHidden(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::selectionChanged(selected, deselected);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QTableView::currentChanged(current, previous);
  }
  }

};

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:138
// [-2] void rowMoved(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView8rowMovedEiii(void *this_, int row, int oldIndex, int newIndex) {
  ((QTableView*)this_)->QTableView::rowMoved(row, oldIndex, newIndex);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:139
// [-2] void columnMoved(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView11columnMovedEiii(void *this_, int column, int oldIndex, int newIndex) {
  ((QTableView*)this_)->QTableView::columnMoved(column, oldIndex, newIndex);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:140
// [-2] void rowResized(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10rowResizedEiii(void *this_, int row, int oldHeight, int newHeight) {
  ((QTableView*)this_)->QTableView::rowResized(row, oldHeight, newHeight);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:141
// [-2] void columnResized(int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView13columnResizedEiii(void *this_, int column, int oldWidth, int newWidth) {
  ((QTableView*)this_)->QTableView::columnResized(column, oldWidth, newWidth);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:142
// [-2] void rowCountChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView15rowCountChangedEii(void *this_, int oldCount, int newCount) {
  ((QTableView*)this_)->QTableView::rowCountChanged(oldCount, newCount);
}

// Protected Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:143
// [-2] void columnCountChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView18columnCountChangedEii(void *this_, int oldCount, int newCount) {
  ((QTableView*)this_)->QTableView::columnCountChanged(oldCount, newCount);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:147
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QTableView*)this_)->QTableView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:149
// [192] QStyleOptionViewItem viewOptions()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView11viewOptionsEv(void *this_) {
  auto rv = ((QTableView*)this_)->QTableView::viewOptions();
return new QStyleOptionViewItem(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:150
// [-2] void paintEvent(QPaintEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10paintEventEP11QPaintEvent(void *this_, QPaintEvent * e) {
  ((QTableView*)this_)->QTableView::paintEvent(e);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:152
// [-2] void timerEvent(QTimerEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10timerEventEP11QTimerEvent(void *this_, QTimerEvent * event) {
  ((QTableView*)this_)->QTableView::timerEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:154
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView16horizontalOffsetEv(void *this_) {
  return (int)((QTableView*)this_)->QTableView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:155
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView14verticalOffsetEv(void *this_) {
  return (int)((QTableView*)this_)->QTableView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:156
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
  auto rv = ((QTableView*)this_)->QTableView::moveCursor(cursorAction, modifiers);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:158
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QTableView*)this_)->QTableView::setSelection(*rect, command);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:159
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QTableView*)this_)->QTableView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:160
// [8] QModelIndexList selectedIndexes()
extern "C" Q_DECL_EXPORT
QModelIndexList* C_ZNK10QTableView15selectedIndexesEv(void *this_) {
  auto rv = ((QTableView*)this_)->QTableView::selectedIndexes();
return new QModelIndexList(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:162
// [-2] void updateGeometries()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView16updateGeometriesEv(void *this_) {
  ((QTableView*)this_)->QTableView::updateGeometries();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:164
// [8] QSize viewportSizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView16viewportSizeHintEv(void *this_) {
  auto rv = ((QTableView*)this_)->QTableView::viewportSizeHint();
return new QSize(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:166
// [4] int sizeHintForRow(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView14sizeHintForRowEi(void *this_, int row) {
  return (int)((QTableView*)this_)->QTableView::sizeHintForRow(row);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:167
// [4] int sizeHintForColumn(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView17sizeHintForColumnEi(void *this_, int column) {
  return (int)((QTableView*)this_)->QTableView::sizeHintForColumn(column);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:169
// [-2] void verticalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView23verticalScrollbarActionEi(void *this_, int action) {
  ((QTableView*)this_)->QTableView::verticalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:170
// [-2] void horizontalScrollbarAction(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView25horizontalScrollbarActionEi(void *this_, int action) {
  ((QTableView*)this_)->QTableView::horizontalScrollbarAction(action);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:172
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QTableView*)this_)->QTableView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:174
// [-2] void selectionChanged(const QItemSelection &, const QItemSelection &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView16selectionChangedERK14QItemSelectionS2_(void *this_, QItemSelection* selected, QItemSelection* deselected) {
  ((QTableView*)this_)->QTableView::selectionChanged(*selected, *deselected);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:176
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QTableView*)this_)->QTableView::currentChanged(*current, *previous);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView10metaObjectEv(void *this_) {
  return (void*)((QTableView*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QTableView*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QTableView11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QTableView*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTableView::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableView6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QTableView::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:65
// [-2] void QTableView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTableViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTableView*)(0);
  return  new MyQTableView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:66
// [-2] void ~QTableView()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableViewD2Ev(void *this_) {
  delete (QTableView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:68
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTableView*)this_)->setModel(model);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:69
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTableView*)this_)->setRootIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:70
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTableView*)this_)->setSelectionModel(selectionModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:71
// [-2] void doItemsLayout()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView13doItemsLayoutEv(void *this_) {
  ((QTableView*)this_)->doItemsLayout();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:73
// [8] QHeaderView * horizontalHeader()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView16horizontalHeaderEv(void *this_) {
  return (void*)((QTableView*)this_)->horizontalHeader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:74
// [8] QHeaderView * verticalHeader()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView14verticalHeaderEv(void *this_) {
  return (void*)((QTableView*)this_)->verticalHeader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:75
// [-2] void setHorizontalHeader(QHeaderView *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView19setHorizontalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setHorizontalHeader(header);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:76
// [-2] void setVerticalHeader(QHeaderView *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView17setVerticalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setVerticalHeader(header);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:78
// [4] int rowViewportPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView19rowViewportPositionEi(void *this_, int row) {
  return (int)((QTableView*)this_)->rowViewportPosition(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:79
// [4] int rowAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView5rowAtEi(void *this_, int y) {
  return (int)((QTableView*)this_)->rowAt(y);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtableview.h:81
// [-2] void setRowHeight(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setRowHeightEii(void *this_, int row, int height) {
  ((QTableView*)this_)->setRowHeight(row, height);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:82
// [4] int rowHeight(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView9rowHeightEi(void *this_, int row) {
  return (int)((QTableView*)this_)->rowHeight(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:84
// [4] int columnViewportPosition(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView22columnViewportPositionEi(void *this_, int column) {
  return (int)((QTableView*)this_)->columnViewportPosition(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:85
// [4] int columnAt(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView8columnAtEi(void *this_, int x) {
  return (int)((QTableView*)this_)->columnAt(x);
}

// Public Visibility=Default Availability=Available
// since 4.1
// /usr/include/qt/QtWidgets/qtableview.h:87
// [-2] void setColumnWidth(int, int)
#if QT_VERSION >= 0x040100
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTableView*)this_)->setColumnWidth(column, width);
}
#endif // QT_VERSION >= 0x040100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:88
// [4] int columnWidth(int)
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView11columnWidthEi(void *this_, int column) {
  return (int)((QTableView*)this_)->columnWidth(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:90
// [1] bool isRowHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView11isRowHiddenEi(void *this_, int row) {
  return (bool)((QTableView*)this_)->isRowHidden(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:91
// [-2] void setRowHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QTableView*)this_)->setRowHidden(row, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:93
// [1] bool isColumnHidden(int)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView14isColumnHiddenEi(void *this_, int column) {
  return (bool)((QTableView*)this_)->isColumnHidden(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:94
// [-2] void setColumnHidden(int, bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTableView*)this_)->setColumnHidden(column, hide);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:96
// [-2] void setSortingEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setSortingEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:97
// [1] bool isSortingEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView16isSortingEnabledEv(void *this_) {
  return (bool)((QTableView*)this_)->isSortingEnabled();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:99
// [1] bool showGrid()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView8showGridEv(void *this_) {
  return (bool)((QTableView*)this_)->showGrid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:101
// [4] Qt::PenStyle gridStyle()
extern "C" Q_DECL_EXPORT
Qt::PenStyle C_ZNK10QTableView9gridStyleEv(void *this_) {
  return (Qt::PenStyle)((QTableView*)this_)->gridStyle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:102
// [-2] void setGridStyle(Qt::PenStyle)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12setGridStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QTableView*)this_)->setGridStyle(style);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:104
// [-2] void setWordWrap(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView11setWordWrapEb(void *this_, bool on) {
  ((QTableView*)this_)->setWordWrap(on);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:105
// [1] bool wordWrap()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView8wordWrapEv(void *this_) {
  return (bool)((QTableView*)this_)->wordWrap();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:108
// [-2] void setCornerButtonEnabled(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView22setCornerButtonEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setCornerButtonEnabled(enable);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:109
// [1] bool isCornerButtonEnabled()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTableView21isCornerButtonEnabledEv(void *this_) {
  return (bool)((QTableView*)this_)->isCornerButtonEnabled();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:112
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTableView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:113
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QTableView*)this_)->scrollTo(*index, hint);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:114
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTableView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QTableView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:116
// [-2] void setSpan(int, int, int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView7setSpanEiiii(void *this_, int row, int column, int rowSpan, int columnSpan) {
  ((QTableView*)this_)->setSpan(row, column, rowSpan, columnSpan);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:117
// [4] int rowSpan(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView7rowSpanEii(void *this_, int row, int column) {
  return (int)((QTableView*)this_)->rowSpan(row, column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:118
// [4] int columnSpan(int, int)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
int C_ZNK10QTableView10columnSpanEii(void *this_, int row, int column) {
  return (int)((QTableView*)this_)->columnSpan(row, column);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qtableview.h:119
// [-2] void clearSpans()
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10clearSpansEv(void *this_) {
  ((QTableView*)this_)->clearSpans();
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// since 4.2
// /usr/include/qt/QtWidgets/qtableview.h:121
// [-2] void sortByColumn(int, Qt::SortOrder)
#if QT_VERSION >= 0x040200
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableView*)this_)->sortByColumn(column, order);
}
#endif // QT_VERSION >= 0x040200

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:124
// [-2] void selectRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView9selectRowEi(void *this_, int row) {
  ((QTableView*)this_)->selectRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:125
// [-2] void selectColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12selectColumnEi(void *this_, int column) {
  ((QTableView*)this_)->selectColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:126
// [-2] void hideRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView7hideRowEi(void *this_, int row) {
  ((QTableView*)this_)->hideRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:127
// [-2] void hideColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10hideColumnEi(void *this_, int column) {
  ((QTableView*)this_)->hideColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:128
// [-2] void showRow(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView7showRowEi(void *this_, int row) {
  ((QTableView*)this_)->showRow(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:129
// [-2] void showColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView10showColumnEi(void *this_, int column) {
  ((QTableView*)this_)->showColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:130
// [-2] void resizeRowToContents(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView19resizeRowToContentsEi(void *this_, int row) {
  ((QTableView*)this_)->resizeRowToContents(row);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:131
// [-2] void resizeRowsToContents()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView20resizeRowsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeRowsToContents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:132
// [-2] void resizeColumnToContents(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTableView*)this_)->resizeColumnToContents(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:133
// [-2] void resizeColumnsToContents()
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView23resizeColumnsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeColumnsToContents();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:134
// [-2] void sortByColumn(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView12sortByColumnEi(void *this_, int column) {
  ((QTableView*)this_)->sortByColumn(column);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:135
// [-2] void setShowGrid(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QTableView11setShowGridEb(void *this_, bool show) {
  ((QTableView*)this_)->setShowGrid(show);
}

//  main block end
