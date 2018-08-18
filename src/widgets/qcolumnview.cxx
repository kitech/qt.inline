//  header block begin
// since 0x040300
// /usr/include/qt/QtWidgets/qcolumnview.h
#ifndef protected
#define protected public
#endif
#include <qcolumnview.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QColumnView is pure virtual: false
// QColumnView has virtual projected: true
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQColumnView : public QColumnView {
public:
  virtual ~MyQColumnView() {}
// void QColumnView(QWidget *)
MyQColumnView(QWidget * parent) : QColumnView(parent) {}
// Protected virtual Visibility=Default Availability=Available
// bool isIndexHidden(const QModelIndex &)
  virtual bool isIndexHidden(const QModelIndex & index) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"isIndexHidden", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // BoolBoolbool
    } else {
    return QColumnView::isIndexHidden(index);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
  virtual QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"moveCursor", &handled, 2, (uint64_t)cursorAction, (uint64_t)modifiers, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QModelIndex*)(irv);
      // RecordRecordQModelIndex
    } else {
    return QColumnView::moveCursor(cursorAction, modifiers);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void resizeEvent(QResizeEvent *)
  virtual void resizeEvent(QResizeEvent * event) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"resizeEvent", &handled, 1, (uint64_t)event, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColumnView::resizeEvent(event);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
  virtual void setSelection(const QRect & rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSelection", &handled, 2, (uint64_t)&rect, (uint64_t)command, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColumnView::setSelection(rect, command);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QRegion visualRegionForSelection(const QItemSelection &)
  virtual QRegion visualRegionForSelection(const QItemSelection & selection) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visualRegionForSelection", &handled, 1, (uint64_t)&selection, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return *(QRegion*)(irv);
      // RecordRecordQRegion
    } else {
    return QColumnView::visualRegionForSelection(selection);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// int horizontalOffset()
  virtual int horizontalOffset() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"horizontalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QColumnView::horizontalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// int verticalOffset()
  virtual int verticalOffset() const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"verticalOffset", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // IntIntint
    } else {
    return QColumnView::verticalOffset();
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void rowsInserted(const QModelIndex &, int, int)
  virtual void rowsInserted(const QModelIndex & parent, int start, int end) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowsInserted", &handled, 3, (uint64_t)&parent, (uint64_t)start, (uint64_t)end, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColumnView::rowsInserted(parent, start, end);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void currentChanged(const QModelIndex &, const QModelIndex &)
  virtual void currentChanged(const QModelIndex & current, const QModelIndex & previous) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"currentChanged", &handled, 2, (uint64_t)&current, (uint64_t)&previous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColumnView::currentChanged(current, previous);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// void scrollContentsBy(int, int)
  virtual void scrollContentsBy(int dx, int dy) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"scrollContentsBy", &handled, 2, (uint64_t)dx, (uint64_t)dy, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColumnView::scrollContentsBy(dx, dy);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// QAbstractItemView * createColumn(const QModelIndex &)
  virtual QAbstractItemView * createColumn(const QModelIndex & rootIndex) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createColumn", &handled, 1, (uint64_t)&rootIndex, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QAbstractItemView *)(irv);
      // PointerPointerQAbstractItemView *
    } else {
    return QColumnView::createColumn(rootIndex);
  }
  }

// Protected Visibility=Default Availability=Available
// void initializeColumn(QAbstractItemView *)
  virtual void initializeColumn(QAbstractItemView * column) const{
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"initializeColumn", &handled, 1, (uint64_t)column, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QColumnView::initializeColumn(column);
  }
  }

};

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:88
// [1] bool isIndexHidden(const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QColumnView13isIndexHiddenERK11QModelIndex(void *this_, QModelIndex* index) {
  return (bool)((QColumnView*)this_)->QColumnView::isIndexHidden(*index);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:89
// [24] QModelIndex moveCursor(QAbstractItemView::CursorAction, Qt::KeyboardModifiers)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView10moveCursorEN17QAbstractItemView12CursorActionE6QFlagsIN2Qt16KeyboardModifierEE(void *this_, QAbstractItemView::CursorAction cursorAction, QFlags<Qt::KeyboardModifier> modifiers) {
  auto rv = ((QColumnView*)this_)->QColumnView::moveCursor(cursorAction, modifiers);
return new QModelIndex(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:90
// [-2] void resizeEvent(QResizeEvent *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView11resizeEventEP12QResizeEvent(void *this_, QResizeEvent * event) {
  ((QColumnView*)this_)->QColumnView::resizeEvent(event);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:91
// [-2] void setSelection(const QRect &, QItemSelectionModel::SelectionFlags)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView12setSelectionERK5QRect6QFlagsIN19QItemSelectionModel13SelectionFlagEE(void *this_, QRect* rect, QFlags<QItemSelectionModel::SelectionFlag> command) {
  ((QColumnView*)this_)->QColumnView::setSelection(*rect, command);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:92
// [8] QRegion visualRegionForSelection(const QItemSelection &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView24visualRegionForSelectionERK14QItemSelection(void *this_, QItemSelection* selection) {
  auto rv = ((QColumnView*)this_)->QColumnView::visualRegionForSelection(*selection);
return new QRegion(rv);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:93
// [4] int horizontalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QColumnView16horizontalOffsetEv(void *this_) {
  return (int)((QColumnView*)this_)->QColumnView::horizontalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:94
// [4] int verticalOffset()
extern "C" Q_DECL_EXPORT
int C_ZNK11QColumnView14verticalOffsetEv(void *this_) {
  return (int)((QColumnView*)this_)->QColumnView::verticalOffset();
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:95
// [-2] void rowsInserted(const QModelIndex &, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView12rowsInsertedERK11QModelIndexii(void *this_, QModelIndex* parent, int start, int end) {
  ((QColumnView*)this_)->QColumnView::rowsInserted(*parent, start, end);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:96
// [-2] void currentChanged(const QModelIndex &, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView14currentChangedERK11QModelIndexS2_(void *this_, QModelIndex* current, QModelIndex* previous) {
  ((QColumnView*)this_)->QColumnView::currentChanged(*current, *previous);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:99
// [-2] void scrollContentsBy(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView16scrollContentsByEii(void *this_, int dx, int dy) {
  ((QColumnView*)this_)->QColumnView::scrollContentsBy(dx, dy);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:100
// [8] QAbstractItemView * createColumn(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnView12createColumnERK11QModelIndex(void *this_, QModelIndex* rootIndex) {
  return (void*)((QColumnView*)this_)->QColumnView::createColumn(*rootIndex);
}

// Protected Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtWidgets/qcolumnview.h:101
// [-2] void initializeColumn(QAbstractItemView *)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZNK11QColumnView16initializeColumnEP17QAbstractItemView(void *this_, QAbstractItemView * column) {
  ((QColumnView*)this_)->QColumnView::initializeColumn(column);
}
#endif // QT_VERSION >= 0x040400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView10metaObjectEv(void *this_) {
  return (void*)((QColumnView*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:58
// [-2] void updatePreviewWidget(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView19updatePreviewWidgetERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QColumnView*)this_)->updatePreviewWidget(*index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:61
// [-2] void QColumnView(QWidget *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QColumnViewC2EP7QWidget(QWidget * parent) {
  auto _nilp = (MyQColumnView*)(0);
  return  new MyQColumnView(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:62
// [-2] void ~QColumnView()
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnViewD2Ev(void *this_) {
  delete (QColumnView*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:65
// [24] QModelIndex indexAt(const QPoint &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView7indexAtERK6QPoint(void *this_, QPoint* point) {
  auto rv = ((QColumnView*)this_)->indexAt(*point);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:66
// [-2] void scrollTo(const QModelIndex &, QAbstractItemView::ScrollHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView8scrollToERK11QModelIndexN17QAbstractItemView10ScrollHintE(void *this_, QModelIndex* index, QAbstractItemView::ScrollHint hint) {
  ((QColumnView*)this_)->scrollTo(*index, hint);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:67
// [8] QSize sizeHint()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView8sizeHintEv(void *this_) {
  auto rv = ((QColumnView*)this_)->sizeHint();
return new QSize(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:68
// [16] QRect visualRect(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView10visualRectERK11QModelIndex(void *this_, QModelIndex* index) {
  auto rv = ((QColumnView*)this_)->visualRect(*index);
return new QRect(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:69
// [-2] void setModel(QAbstractItemModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QColumnView*)this_)->setModel(model);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:70
// [-2] void setSelectionModel(QItemSelectionModel *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView17setSelectionModelEP19QItemSelectionModel(void *this_, QItemSelectionModel * selectionModel) {
  ((QColumnView*)this_)->setSelectionModel(selectionModel);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:71
// [-2] void setRootIndex(const QModelIndex &)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView12setRootIndexERK11QModelIndex(void *this_, QModelIndex* index) {
  ((QColumnView*)this_)->setRootIndex(*index);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:72
// [-2] void selectAll()
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView9selectAllEv(void *this_) {
  ((QColumnView*)this_)->selectAll();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:75
// [-2] void setResizeGripsVisible(bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView21setResizeGripsVisibleEb(void *this_, bool visible) {
  ((QColumnView*)this_)->setResizeGripsVisible(visible);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:76
// [1] bool resizeGripsVisible()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QColumnView18resizeGripsVisibleEv(void *this_) {
  return (bool)((QColumnView*)this_)->resizeGripsVisible();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:78
// [8] QWidget * previewWidget()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QColumnView13previewWidgetEv(void *this_) {
  return (void*)((QColumnView*)this_)->previewWidget();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolumnview.h:79
// [-2] void setPreviewWidget(QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN11QColumnView16setPreviewWidgetEP7QWidget(void *this_, QWidget * widget) {
  ((QColumnView*)this_)->setPreviewWidget(widget);
}

//  main block end
