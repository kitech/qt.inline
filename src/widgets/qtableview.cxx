//  header block begin
// /usr/include/qt/QtWidgets/qtableview.h
#include <qtableview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTableView is pure virtual: false
// QTableView has virtual projected: true
//  header block end

//  main block begin

class MyQTableView : public QTableView {
public:
  virtual ~MyQTableView() {}
// void QTableView(class QWidget *)
MyQTableView(QWidget * parent) : QTableView(parent) {}
// void rowMoved(int, int, int)
  virtual void rowMoved(int row, int oldIndex, int newIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowMoved", &handled, 3, (uint64_t)row, (uint64_t)oldIndex, (uint64_t)newIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::rowMoved(row, oldIndex, newIndex);
  }
  }
// void columnMoved(int, int, int)
  virtual void columnMoved(int column, int oldIndex, int newIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnMoved", &handled, 3, (uint64_t)column, (uint64_t)oldIndex, (uint64_t)newIndex, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::columnMoved(column, oldIndex, newIndex);
  }
  }
// void rowResized(int, int, int)
  virtual void rowResized(int row, int oldHeight, int newHeight) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowResized", &handled, 3, (uint64_t)row, (uint64_t)oldHeight, (uint64_t)newHeight, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::rowResized(row, oldHeight, newHeight);
  }
  }
// void columnResized(int, int, int)
  virtual void columnResized(int column, int oldWidth, int newWidth) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnResized", &handled, 3, (uint64_t)column, (uint64_t)oldWidth, (uint64_t)newWidth, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::columnResized(column, oldWidth, newWidth);
  }
  }
// void rowCountChanged(int, int)
  virtual void rowCountChanged(int oldCount, int newCount) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"rowCountChanged", &handled, 2, (uint64_t)oldCount, (uint64_t)newCount, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::rowCountChanged(oldCount, newCount);
  }
  }
// void columnCountChanged(int, int)
  virtual void columnCountChanged(int oldCount, int newCount) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"columnCountChanged", &handled, 2, (uint64_t)oldCount, (uint64_t)newCount, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::columnCountChanged(oldCount, newCount);
  }
  }
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::scrollContentsBy(dx, dy);
  }
  }
// QStyleOptionViewItem viewOptions()
  virtual QStyleOptionViewItem viewOptions() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewOptions", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QStyleOptionViewItem*)(irv);
      // RecordRecordQStyleOptionViewItem
    } else {
    return QTableView::viewOptions();
  }
  }
// void paintEvent(class QPaintEvent *)
  virtual void paintEvent(QPaintEvent * e) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"paintEvent", &handled, 1, (uint64_t)e, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::paintEvent(e);
  }
  }
// void timerEvent(class QTimerEvent *)
  virtual void timerEvent(QTimerEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"timerEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::timerEvent(event);
  }
  }
// int horizontalOffset()
  virtual int horizontalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTableView::horizontalOffset();
  }
  }
// int verticalOffset()
  virtual int verticalOffset() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTableView::verticalOffset();
  }
  }
// QModelIndex moveCursor(enum QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QTableView::moveCursor(cursorAction, modifiers);
  }
  }
// void setSelection(const class QRect &, class QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::setSelection(rect, command);
  }
  }
// QRegion visualRegionForSelection(const class QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // RecordRecordQRegion
    } else {
    return QTableView::visualRegionForSelection(selection);
  }
  }
// void updateGeometries()
  virtual void updateGeometries() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"updateGeometries", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::updateGeometries();
  }
  }
// QSize viewportSizeHint()
  virtual QSize viewportSizeHint() {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"viewportSizeHint", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QSize*)(irv);
      // RecordRecordQSize
    } else {
    return QTableView::viewportSizeHint();
  }
  }
// int sizeHintForRow(int)
  virtual int sizeHintForRow(int row) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHintForRow", &handled, 1, (uint64_t)row, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTableView::sizeHintForRow(row);
  }
  }
// int sizeHintForColumn(int)
  virtual int sizeHintForColumn(int column) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"sizeHintForColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QTableView::sizeHintForColumn(column);
  }
  }
// void verticalScrollbarAction(int)
  virtual void verticalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"verticalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::verticalScrollbarAction(action);
  }
  }
// void horizontalScrollbarAction(int)
  virtual void horizontalScrollbarAction(int action) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"horizontalScrollbarAction", &handled, 1, (uint64_t)action, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::horizontalScrollbarAction(action);
  }
  }
// bool isIndexHidden(const class QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QTableView::isIndexHidden(index);
  }
  }
// void selectionChanged(const class QItemSelection &, const class QItemSelection &)
  virtual void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"selectionChanged", &handled, 2, (uint64_t)&selected, (uint64_t)&deselected, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::selectionChanged(selected, deselected);
  }
  }
// void currentChanged(const class QModelIndex &, const class QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QTableView::currentChanged(current, previous);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:55
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK10QTableView10metaObjectEv(void *this_) {
  return (void*)((QTableView*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:65
// [-2] void QTableView(class QWidget *)
extern "C"
void* C_ZN10QTableViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQTableView*)(0);
  return  new MyQTableView(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:66
// [-2] void ~QTableView()
extern "C"
void C_ZN10QTableViewD2Ev(void *this_) {
  delete (QTableView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:68
// [-2] void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN10QTableView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QTableView*)this_)->setModel(model);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:69
// [-2] void setRootIndex(const class QModelIndex &)
extern "C"
void C_ZN10QTableView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QTableView*)this_)->setRootIndex(*index);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:70
// [-2] void setSelectionModel(class QItemSelectionModel *)
extern "C"
void C_ZN10QTableView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QTableView*)this_)->setSelectionModel(selectionModel);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:71
// [-2] void doItemsLayout()
extern "C"
void C_ZN10QTableView13doItemsLayoutEv(void *this_) {
  ((QTableView*)this_)->doItemsLayout();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:73
// [8] QHeaderView * horizontalHeader()
extern "C"
void* C_ZNK10QTableView16horizontalHeaderEv(void *this_) {
  return (void*)((QTableView*)this_)->horizontalHeader();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:74
// [8] QHeaderView * verticalHeader()
extern "C"
void* C_ZNK10QTableView14verticalHeaderEv(void *this_) {
  return (void*)((QTableView*)this_)->verticalHeader();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:75
// [-2] void setHorizontalHeader(class QHeaderView *)
extern "C"
void C_ZN10QTableView19setHorizontalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setHorizontalHeader(header);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:76
// [-2] void setVerticalHeader(class QHeaderView *)
extern "C"
void C_ZN10QTableView17setVerticalHeaderEP11QHeaderView(void *this_, QHeaderView * header) {
  ((QTableView*)this_)->setVerticalHeader(header);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:78
// [4] int rowViewportPosition(int)
extern "C"
int C_ZNK10QTableView19rowViewportPositionEi(void *this_, int row) {
  return (int)((QTableView*)this_)->rowViewportPosition(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:79
// [4] int rowAt(int)
extern "C"
int C_ZNK10QTableView5rowAtEi(void *this_, int y) {
  return (int)((QTableView*)this_)->rowAt(y);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:81
// [-2] void setRowHeight(int, int)
extern "C"
void C_ZN10QTableView12setRowHeightEii(void *this_, int row, int height) {
  ((QTableView*)this_)->setRowHeight(row, height);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:82
// [4] int rowHeight(int)
extern "C"
int C_ZNK10QTableView9rowHeightEi(void *this_, int row) {
  return (int)((QTableView*)this_)->rowHeight(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:84
// [4] int columnViewportPosition(int)
extern "C"
int C_ZNK10QTableView22columnViewportPositionEi(void *this_, int column) {
  return (int)((QTableView*)this_)->columnViewportPosition(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:85
// [4] int columnAt(int)
extern "C"
int C_ZNK10QTableView8columnAtEi(void *this_, int x) {
  return (int)((QTableView*)this_)->columnAt(x);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:87
// [-2] void setColumnWidth(int, int)
extern "C"
void C_ZN10QTableView14setColumnWidthEii(void *this_, int column, int width) {
  ((QTableView*)this_)->setColumnWidth(column, width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:88
// [4] int columnWidth(int)
extern "C"
int C_ZNK10QTableView11columnWidthEi(void *this_, int column) {
  return (int)((QTableView*)this_)->columnWidth(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:90
// [1] bool isRowHidden(int)
extern "C"
bool C_ZNK10QTableView11isRowHiddenEi(void *this_, int row) {
  return (bool)((QTableView*)this_)->isRowHidden(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:91
// [-2] void setRowHidden(int, _Bool)
extern "C"
void C_ZN10QTableView12setRowHiddenEib(void *this_, int row, bool hide) {
  ((QTableView*)this_)->setRowHidden(row, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:93
// [1] bool isColumnHidden(int)
extern "C"
bool C_ZNK10QTableView14isColumnHiddenEi(void *this_, int column) {
  return (bool)((QTableView*)this_)->isColumnHidden(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:94
// [-2] void setColumnHidden(int, _Bool)
extern "C"
void C_ZN10QTableView15setColumnHiddenEib(void *this_, int column, bool hide) {
  ((QTableView*)this_)->setColumnHidden(column, hide);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:96
// [-2] void setSortingEnabled(_Bool)
extern "C"
void C_ZN10QTableView17setSortingEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setSortingEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:97
// [1] bool isSortingEnabled()
extern "C"
bool C_ZNK10QTableView16isSortingEnabledEv(void *this_) {
  return (bool)((QTableView*)this_)->isSortingEnabled();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:99
// [1] bool showGrid()
extern "C"
bool C_ZNK10QTableView8showGridEv(void *this_) {
  return (bool)((QTableView*)this_)->showGrid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:101
// [4] Qt::PenStyle gridStyle()
extern "C"
Qt::PenStyle C_ZNK10QTableView9gridStyleEv(void *this_) {
  return (Qt::PenStyle)((QTableView*)this_)->gridStyle();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:102
// [-2] void setGridStyle(Qt::PenStyle)
extern "C"
void C_ZN10QTableView12setGridStyleEN2Qt8PenStyleE(void *this_, Qt::PenStyle style) {
  ((QTableView*)this_)->setGridStyle(style);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:104
// [-2] void setWordWrap(_Bool)
extern "C"
void C_ZN10QTableView11setWordWrapEb(void *this_, bool on) {
  ((QTableView*)this_)->setWordWrap(on);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:105
// [1] bool wordWrap()
extern "C"
bool C_ZNK10QTableView8wordWrapEv(void *this_) {
  return (bool)((QTableView*)this_)->wordWrap();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:108
// [-2] void setCornerButtonEnabled(_Bool)
extern "C"
void C_ZN10QTableView22setCornerButtonEnabledEb(void *this_, bool enable) {
  ((QTableView*)this_)->setCornerButtonEnabled(enable);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:109
// [1] bool isCornerButtonEnabled()
extern "C"
bool C_ZNK10QTableView21isCornerButtonEnabledEv(void *this_) {
  return (bool)((QTableView*)this_)->isCornerButtonEnabled();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:112
// [16] QRect visualRect(const class QModelIndex &)
extern "C"
void* C_ZNK10QTableView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QTableView*)this_)->visualRect(*index);
return new QRect(rv);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:113
// [-2] void scrollTo(const class QModelIndex &, enum QAbstractItemView::ScrollHint)
extern "C"
void C_ZN10QTableView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QTableView*)this_)->scrollTo(*index, hint);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:114
// [24] QModelIndex indexAt(const class QPoint &)
extern "C"
void* C_ZNK10QTableView7indexAtERK6QPoint(void *this_, QPoint* p) {
  auto rv = ((QTableView*)this_)->indexAt(*p);
return new QModelIndex(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:116
// [-2] void setSpan(int, int, int, int)
extern "C"
void C_ZN10QTableView7setSpanEiiii(void *this_, int row, int column, int rowSpan, int columnSpan) {
  ((QTableView*)this_)->setSpan(row, column, rowSpan, columnSpan);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:117
// [4] int rowSpan(int, int)
extern "C"
int C_ZNK10QTableView7rowSpanEii(void *this_, int row, int column) {
  return (int)((QTableView*)this_)->rowSpan(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:118
// [4] int columnSpan(int, int)
extern "C"
int C_ZNK10QTableView10columnSpanEii(void *this_, int row, int column) {
  return (int)((QTableView*)this_)->columnSpan(row, column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:119
// [-2] void clearSpans()
extern "C"
void C_ZN10QTableView10clearSpansEv(void *this_) {
  ((QTableView*)this_)->clearSpans();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:121
// [-2] void sortByColumn(int, Qt::SortOrder)
extern "C"
void C_ZN10QTableView12sortByColumnEiN2Qt9SortOrderE(void *this_, int column, Qt::SortOrder order) {
  ((QTableView*)this_)->sortByColumn(column, order);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:124
// [-2] void selectRow(int)
extern "C"
void C_ZN10QTableView9selectRowEi(void *this_, int row) {
  ((QTableView*)this_)->selectRow(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:125
// [-2] void selectColumn(int)
extern "C"
void C_ZN10QTableView12selectColumnEi(void *this_, int column) {
  ((QTableView*)this_)->selectColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:126
// [-2] void hideRow(int)
extern "C"
void C_ZN10QTableView7hideRowEi(void *this_, int row) {
  ((QTableView*)this_)->hideRow(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:127
// [-2] void hideColumn(int)
extern "C"
void C_ZN10QTableView10hideColumnEi(void *this_, int column) {
  ((QTableView*)this_)->hideColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:128
// [-2] void showRow(int)
extern "C"
void C_ZN10QTableView7showRowEi(void *this_, int row) {
  ((QTableView*)this_)->showRow(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:129
// [-2] void showColumn(int)
extern "C"
void C_ZN10QTableView10showColumnEi(void *this_, int column) {
  ((QTableView*)this_)->showColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:130
// [-2] void resizeRowToContents(int)
extern "C"
void C_ZN10QTableView19resizeRowToContentsEi(void *this_, int row) {
  ((QTableView*)this_)->resizeRowToContents(row);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:131
// [-2] void resizeRowsToContents()
extern "C"
void C_ZN10QTableView20resizeRowsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeRowsToContents();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:132
// [-2] void resizeColumnToContents(int)
extern "C"
void C_ZN10QTableView22resizeColumnToContentsEi(void *this_, int column) {
  ((QTableView*)this_)->resizeColumnToContents(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:133
// [-2] void resizeColumnsToContents()
extern "C"
void C_ZN10QTableView23resizeColumnsToContentsEv(void *this_) {
  ((QTableView*)this_)->resizeColumnsToContents();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:134
// [-2] void sortByColumn(int)
extern "C"
void C_ZN10QTableView12sortByColumnEi(void *this_, int column) {
  ((QTableView*)this_)->sortByColumn(column);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtableview.h:135
// [-2] void setShowGrid(_Bool)
extern "C"
void C_ZN10QTableView11setShowGridEb(void *this_, bool show) {
  ((QTableView*)this_)->setShowGrid(show);
}
//  main block end
